#include <iostream>
#include <string>
using namespace std;

int solve ( int n , int arr[] , int curr , int prev)
{
    // base case 
    if ( curr == n)
    {
        return 0;
    }

    // Include case 
    int take =0;
    if ( prev == -1 || arr[curr] > arr[prev])
    {
        take = 1 + solve( n , arr , curr +1 , curr);
    }

    // Exclude Case 
    int notTake =0 ;
    notTake = 0 + solve( n , arr , curr +1 , prev);

    return max( take , notTake);

   
}
int longestIncreasingSubsequence(int n, int arr[])
{
    return solve ( n , arr , 0 , -1 ) ;
}
int main()
{
    int arr[10] = {3, 7, 2, 5, 8, 10, 4, 45, 9, 15};
    cout <<"The max increasing " <<  longestIncreasingSubsequence(10,arr)<< endl;
}