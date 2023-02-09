#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}
int partition(int A[], int low, int high)
{
    int pivot, temp;
    pivot = A[low];
    int i = low + 1;
    int j = high;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}
void QuickSort(int A[], int low, int high)
{
    int partitionIndex;
    if(low<high){
    partitionIndex = partition(A, low, high);
    QuickSort(A, low, partitionIndex - 1);
    QuickSort(A, partitionIndex + 1, high);
    }
}

int main()
{
    int A[] = {21, 11, 23, 13,1,23,44,53,232,5,6,212,321,123,5663,21234,23};
    int n = 17;
    printArray(A, n);
    QuickSort(A, 0, n-1);
    printArray(A, n);
    return 0;
}