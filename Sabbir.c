#include <stdio.h>

struct student {
    char name[20];
    int score;
};

int main() {
    int i, n, passnum = 60;
    float totalscore = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter the test score for %s: ", students[i].name);
        scanf("%d", &students[i].score);
        totalscore += students[i].score;
    }

    float average = totalscore / n;
    printf("\nAverage test score: %.2f\n", average);

    printf("===============================\nReport:\n");
    printf("Name\t\tScore\t\tResult\n");
    for (i = 0; i < n; i++) {
        printf("%s\t\t%d\t\t%s\n", students[i].name, students[i].score, (students[i].score >= passnum) ? "Pass" : "Fail");
    }
    printf("===============================\n");

    return 0;
}

