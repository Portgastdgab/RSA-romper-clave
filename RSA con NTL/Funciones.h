#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <vector>
#include <cmath>
#include <NTL/ZZ.h>

using namespace std;
using namespace NTL;

ZZ module(ZZ, ZZ );
ZZ recursive_Euclid(ZZ, ZZ );
ZZ Euclid(ZZ, ZZ );
ZZ mcd(ZZ, ZZ);
ZZ Euclid_extended(ZZ, ZZ );
ZZ inverse(ZZ, ZZ );
ZZ modular_exponentiation(ZZ, ZZ, ZZ );
int random(int begin = 0, int ind = 100);
vector<int> criba_eratostenes(int);
vector <int> prime_bits(int);
