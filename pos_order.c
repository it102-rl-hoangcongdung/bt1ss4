#include <stdio.h>

int main() {
    int so_luong_ly = 0;
    long long tong_tien = 0;

    printf("=== HỆ THỐNG POS TÍNH TIỀN COFFEE ===\n");
    printf("Nhập số lượng ly trong đơn hàng: ");
    scanf("%d", &so_luong_ly);

    // Sửa lỗi Off-by-one: Thay thế < bằng <=
    for (int i = 1; i <= so_luong_ly; i++) {
        long long don_gia_co_ban = 30000; // Giá ly size S mặc định: 30.000 VNĐ
        int size_option = 0;             // 1: Size S, 2: Size M (+6000), 3: Size L (+10000)

        printf("\n--- Ly thứ %d ---\n", i);
        printf("Chọn size (1-Size S, 2-Size M, 3-Size L): ");
        scanf("%d", &size_option);

        if (size_option == 2) {
            don_gia_co_ban += 6000;
        } else if (size_option == 3) {
            don_gia_co_ban += 10000;
        }

        tong_tien += don_gia_co_ban;
    }

    printf("\n===================================\n");
    printf("Tổng chi phí đơn hàng: %lld VNĐ\n", tong_tien);

    return 0;
}