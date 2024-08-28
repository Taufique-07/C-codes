
#include<stdio.h>
int main()
{
struct employee
{
int empid[5];
int salary;
int employee *s;
}emp;
printf("%d %d", sizeof(employee), sizeof(emp.empid));
return 0;
}
