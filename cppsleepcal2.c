// cppsleepcal2.cpp
#include <stdio.h>

int main()
{
    int sleep;
    char sleep_problem;

    printf("How many Hour have you sleep?");
    printf("\n>>> ");
    scanf("%d", &sleep);

    if (sleep <= 5)
    {
        printf("\nDo you have problem in sleeping?");
        printf("\n>>> ");
        scanf("%s", &sleep_problem);

        switch (sleep_problem)
        {
        case 'Y':
            printf("\nGo back to sleep now!");
            break;

        case 'N':
            printf("\nYou should sleep more!");
            break;

        default:
            break;
        }
    }

    else if (sleep > 5 && sleep <= 8)
    {
    }
}