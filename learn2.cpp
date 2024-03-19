#include <iostream>
#include <bitset>

int main() {
    // Khởi tạo biến var_1 có 32 bit (để minh họa)
    unsigned int var_1 = 0b11011011110100111011011011001011;  // Ví dụ giá trị ban đầu

    std::cout << "Gia tri ban dau cua var_1: " << std::bitset<32>(var_1) << std::endl;

    // Xóa bit thứ 8 của var_1
    var_1 = var_1 & ~(1u << 7);  // AND với 0b11111111111111111111111101111111

    std::cout << "Gia tri sau khi xoa bit thu 8: " << std::bitset<32>(var_1) << std::endl;

    return 0;
}
