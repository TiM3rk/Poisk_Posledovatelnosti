//Реализуйте алгоритм поиска наибольшей непрерывной подпоследовательности с наибольшей суммой в данном массиве целых чисел
//Например, для массива - 2, 1, -3, 4, -1, 2, 1, -5, 4 наибольшая сумма непрерывной подпоследовательности равна 6 (сумма 4, -1, 2, 1).


#include <iostream>
using namespace std;

int FindMaxSubsequence(int* arr, int size)
{
    int MaxSub = arr[0];
    int miniMaxSub = arr[0];
    for (int i = 1; i < size; i++)
    {
        miniMaxSub = max(arr[i], miniMaxSub + arr[i]);
        MaxSub = max(MaxSub, miniMaxSub);
    }
    return MaxSub;
}

int main()
{
    int n = 9;
    int* prototype = new int[n] {10, -2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max subsequence sum: " << FindMaxSubsequence(prototype, n) << endl;
    return 0;
}