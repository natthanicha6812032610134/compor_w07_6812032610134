#include <stdio.h>

int main() {
    float score, total_score; // ตัวแปรเก็บคะแนนสอบและคะแนนสุดท้าย

    // Input: รับข้อมูลคะแนนจากผู้ใช้
    printf("Enter midterm score: ");
    scanf("%f", &score);

    // Decision: ตรวจสอบว่าคะแนนไม่น้อยกว่า 50 หรือไม่
    if (score >= 50) {
        // Process: บวกคะแนนเพิ่มอีก 5%
        total_score = score + (score * 0.05);
    } else {
        // Process: กรณีคะแนนต่ำกว่า 50 ไม่ได้บวกเพิ่ม
        total_score = score;
    }

    // Output: แสดงผลคะแนนสุดท้ายหลังจากการคำนวณ
    printf("Final score: %.2f\n", total_score);

    // Output: แสดงข้อความปิดท้ายการตรวจสอบ
    printf("End of evaluation\n");

    return 0;
}