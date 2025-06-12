#include <iostream>
#include <string.h>
using namespace std;

void uniqueElement(int arr[], int size)
{
    int i, ans;
    for (i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];  /* a bitwise XOR operation between ans and the ith element of the array arr
                            This kind of operation is often used in algorithms for tasks like finding a unique number 
                            in an array where every element except one is repeated or for bit manipulation tasks 
                            where you want to toggle specific bits.  */
       
    }
    cout << "The unique element in the list is  : " << ans << endl;
}
void arraySum(int arr[], int size)
{
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout << "The sum of the array is : " << sum << endl;
}

void reverseArray(int arr[], int size)
{
    int temp, start, end;
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout << "The reversed array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 7, 6, 5, 4, 3, 2, 1};
    uniqueElement(arr, 15);
}