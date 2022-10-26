/******************************************************************************
To Print all prime numbers coming before numbers n 
We take 2 and start marking all its multiples(4, 6, 8.....) 
then taking 3 multiples are(9, 15,....)
and so on.....till we reach i^2 which is less than n and (i^2 +1) more than n 
we start marking multiples everytime from i^2 since all non prime multiples before that will be marked already
*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    int prime[100] = {0};
    for(int i = 2; i<= n; i++)
    {
        if(prime[i]==0)
        {
            for(int j = i*i; j <= n; j += i)
            prime[j] = 1;
        }
    }
    for(int i = 2; i<= n; i++)
    {
        if(prime[i]==0)
        cout << i << " " ;
    }
    cout << endl;
}
int main()
{
   int n;
   cin >> n;
   sieve(n);
}
