#include<iostream>
#include<math.h>
#include<string>
using namespace std;

void decimalToBinary()
{
    int bit, num,ans =0, i =0;
    cout<< "Enter the number for convertion from decimal to binary :  ";
    cin>> num;
    while (num != 0)
    {
        bit = (num & 1);
        ans = (bit * pow(10, i) + ans);
        i++;
        num = num>>1;
    }

    cout << "The answere is = " << ans<< endl;

}

void binaryToDecimal()
{
    int num, bit,i=0,ans =0;
    cout << "Enter the binary number : ";
    cin>> num;

    while (num !=0)
    {
        bit = (num & 1);
        num = num /10;
        if ( bit == 1)
        {
            ans = ans + (bit * pow(2,i));
            
        }
        i++;

    }
    cout << "The decimal equivalent of the number is = " << ans<< endl;
}
int main()
{
    decimalToBinary();
    binaryToDecimal();
    return 0;
}