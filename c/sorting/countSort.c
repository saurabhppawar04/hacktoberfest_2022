#include <stdio.h>
#include <stdlib.h>
int FindMax(int *arr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max + 1;
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void CountSort(int *A, int n)
{
    int Max = FindMax(A, n);
    // printf("%d\n", Max);

    // ---------Created new extra array and initialize with all blocks with value 0----------
    int *AuxiArr = (int *)malloc(Max * sizeof(int));
    for (int i = 0; i < Max; i++)
    {
        AuxiArr[i] = 0;
    }
    // printArray(AuxiArr, Max); // To do for his happen or not

    // -----travasing and increamenting value by 1-----------
    for (int j = 0; j < n; j++)
    {
        if (A[j])
        {
            AuxiArr[A[j]]++;
        }
    }
    // printArray(AuxiArr, Max);

    // --------------time for sorting data in main array-----------
    int p = 0; // p is for stroing index at A (in given array)
    for (int k = 0; k < Max;)
    {
        if (AuxiArr[k] == 0)
        {
            k++; // if value in auxi array is 0 then go for next index
        }
        else
        {
            // if not then push the index value in Main value and increament main array pointer
            A[p] = k;
            p++;
            AuxiArr[k]--; // and decreament value by 1
        }
    }
    // printArray(A, n);
    free(AuxiArr);
}

int main(int argc, char const *argv[])
{
    int Array[] = {3, 1, 9, 7, 1, 2, 4};
    int sizeOfArr = sizeof(Array) / sizeof(Array[0]);

    printf("Before Sorting\n");
    printArray(Array, sizeOfArr);
    printf("After Sorting\n");
    CountSort(Array, sizeOfArr);
    printArray(Array, sizeOfArr);
    return 0;
}