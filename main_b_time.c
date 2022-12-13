
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 5

int generateRandomInt(int lower, int upper)
{
    return (rand() % (upper - lower + 1)) + lower;
}

void initMat(int *M, int N)
{

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            M[N * i + j] = generateRandomInt(LOWER, UPPER);
        }
    }
}

void initVec(int *v, int N)
{
    for (int i = 0; i < N; i++)
    {
        v[i] = generateRandomInt(LOWER, UPPER);
    }
}

int main(void)
{

    srand(time(0));
    float starTime = (float)clock() / CLOCKS_PER_SEC;

    int N = 40;
    int *M = (int *)malloc(N * N * sizeof(int));
    int *v = (int *)malloc(N * sizeof(int));
    int *b = (int *)malloc(N * sizeof(int));

    if (M == NULL | v == NULL)
    {
        printf("Malloc is failed \n");
        exit(0);
    }
    else
    {
        initMat(M, N);
        printf("M=");
        printMat(M, N);
        initVec(v, N);
        printf("v=");
        printVec(v, N);
        matVecMult(M, v, b, N);

        printf("b=");
        
            printVec(b, N);
    }

    free(M);
    free(v);
    free(b);
    float endTime = (float)clock() / CLOCKS_PER_SEC;
    printf("\nExecution Time: %f s/n\n", endTime - starTime);

    return 0;
}
