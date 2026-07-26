#include <bits/stdc++.h>
using namespace std;
int main () { 

    long long t; 
    cin>>t; 
    for (int i=0; i<t; i++) { 
        long long n; 
        cin>>n; 
        vector<long long> a(n); 
        for (int j=0; j<n; j++) { 
            cin>>a[j]; 
        } 
        vector<long long> b(n);

        for (int j=0; j<n; j++) {
            cin>>b[j];
        }
        for (int j=0;j<n;j++) { 
            if (j==0) { 
                cout<<b[j]-a[j]<<" "; 

            }
            else { 
                if (a[j]>b[j-1]) { 
                    cout<<b[j]-a[j]<<" ";
                }
                else { 
                    cout<<b[j]-b[j-1]<<" ";
                }
            }
        }
        cout<<'\n';  
        }
        return 0;
    }
