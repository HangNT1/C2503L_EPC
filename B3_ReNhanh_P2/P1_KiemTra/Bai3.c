#include <stdio.h>

int main()
{
//   Yêu cầu: Viết chương trình nhập vào điểm của 3 môn học: Toán, Văn, và Anh. Dựa trên điểm trung bình của 3 môn, hãy xác định học lực của học sinh theo các tiêu chí sau: 
//     Nếu điểm trung bình >= 8.0, và không có môn nào dưới 6.5: Học sinh Giỏi.
//     Nếu điểm trung bình >= 6.5, và không có môn nào dưới 5.0: Học sinh Khá.
//     Nếu điểm trung bình >= 5.0, và không có môn nào dưới 3.5: Học sinh Trung bình.
//     Nếu điểm trung bình < 5.0 hoặc có môn nào dưới 3.5: Học sinh Yếu.
    // B1: Tinh diem trung binh
    int canhThuNhat;
    int canhThuHai;
    int canhThuBa;
    printf("Moi nhap canh 1:");
    scanf("%d",&canhThuNhat); // 5
    printf("Moi nhap canh 2:");
    scanf("%d",&canhThuHai); // 3
    printf("Moi nhap canh 3:");
    scanf("%d",&canhThuBa); // 7
    float diemTrungBinh = 1.0 * (canhThuNhat + canhThuHai + canhThuBa)/3;
    // // Tim min 
    // int min = canhThuBa;
    // if(min > canhThuHai){
    //     min = canhThuHai;
    // }
    // if(min > canhThuNhat){
    //     min = canhThuNhat;
    // }
    // B2: Check dieu kien 
    // 4: 1 1 2 
    if((diemTrungBinh >=8 && diemTrungBinh <= 10) && canhThuNhat >= 6.5 && canhThuHai >= 6.5 && canhThuBa >= 6.5)){
        printf("Hoc sinh gioi");
    } // check tuong tu 
    
    return 0;
}