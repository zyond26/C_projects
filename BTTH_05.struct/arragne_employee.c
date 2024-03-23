/*3. Bài toán thực tế: Quản lý nhân sự
Mục tiêu: Áp dụng cấu trúc vào một ứng dụng thực tế.
• Yêu cầu:
• Tạo cấu trúc Employee với các thông tin như mã nhân viên, tên, chức vụ, 
lương.
• Viết chương trình để quản lý nhân sự, bao gồm các chức năng như thêm, 
xóa, hiển thị, và sắp xếp nhân viên*/

#include <stdio.h>
#include <string.h>

struct Employee {
    int employeeID;
    char name[50];
    char position[50];
    float salary;
};
struct Employee employees[50];
int employeeCount = 0;

void addEmployee() {
    if (employeeCount < 50) {
        printf("id nhan vien : ");
        scanf("%d", &employees[employeeCount].employeeID);
        printf("ten nhan vien : ");
        scanf("%s", employees[employeeCount].name);
        printf("chuc vu : ");
        scanf("%s", employees[employeeCount].position);
        printf("luong thang: ");
        scanf("%f", &employees[employeeCount].salary);

        employeeCount++;
        printf("nhan vien moi da duoc them !\n");
    } else {
        printf("list da day, dung them!\n");
    }
}
void displayEmployees() {
    printf("\nlist nhan vien:\n");
    printf("id NV\tten\t\tchuc vu\t\tLuong\n");
    
    for (int i = 0; i < employeeCount; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n", employees[i].employeeID, employees[i].name, employees[i].position, employees[i].salary);
    }
}
void sortEmployeesByName() {
    for (int i = 0; i < employeeCount - 1; i++) {
        for (int j = 0; j < employeeCount - i - 1; j++) {
            if (strcmp(employees[j].name, employees[j + 1].name) > 0) {
                struct Employee temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
}
int main() {
    int choice;
    do {
        printf("\n----- Quan ly nhan su-----");
        printf("\n1. them nhan vien moi");
        printf("\n2.hien thi list nhan vien");
        printf("\n3.sap xep nhan vien theo ten");
        printf("\n0. Out");
        printf("\n choose: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                sortEmployeesByName();
                printf("list nhan vien theo ten :\n");
                displayEmployees();
                break;
            case 0:
                printf("out .\n");
                break;
            default:
                printf("Invalid. please choose again.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}