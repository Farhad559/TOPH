#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define cntp cout << cnt << nl

//Constraint is upto 500,000th prime number
//So 500,00th prime = 7,368,787, hence N=7368787

const int N=7368787;
vector<int>v;
void sieve() {
vector<bool>primes(N+1,true);
primes[0]=primes[1]=false;
for(int i=2;i<=N;i++) {
    if(primes[i]) {
        v.push_back(i);
        for(int j=i*2;j<=N;j+=i) primes[j]=false;
    }
  }
}
int main() {
optimize();
sieve();
int n;cin>>n;
cout << v[n-1];
}
