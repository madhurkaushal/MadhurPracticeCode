#include<iostream>
#include<string>
#include<vector>
using namespace std;

int dectobin(int n)
{
    string bin ="";
    int a;
    while ( n != 0)
    {   
        a = n%2; 
        bin = to_string(a) +bin; // Concatenates the digits to the front of the string 
        n = n/2;
    }

    cout<< bin <<endl;
    return 0;
}
int main()
{
    int num;
    cout<< "Enter the number to convert : " ;
    cin >> num;

    dectobin(num);
}