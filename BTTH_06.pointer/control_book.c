/*3. Bài toán thực tế: Quản lý danh sách đối tượng
Mục tiêu: Áp dụng kiến thức vào một vấn đề thực tế.
• Yêu cầu:
• Tạo cấu trúc Book với các thông tin như tên, tác giả, giá.
• Viết chương trình cấp phát động một mảng các Book, cho phép nhập và 
hiển thị thông tin sách.
• Chương trình cần giải phóng bộ nhớ sau khi sử dụng.
*/
#include <stdio.h>
#include <stdlib.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n;
    printf("Nhap so luong sach: ");
    scanf("%d", &n);
    // Cấp phát động mảng các Book
    struct Book *books = (struct Book *)malloc(n * sizeof(struct Book));
    // Kiểm tra xem bộ nhớ có được cấp phát thành công không
    if (books == NULL) {
    printf("Khong the cap phat bo nho.");
    exit(1);
    }
    for (int i = 0; i < n; ++i) {
        printf("Nhap thong tin cho sach thu %d:\n", i + 1);
        printf("Ten sach: ");
        scanf("%s", books[i].title); 
        printf("Tac gia: ");
        scanf("%s", books[i].author);
        printf("Gia: ");
        scanf("%f", &books[i].price);
    }
    printf("\n------Thong tin cac sach------\n");
    for (int i = 0; i < n; ++i) {
        printf("Sach %d:\n", i + 1);
         printf("Ten sach: %s\t\t Tac gia: %s\t\t Gia: %.3f\n", books[i].title,books[i].author,books[i].price);
    }
    // Giải phóng bộ nhớ
    free(books);

    return 0;
}