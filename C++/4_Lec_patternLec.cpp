#include <iostream>
#include <string>
using namespace std;

void pattern1()
{
    int i, j = 0;
    while (j < 4)
    {
        for (int i = 1; i <= 4; i++)
        {
            cout << i << " ";
        }
        j++;
        cout << " \n";
    }
}
void pattern2()
{
    int i = 0, j, k = 1, n;
    cout << "enter the value of n";
    cin >> n;
    while (i <= n)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << k << " ";
            k++;
        }
        i++;
        cout << endl;
    }
}
// Triangular pattern
void pattern3()
{
    int i = 0, n;
    cout << " Enter the value of n  ";
    cin >> n;
    while (i <= n)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << j << " "; // OR n-j+1
        }
        cout << endl;
        i++;
    }
}

void pattern4() // Printing the characters
{
    int i = 0, n;
    cout << " Enter the value of n  ";
    cin >> n;
    while (i <= n)
    {
        for (int j = i; j >= 0; j--)
        {
            char ch = 'A' + i - 1;
            cout << ch << " "; // OR n-j+1
        }
        cout << endl;
        i++;
    }
}

void pattern5() // Reverse triangle
{
    int n, i = 0;
    cout << " Enter the value for the row  :  ";
    cin >> n;
    while (i < n)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << endl;
        i++;
    }
}
void pattern6() // normal triangle 
{
    int n, i = 0;
    cout << " Enter the value for the row  :  ";
    cin >> n;
    while (i < n)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <  2* i - 1; k++)
        {
            cout << "*";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }

        cout << endl;
        i++;
    }
}

void pattern7() // numerical  triangle 
{
    int n, i = 0;
    cout << " Enter the value for the row  :  ";
    cin >> n;
    while (i < n)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <  i; k++)
        {
            cout << k << " " ;
        }
        for (int k = i-2; k > 0; k--)
        {
            cout << k << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }

        cout << endl;
        i++;
    }
}
void pattern8() // numerical  triangle along with star
{
    int n, i = 0;
    cout << " Enter the value for the row  :  ";
    cin >> n;
    while (i < n)
    {
        for (int j = 1; j <= n-i; j++)
        {
            cout << j;
        }
        for (int k = 1; k <  i+1; k++)
        {
            cout <<"*" ;
        }
        for (int k = i-1; k > 0; k--)
        {
            cout <<  "*";
        }
        for (int j = n-i; j > 0; j--)
        {
            cout << j;
        }

        cout << endl;
        i++;
    }
}
int main()
{
    pattern8();
    return 0;
}
