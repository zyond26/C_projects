/*1. Quản lý danh sách sinh viên
Mục tiêu: Sử dụng cấu trúc để quản lý dữ liệu phức tạp.
• Yêu cầu:
• Tạo một mảng các cấu trúc Student.
• Viết chương trình cho phép nhập, hiển thị, và cập nhật thông tin sinh viên.
*/

#include <stdio.h>
#include <string.h>
struct Student {
    int id;
    char name[50];
};

void displayStudent(struct Student student) {
    printf("ID: %d\n", student.id);
    printf("Name: %s\n", student.name);
}

void displayAllStudents(struct Student students[], int numStudents) {
    printf("List of Students:\n");
    for (int i = 0; i < numStudents; i++) {
        displayStudent(students[i]);
    }
}
void update_Student(struct Student students[], int numStudents,int id_update) {
    int studentIndex = -1;
    for (int i = 0; i < numStudents; i++) {
        if (students[i].id == id_update) {
            studentIndex = i;
            break;
        }
    }
    if (studentIndex != -1) {
        printf("nhap id moi: ");
        scanf("%f", &students[studentIndex].id);
         printf("nhap ten moi: ");
        scanf("%s", students[studentIndex].name);
        printf("thong tin da duoc update.\n");
    } else {
        printf("not found.\n");
    }
}
int main() {
    struct Student sv[30];
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    for(int i=0;i<2;i++){
        printf("nhap thong tin sv thu %d\n",i+1);
        printf("id sv: ");
        scanf("%d",&sv[i].id);
        printf("ten: ");
        getchar();
        fgets(sv[i].name,30,stdin);
    }
    printf("------list sv------");
    displayAllStudents(sv,n);
    int idToUpdate;
        printf("nhap id cua sv muon update: ");
        scanf("%d", &idToUpdate);
        update_Student(sv, n, idToUpdate);
    return 0;
}