#include <stdio.h>
#include <stdlib.h>

int main() {
    int NA, NF;
    scanf("%d %d", &NA, &NF);

    long long int *A = malloc(sizeof(long long int) * NA);
    long long int *F = malloc(sizeof(long long int) * NF);

    for (int i = 0; i < NA; i++) {
        scanf("%lld", &A[i]);
    }

    for (int i = NF-1; i >= 0; i--) {
        scanf("%lld", &F[i]);
    }

    long long int *R = malloc(sizeof(long long int) * (NA - NF + 1));

    for (int i = 0; i <= NA - NF; i++) {
        long long int sum = 0;
        for (int j = 0; j < NF; j++) {
            sum += A[i + j] * F[j];
        }
        R[i] = sum;
    }

    for (int i = 0; i <= NA - NF; i++) {
        printf("%lld\n", R[i]);
    }

    free(R);
    free(F);
    free(A);

    return 0;
}
