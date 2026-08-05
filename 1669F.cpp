#include <bits/stdc++.h>
using namespace std;
int main () { 
    long long t;
    cin>>t;
    for (int i=0;i<t;i++) {
        long long n; 
        cin>>n; 
        vector<long long> a(n);
        for (int j=0;j<n;j++) {
            cin>>a[j];  }
        int l,r; 
        l=0; 
        r=n-1; 
        int best=0;

        long long sumalice=0; 
        long long sumbob=0;
        while (l<=r) {
            if (sumalice<=sumbob) { 
                sumalice+=a[l];
                l++; 
            } else {
                sumbob+=a[r]; 
                r--; 
            }
            if (sumalice==sumbob) { 
                best=l+n-r-1; 
            }
            
        




            
        }
              cout<<best<<endl;  }



    return 0; 
}