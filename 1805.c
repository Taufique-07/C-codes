#include<stdio.h>

main()
{
	int i,a,b;
	long int sum=0;
		scanf("%d %d",&a,&b);
		for(i=a; i<=b; i++){
			sum+=i;
		}
		printf("%d\n",sum);

}



