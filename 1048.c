#include<stdio.h>

int main()
{
    double salary;
    scanf("%lf", &salary);

    if(salary>0 && salary<=400.00)
    {
       double NewSalary=salary+(salary*0.15);
       printf("Novo salario: %.2lf\n",NewSalary);
       printf("Reajuste ganho: %.2lf\n",salary*0.15);
       printf("Em percentual: 15 %%\n");
    }
    else if(salary>400.00 && salary<=800.00)
    {
       double NewSalary=salary+(salary*0.12);
       printf("Novo salario: %.2lf\n",NewSalary);
       printf("Reajuste ganho: %.2lf\n",salary*0.12);
       printf("Em percentual: 12 %%\n");
    }
    else if(salary>800.00 && salary<=1200.00)
    {
       double NewSalary=salary+salary*(0.10);
       printf("Novo salario: %.2lf\n",NewSalary);
       printf("Reajuste ganho: %.2lf\n",salary*0.10);
       printf("Em percentual: 10 %%\n");
    }
    else if (salary>1200.00 && salary<=2000)
    {
       double NewSalary=salary+(salary*0.07);
       printf("Novo salario: %.2lf\n",NewSalary);
       printf("Reajuste ganho: %.2lf\n",salary*0.07);
       printf("Em percentual: 7%%\n");
    }
    else
    {
       double NewSalary=salary+(salary*0.04);
       printf("Novo salario: %.2lf\n",NewSalary);
       printf("Reajuste ganho: %.2lf\n",salary*0.04);
       printf("Em percentual: 4 %%\n");
    }
    return 0;
}
