#include <stdio.h>

#define SIZE_B 20
#define SIZE_A 5

void sintese(int B[SIZE_B][SIZE_B], float A[SIZE_A][SIZE_A]) {
    int i, j, m, n;
    int sum;
    
    for (i = 0; i < SIZE_A; i++) {
        for (j = 0; j < SIZE_A; j++) {
            sum = 0;
            
            for (m = i * 4; m < i * 4 + 4; m++) {
                for (n = j * 4; n < j * 4 + 4; n++) {
                    sum += B[m][n];
                }
            }
            
            A[i][j] = (float)sum / 16.0;
        }
    }
}

int main() {
    int B[SIZE_B][SIZE_B];
    float A[SIZE_A][SIZE_A];
    int i, j, count = 1;

    for (i = 0; i < SIZE_B; i++) {
        for (j = 0; j < SIZE_B; j++) {
            B[i][j] = count++;
        }
    }

    sintese(B, A);

    for (i = 0; i < SIZE_A; i++) {
        for (j = 0; j < SIZE_A; j++) {
            printf("%.2f ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
