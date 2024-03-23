#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char hoTen[50];
    char gioiTinh[4];
    float diemPython;
    float diemC;
    float diemTrungBinh;
    char ketQua[5];
} HocVien;

void nhapDanhSach(HocVien danhSach[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("Nhap thong tin hoc vien %d:\n", i + 1);
        printf("Ho ten: ");
        scanf("%s", danhSach[i].hoTen);
        printf("Gioi tinh: ");
        scanf("%s", danhSach[i].gioiTinh);
        printf("Diem Python: ");
        scanf("%f", &danhSach[i].diemPython);
        printf("Diem C: ");
        scanf("%f", &danhSach[i].diemC);

        danhSach[i].diemTrungBinh = (danhSach[i].diemC * 2 + danhSach[i].diemPython) / 3;
        if (danhSach[i].diemTrungBinh >= 5) {
            strcpy(danhSach[i].ketQua, "Dau");
        } else if (danhSach[i].diemTrungBinh < 5 && strcmp(danhSach[i].gioiTinh, "nam") == 0) {
            strcpy(danhSach[i].ketQua, "Truot");
        } else if (danhSach[i].diemTrungBinh < 5 && strcmp(danhSach[i].gioiTinh, "nu") == 0) {
            strcpy(danhSach[i].ketQua, "Dau");
        }
    }
}

void sapXepDanhSach(HocVien danhSach[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (danhSach[i].diemTrungBinh < danhSach[j].diemTrungBinh) {
                HocVien temp = danhSach[i];
                danhSach[i] = danhSach[j];
                danhSach[j] = temp;
            }
        }
    }
}

void xuatDanhSach(HocVien danhSach[], int n) {
    printf("\nDanh sach hoc vien:\n");
    for (int i = 0; i < n; ++i) {
        printf("Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
               danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
               danhSach[i].diemTrungBinh, danhSach[i].ketQua);
    }
}

void timKiemHocVien(HocVien danhSach[], int n, char ten[]) {
    int found = 0;
    printf("\nKet qua tim kiem cho hoc vien %s:\n", ten);
    for (int i = 0; i < n; ++i) {
        if (strcmp(danhSach[i].hoTen, ten) == 0) {
            printf("Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
                   danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
                   danhSach[i].diemTrungBinh, danhSach[i].ketQua);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay hoc vien %s.\n", ten);
    }
}

void hienThiDaDau(HocVien danhSach[], int n) {
    printf("\nDanh sach hoc vien da dau:\n");
    for (int i = 0; i < n; ++i) {
        if (strcmp(danhSach[i].ketQua, "Dau") == 0) {
            printf("Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
                   danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
                   danhSach[i].diemTrungBinh, danhSach[i].ketQua);
        }
    }
}

void hienThiDaTruot(HocVien danhSach[], int n) {
    printf("\nDanh sach hoc vien da truot:\n");
    for (int i = 0; i < n; ++i) {
        if (strcmp(danhSach[i].ketQua, "Truot") == 0) {
            printf("Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
                   danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
                   danhSach[i].diemTrungBinh, danhSach[i].ketQua);
        }
    }
}

void hienThiDiemTBHon8(HocVien danhSach[], int n) {
    printf("\nDanh sach hoc vien co diem trung binh >= 8:\n");
    for (int i = 0; i < n; ++i) {
        if (danhSach[i].diemTrungBinh >= 8) {
            printf("Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
                   danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
                   danhSach[i].diemTrungBinh, danhSach[i].ketQua);
        }
    }
}

void ghiFile(HocVien danhSach[], int n, char tenFile[]) {
    FILE *file = fopen(tenFile, "w");
    if (file == NULL) {
        printf("Khong the mo file de ghi.\n");
        return;
    }

    fprintf(file, "Danh sach hoc vien:\n");
    for (int i = 0; i < n; ++i) {
        fprintf(file, "Ho ten: %s, Gioi tinh: %s, Diem Python: %.2f, Diem C: %.2f, Diem Trung Binh: %.2f, Ket qua: %s\n",
                danhSach[i].hoTen, danhSach[i].gioiTinh, danhSach[i].diemPython, danhSach[i].diemC,
                danhSach[i].diemTrungBinh, danhSach[i].ketQua);
    }

    fclose(file);
}

void docFile(HocVien danhSach[], int *n, char tenFile[]) {
    FILE *file = fopen(tenFile, "r");
    if (file == NULL) {
        printf("Khong the mo file de doc.\n");
        return;
    }

    *n = 0;
    while (fscanf(file, "Ho ten: %s, Gioi tinh: %s, Diem Python: %f, Diem C: %f, Diem Trung Binh: %f, Ket qua: %s\n",
                  danhSach[*n].hoTen, danhSach[*n].gioiTinh, &danhSach[*n].diemPython, &danhSach[*n].diemC,
                  &danhSach[*n].diemTrungBinh, danhSach[*n].ketQua) != EOF) {
        (*n)++;
    }

    fclose(file);
}

int main() {
    HocVien danhSach[100];
    int n;

    printf("Nhap so luong hoc vien: ");
    scanf("%d", &n);

    nhapDanhSach(danhSach, n);
    sapXepDanhSach(danhSach, n);

    xuatDanhSach(danhSach, n);

    char tenTimKiem[50];
    printf("\nNhap ho ten hoc vien can tim kiem: ");
    scanf("%s", tenTimKiem);
    timKiemHocVien(danhSach, n, tenTimKiem);

    hienThiDaDau(danhSach, n);
    hienThiDaTruot(danhSach, n);
    hienThiDiemTBHon8(danhSach, n);

    char tenFile[50];
    printf("\nNhap ten file de ghi danh sach: ");
    scanf("%s", tenFile);
    ghiFile(danhSach, n, tenFile);

    int m = 0;
    HocVien danhSachDoc[100];
    docFile(danhSachDoc, &m, tenFile);

    xuatDanhSach(danhSachDoc, m);

    return 0;
}
