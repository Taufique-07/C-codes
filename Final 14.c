#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    float Avg = 0.0;
    float slp[3];

    float minAvg = 999999.0;
    for (int i = 0; i < N; ++i) {
        float hr[3];

        scanf("%f %f %f", &hr[0], &hr[1], &hr[2]);

        float avg = (hr[0] + hr[1] + hr[2]) / 3.0;

        if (avg < minAvg) {
            minAvg = avg;
            for (int j = 0; j < 3; ++j) {
                slp[j] = hr[j];
            }
        }
    }

    printf("%.2f\n", minAvg);
    printf("%.1f %.1f %.1f\n", slp[0], slp[1], slp[2]);

    return 0;
}
