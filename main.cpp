#include "bit_operation.h"

int main()
{
    // float a = 2;
    // int n = log(16) / log(2) + 1;
    // int res = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     if ((16 >> i) & 1 != 0)
    //     {
    //         res = func(res * a);
    //     }
    //     a = func(a * a);
    //     cout << a << "   " << res << endl;
    // }

    bitset<n> a = 1;
    bitset<n> b = 200;
    bitset<n> c = Add(a, b);
    cout << c << endl;

}