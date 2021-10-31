#include <iostream>
#include <Math.h>
using namespace std;
int main()
{
    long long int a, x;
    cin >> a >> x;
    long long int resf;
    if (x <= 0)
    {
        resf = log(pow(x,2) + 5);
    }
    else if (0 <= x && x <= a)
    {
        resf = sin(exp(x) + 2);
    }
    else if(x >= a)
    {
        tan(5 * x + 1);
    }
}

