#include <iostream>
using namespace std;

bool isodd(int n)
{
    return (n & 1);
}
int getbit(int n, int i)
{
    int mask = (1 << i);

    int bit = (n & mask) > 0 ? 1 : 0;
    return bit;
}

int setbit(int n, int i)
{
    int mask = (1 << i);

    int ans = n | mask;

    return ans;
}
void clearbit(int &n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
}
void updatebit(int &n, int i, int v)
{

    int mask = ~(1 << i);
    int cleared_n = n & mask;
    n = cleared_n | (v << i);
}
int main()
{
    int n = 5;
    int i;
    /* cin>>i;
    clear bit(n,i);
    cout<<n<<endl;
    */

    //update the yth bit in 5

    updatebit(n, 2, 0);
    updatebit(n, 3, 1);

    cout << n << endl;

    /* cout<<getbit(n,i)<<endl;
   n=setbit(n,i);
   cout<<isodd(n)<<endl;*/

    return 0;
}