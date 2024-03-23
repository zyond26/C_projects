/*  2.Sắp xếp và tìm kiếm sinh viên
Mục tiêu: Áp dụng thuật toán sắp xếp và tìm kiếm trên cấu trúc.
• Yêu cầu:
• Viết chương trình sắp xếp danh sách sinh viên theo tên hoặc điểm số.
• Tìm kiếm sinh viên theo tên hoặc id.*/

#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
    float gpa;
};

struct Student students[50];
int studentCount = 0;

int searchStudentById(struct Student students[], int n, int searchId) {
    for (int i = 0; i < n; i++) {
        if (students[i].id == searchId) {
            return i;
        }
    }
    return -1; 
}

int main() {
    struct Student sv[30];
    for(int i=0;i<2;i++){
        printf("nhap thong tin sv thu %d\n",i+1);
        printf("id sv: ");
        scanf("%d",&sv[i].id);
        printf("ten: ");
        getchar();
        fgets(sv[i].name,30,stdin);
        printf("gpa: ");
        scanf("%f",&sv[i].gpa);
    }
    int searchId;
    printf("\nid can tim: ");
    scanf("%d", &searchId);
    int result = searchStudentById(sv, 2, searchId);
    if (result != -1) {
        printf("sv can tim la sv thu %d \n", result+1);
    } else {
        printf("not found\n");
    }

    return 0;
}