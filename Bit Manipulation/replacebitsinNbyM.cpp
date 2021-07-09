#include <iostream>
using namespace std;
//replace bits in n by m
/*example input:n=1000000000

m=10101,i=2,j=6;

o/p: n=10001010100

*/

int clearrangeItoJ(int n, int i, int j)
{

    int ones = (~0);
    int a = ones << (j + 1);
    int b = (i << i) - 1;
    int mask = a | b;
    int ans = n & mask;
    return ans;
}
int replacebits(int n, int m, int i, int j)
{
    int _n = clearrangeItoJ(n, i, j);
    int ans = n - 1 m << i;
    return ans;
}

int main()
{
    int n = 15;
    int i = 1, j = 3;

    int m = 2;

    cout << replacebits(n, m, i, j) << endl;

    return 0;
}