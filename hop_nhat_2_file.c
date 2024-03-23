#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
void delete(char *str) {
    size_t len = strlen(str);
    int i;
    for (i = 0; i <= len; i = i + 1){
        if(str[i] == '\n') {
            str[i] = ' ';
        }
    }
}
int cmp(const void *a,const void *b){
    char x = (char)a;
    char y = (char)b;
    if(strcmp(x,y)<0) return -1;
    else return 1;
}
int main() {
    char str_1[20005];
    char str_2[20005];
    FILE *s1= fopen("DATA1.in","r");
    FILE *s2= fopen("DATA2.in","r");
    char str[20005];
    while (1) {
        if (fgets(str,sizeof(str), s1) == NULL) break;
        strcat(str_1,str);
    }
    char str1[20005];
    while (1) {
        if (fgets(str,sizeof(str1), s2) == NULL) break;
        strcat(str_2,str);
    }
    delete(str_1);
    delete(str_2);
    char news[40010];
    strcat(news,str_1);
    strcat(news," ");
    strcat(news,str_2);
    char giao[20005]= "",hop[20005]= "";
    char *ptr_str = strtok(str_1," ");
    while(ptr_str!=NULL){
        if(strstr(str_2,ptr_str)!=NULL){
            if(strstr(giao,ptr_str)==NULL)
                strcat(giao,ptr_str), strcat(giao," ");
        }
        ptr_str=strtok(NULL," ");
    }
    char *ptr = strtok(news," ");
    while(ptr!=NULL){
        if(strstr(hop,ptr)==NULL){
            strcat(hop,ptr);
            strcat(hop," ");
        }
        ptr=strtok(NULL," ");
    }
    char a[2005][2005];
    int n=0;
    char *token = strtok(hop," ");
    while(token!=NULL){
        strcpy(a[n],token);
        ++n;
        token=strtok(NULL," ");
    }
    qsort(a,n,sizeof(a[0]),cmp);
    for(int i=0;i<n;i++){
        printf("%s ",a[i]);
    }
    printf("\n");
    char b[2005][2005];
    n=0;
    char *token_2 = strtok(giao," ");
    while(token_2!=NULL){
        strcpy(b[n],token_2);
        ++n;
        token_2=strtok(NULL," ");
    }
    qsort(b,n,sizeof(b[0]),cmp);
    for(int i=0;i<n;i++){
        printf("%s ",b[i]);
    }
    return 0;
}