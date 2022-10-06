#include"bit_operation.h"

bitset<n> Add(bitset<n> x,bitset<n> y)
{
    bitset<n> res;
    for (int i = 0; i < n; i++)
    {
        res[i]=x[i]^y[i];
    }
    return res;
}

bitset<n> Mod(bitset<n> x,bitset<n> y)
{
    
}