#include<stdio.h>

int main()

 {
     while(1){
    int n;
    long long int a = 0, b = 1, result = 0;

    scanf("%d", &n);

    if (n == 0) {
        result = a;
    } else if (n == 1) {
        result = b;
    } else {
        for (int i = 2; i <= n; i++) {
            result = a + b;
            a = b;
            b = result;
        }
    }

    printf("%lld\n", result);

    return 0;
 }
}

