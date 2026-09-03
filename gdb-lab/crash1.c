#include <stdio.h>

int sum_range(int *arr, int lo, int hi)
{
    int total = 0;
    for (int i = lo; i <= hi; i++) {
        total += arr[i];
    }
    return total;
}

int compute_total(int *arr, int n)
{
    return sum_range(arr, 0, n - 1);
}

void print_report(int value)
{
    printf("total = %d\n", value);
}

int main(void)
{
    int arr[5] = {80,90,75,88,92};                     /* 成绩数组*/
    print_report(compute_total(arr, 5)); /* 期望:算5个数的和 */
    return 0;
}
