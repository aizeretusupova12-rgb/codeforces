#include <bits/stdc++.h>
using namespace std;
int main () {
    long long t;
    cin>>t;
    for (int i=0;i<t;i++) { 
         long long n,m;
         cin>>n>>m;
         vector<long long> a(n+1);
         a[0]=0; 
         for (int j=1;j<n+1;j++) { 
             cin>>a[j];
         }
         vector<long long> prefixsum(n+1);
         prefixsum[0] = a[0];
         for (int j=1;j<n+1;j++) {
             prefixsum[j] = prefixsum[j-1] + a[j];
         }
         for (int j=0;j<m;j++) { 
                long long l, r, k;
                cin >> l >> r >> k;
                if (((prefixsum[n]-prefixsum[r]+prefixsum[l-1])+k*(r-l+1))%2!=0) { 
                    cout<<"YES"<<'\n';
                }
                else { 
                    cout<<"NO"<<'\n';
                }


         }
    }

    return 0;
}