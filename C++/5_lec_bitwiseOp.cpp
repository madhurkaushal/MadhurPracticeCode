#include <iostream>
#include <string>
using namespace std;

void operators()
{
    int a = 4;
    int b = 5;

    cout << "a&b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a^b = " << (a ^ b) << endl; // XOR 
    cout << (17 << 1) << endl; // Left shift doubles the values . Thought not for all cases.
    cout << (17 << 2) << endl;
    cout << (19 >> 2) << endl; // Right shift halves the value. Though not for all cases.
    cout << (21 >> 2) << endl;
}

/*
To calculate and return the sum of the digits of a positive integer num
*/
int sumFunc(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }
    cout << "Sum = " << sum << endl;
    return sum;
}
int productFunc(int num)
{
    int product = 1;
    while (num > 0)
    {
        int digit = num % 10;
        product = product * digit;
        num = num / 10;
    }
    cout << "Product = " << product << endl;
    return product;
}
void subtractProductAndSum()
{
    int num, sum = 0, product;
    cout << "Enter the number ";
    cin >> num;
    sum=sumFunc(num);
    product = productFunc(num);
    cout << "Answere = " << product - sum<< endl;
}
int main()
{
    subtractProductAndSum();
    return 0;
}