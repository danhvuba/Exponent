#include <iostream>
#include <math.h>

using namespace std;

const int N = 540143;

int func(float x)
{
    int k = x / N;
    cout<<"kn=  "<<(float)k*N<<endl;
    return (x - (float)k * N);
}

int main()
{
    float a = 2;
    int n = log(16) / log(2) + 1;
    int res = 1;

    for (int i = 0; i < n; i++)
    {
        if ((16 >> i) & 1 != 0)
        {
            res = func(res * a);
        }
        a = func(a * a);
        cout << a << "   " << res << endl;
    }
}