struct student
{
    char name[20];
    char id[20];
    int semesterID;
    int age;
    float cgpa;
};
int main(){
    int n;
    printf("Enter the number of Student: ");
    scanf("%d",&n);
    struct student std[n];
    for(int i=0;i<n;i++){
        printf("\nStudent Information - %d\n",i+1);
        printf("Student name: ");
        scanf("%s",std[i].name);
        printf("Student ID: ");
        scanf("%s",std[i].id);
        printf("Student age: ");
        scanf("%d",&std[i].age);
        printf("Student CGPA: ");
        scanf("%f",&std[i].cgpa);
    printf("=====================\n");
    }
    system("cls");
    char stdID[20];
    printf("Search by student ID: ");
    scanf("%s",stdID);

    for(int i=0;i<n;i++){
        if(strcmp(stdID,std[i].id)==+0){
            printf("\nStudent Information ID- %s\n",stdID);
            printf("\nStudent name: %s",std[i].name);
            printf("\nStudent ID: %s",std[i].id);
            printf("\nStudent age: %d",std[i].age);
            printf("\nStudent CGPA: %f",std[i].cgpa);
            printf("\n=====================\n");
        }
    }

}
