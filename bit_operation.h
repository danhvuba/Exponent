#include <iostream>
#include <math.h>
#include <bitset>

using namespace std;

const int N = 540143;
const int n = log(N) / log(2) + 1;

bitset<n> Add(bitset<n> x,bitset<n> y);
bitset<n> Mul(bitset<n> x,bitset<n> y);
bitset<n> Mod(bitset<n> x,bitset<n> y);
