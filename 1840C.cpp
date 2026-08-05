#include <bits/stdc++.h>
using namespace std;
int main () { 
    long long t;
    cin>>t;
    for (int i=0;i<t;i++) {
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> a(n);
        long long count=0; 

        for (int j=0;j<n;j++) {
            cin>>a[j]; } 

         long long l=0; 
          
        for (int j=0;j<n;j++) { 

            if (a[j]>q) { 
                long long len=j-l;
                if (len>=k) { 
                    long long x=len-k+1;
                    count+=(x*(x+1))/2;
                } 
                l=j+1; 

                

            }
 

        }
        long long len = n - l;

        if (len >= k) {
            long long x = len - k + 1;
                    count += (x * (x + 1)) / 2;
                }
        cout<<count<<endl;


            }
        


        
           
        
        

        
        




            
        
              



    return 0; 
}