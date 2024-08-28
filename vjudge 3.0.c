#include <stdio.h>

int main() {
    long long int N,M,X;

    scanf("%lld%lld%lld",&N,&M,&X);
    double z= (M/X)-(N/X);
    if (N%X==0)
    {
        z++;
    }
    printf("%.2lf",z);


}
