#include <stdio.h>

int main() {
    int x, y; // ตัวแปรเก็บค่าจำนวนเต็มสองจำนวน

    // รับข้อมูลจากผู้ใช้
    printf("Enter first number (x): ");
    scanf("%d", &x);
    printf("Enter second number (y): ");
    scanf("%d", &y);

    // ตรวจสอบความสัมพันธ์ระหว่าง x และ y
    if (x > y) {
        printf("x is greater than y\n"); // กรณีที่ x มีค่ามากกว่า y
    } else if (x < y) {
        printf("x is less than y\n"); // กรณีที่ x มีค่าน้อยกว่า y
    } else {
        printf("x is equal to y\n"); // กรณีที่ x และ y มีค่าเท่ากัน
    }

    return 0;
}