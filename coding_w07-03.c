#include <stdio.h>

int main() {
    int level;

    printf("Enter level (1-4): ");
    scanf("%d", &level);

    // ตรวจสอบว่าค่า level อยู่นอกช่วงที่กำหนดหรือไม่
    if (level <= 0) {
        printf("Levels lower than 1 are invalid\n");
    } else if (level > 4) {
        printf("Levels higher than 4 are invalid\n");
    } else {
        // ใช้ switch เพื่อเลือกข้อความตามค่า level ที่ถูกต้อง
        switch (level) {
            case 1: printf("Beginner\n"); break;
            case 2: printf("Intermediate\n"); break;
            case 3: printf("Advanced\n"); break;
            case 4: printf("Expert\n"); break;
        }
    }

    return 0;
}