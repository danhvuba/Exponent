#include <iostream>
#include <math.h>

using namespace std;

const int N = 540143;

int func(float x)
{
    int k = x / N;
    cout << k << endl;
    return (x - (float)k * N);
}

int main()
{
    int a = 2;
    // int n = log(840) / log(2);
    // int res = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     if ((840 >> i) & 1 != 0)
    //     {
    //         res = (res * a) % N;
    //     }
    //     a = func(a*a);
    //     cout << "   " << a << endl;
    // }
    // cout << res << endl;
    float y = 65536;
    cout << y * y << endl;
}