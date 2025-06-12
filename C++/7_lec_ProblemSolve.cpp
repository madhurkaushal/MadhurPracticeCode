#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

// Function to reverse the integer .
void reverseInt()
{
    int num, digit, ans = 0;
    cout << "Enter the number whose reverse you want to find  : ";
    cin >> num;
    while (num != 0)
    {
        digit = num % 10;
        ans = ans * 10 + digit;
    }
}

void complementOfBase10()
{
    int num, bit, ans = 0,i=0;
    cout << "Enter the binary number whose complement you want to find : ";
    cin >> num;
    while (num != 0)
    {
        bit = (num | 1);
        num= num/10;
        if (bit == 1)
        {
            ans = ans * pow(10, i) + 0;
        }
        else
        {
            ans = ans * pow(10, i) + 1;
        }
        i++;
    }
    cout<< "The complement of the number is : " << ans << endl;
}
int main()
{
    complementOfBase10();
    return 0;
}