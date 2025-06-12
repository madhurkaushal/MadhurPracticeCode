#include <iostream>
#include <string>
using namespace std;

int solve(string &a, string &b, int i, int j)
{
    // Base Case
     if (i == a.length() || j == b.length())
    {
        return 0;
    }
    int ans = 0;
    if (a[i] == b[j])
    {
        ans = 1 + solve(a, b, i + 1, j + 1);
    }
    else
    {
        ans = max(solve(a, b, i + 1, j), solve(a, b, i, j + 1));
    }
    return ans;
}
int main()
{
    string a = "abcdef";
    string b = "bdef";
    int lcs = solve(a, b, 0, 0);
    cout << "The longest increasing subsequece is of length : " << lcs << endl;
}