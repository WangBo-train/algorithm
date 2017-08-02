#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 10

void print_arr(int *arr, int len)
{
    int i  = 0;
    for(i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
//shell sort
void shell_sort(int *arr, int len)
{
    int i = 0;
    int j = 0;
    int distance = 0;
    int count = 0;
    int temp = 0;
    //group by 2^k
    for(distance = len / 2; distance >= 1; distance /= 2)
    {
        for(i = distance; i < len; i++)
        {
            temp = arr[i];
            j = i - distance;
            while(j >= 0 && temp < arr[j])
            {
                arr[j + distance] = arr[j];
                j -= distance;
            }
            arr[j + distance] = temp;
        }
        count++;
        printf("%d sort result, distance is %d : ", count, distance);
        print_arr(arr, len);
    }
    return;
}

int main(void)
{
    int array[N] = {0};
    
    srand((unsigned int)time(NULL));

    int i = 0;
    for(i = 0; i < N; i++)
    {
        array[i] = rand() % 100 + 1;
    }

    printf("before sort\n");
    print_arr(array, N);
    
    printf("after shell sort\n");
    shell_sort(array, N);
    return 0;
}
