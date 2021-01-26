// csleepcal.c

// Import Section
#include <stdio.h>
#include <conio.h>

// Main Section
int main()
{
    int sleep;
    int n;
    char sleep_problem;

    sleep = 0;
    printf("How many hours have you sleep?\n"); //ตรงนี้ต้องการทราบคำตอบว่า "นอนไปกี่ชั่วโมง"
    printf(">>> ");
    scanf("%d", &sleep);

    if (sleep == 0)
    {
        printf("Error!");
    }

    if (sleep <= 5) //ถ้านอนน้อยกว่า หรือ เท่ากับ 5 ชั่วโมง (sleep<=5)
    {
        printf("-------------\n");
        printf("Do you have any problems in sleeping? (Y/N)\n"); //โปรแกรมจะถามต่อว่า มีปัญหาการนอนหรือไม่ (Y/N)
        printf(">>> ");
        scanf("%s", &sleep_problem);

        switch (sleep_problem)
        {
        case 'Y': //ถ้ามีปัญหาการนอน (Y) ให้ไล่กลับไปนอน
            printf("Go back and sleep now!\n");
            break;

        case 'N': //ถ้าไม่มีปัญหาการนอน (N) ก็บอกว่าควรนอนมากกว่านี้
            printf("You should sleep more!\n");
            break;
        }
    }

    if (sleep > 5 && sleep <= 8) //ถ้านอนน้อยกว่า 8 ชั่วโมง แต่มากกว่า 5 ชั่วโมง (5<sleep<8)
    {
        printf("-------------\n");
        printf("Good Job!\n"); //ให้แสดงคำชม "ดีมาก"
    }

    if (sleep > 8 && sleep < 32) //ถ้านอนมากกว่า 8 ชั่วโมงขึ้นไป (sleep>8)
    {
        printf("-------------\n");
        printf("You sleep too much!\n"); //ให้โปรแกรมแสดงคำแนะนำ "มึงนอนมากเกินไปแล้ว"
    }

    getch();
    return 0;
}
