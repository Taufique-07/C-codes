#include <stdio.h>

int main() {
   long long int N;

    scanf("%lld", &N);

    int last = 1;

    for (int i = 1; i <= N; i++) {
        last = (last * i) % 10000;
    }

    printf("%lld\n", last);

    return 0;
}
