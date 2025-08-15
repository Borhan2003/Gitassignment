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
    cout << "Factorial of " << n ;
    cout << " is " << factorial << endl;
    cout<< "Thank you for using the factorial calculator!" << endl;
    
}