#include<stdio.h>

int main()
 {
    char nickname[100], preferredSpot[100];
    int age;

    printf("Nickname: ");
    scanf("%s", nickname);

    printf("Age: ");
    scanf("%d", &age);

    printf("Preferred Vacation Spot: ");
    scanf("%s", preferredSpot);

    printf("%s\n%d\n%s\n", nickname, age, preferredSpot);

    return 0;
}
