/******************************************************************************
 * Họ và tên: [NGUYỄN QUANG THÀNH ĐẠT]
 * MSSV:      [PS49313]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>

int main(){
    int choice;
    printf("Menu Chuong Trinh:\n");
    printf("1. Tinh Hoc Luc\n");
    printf("2. Giai Phuong Trinh\n");
    printf("3. Tinh Tien Dien\n");
    printf("Nhap lua chon cua ban (1-3): ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Ban da chon BAI 1: Tinh Hoc Luc\n");
            // Goi ham hoac code tinh hoc luc o day
            break;
        case 2:
            printf("Ban da chon BAI 2: Giai Phuong Trinh\n");
            // Goi ham hoac code giai phuong trinh o day
            break;
        case 3:
            printf("Ban da chon BAI 3: Tinh Tien Dien\n");
            // Goi ham hoac code tinh tien dien o day
            break;
        default:
            printf("Lua chon khong hop le! Vui long chon so tu 1 den 3.\n");
    }

    return 0;
    
   

}