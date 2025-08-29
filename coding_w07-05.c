#include <stdio.h>

int main() {
    int age, vip_level;
    float amount;
    int discount = 0; // ตัวแปรเก็บเปอร์เซ็นต์ส่วนลด

    // Input: อ่านข้อมูลลูกค้า
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter VIP level (1-5): ");
    scanf("%d", &vip_level);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    // Process: กำหนดส่วนลดตามเงื่อนไข
    if (age > 60 || vip_level == 3 || vip_level == 4) {
        discount = 20;
    } else if ((age >= 30 && age <= 40) && amount > 2000) {
        discount = 15;
    } else if ((age >= 18 && age <= 25) && amount > 1000) {
        discount = 10;
    } else if (vip_level == 5 || amount > 50000) {
        discount = 25;
    } else {
        discount = 0; // ไม่มีส่วนลด
    }

    // Output: แสดงผลลัพธ์
    printf("\n--- Customer Info ---\n");
    printf("Age: %d | VIP Level: %d | Amount: %.2f THB\n", age, vip_level, amount);

    if (discount > 0) {
        printf("Discount received: %d%%\n", discount);
    } else {
        printf("No discount applied\n");
    }

    printf("Thank you for shopping with us!\n");

    return 0;
}