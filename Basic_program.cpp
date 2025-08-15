#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    cout << "Factorial of " << n << " = " << factorial << endl;
    long long a = 0, b = 1;
    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}