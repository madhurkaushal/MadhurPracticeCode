#include <iostream>
#include <string>
using namespace std;
class Solution
{
public:
    bool isPlaindrome(int x)
    {
        if (x < 0)
        {
            return false;
        }
        else
        {
            string str = to_string(x);
            string rev_str = string(str.rbegin(), str.rend());
            /*    
            str.rbegin() and str.rend() are iterators provided by the C++ Standard Library for the string class. 
            
            str.rbegin() returns a reverse iterator pointing to the last character of the string (or technically, 
            one past the last element in reverse order), 
            and str.rend() returns a reverse iterator pointing to the position just before the first character of the 
            string in the reverse order.

            string(str.rbegin(), str.rend()) creates a new string by copying the characters from str in reverse order,
            from the end to the beginning, using the reverse iterators.*/
            return str == rev_str;
        }
    }
};

int main()
{
    Solution s;
    bool ans;
    ans = s.isPlaindrome(121);
    cout << "The string is a palindrome : " << ans;
}