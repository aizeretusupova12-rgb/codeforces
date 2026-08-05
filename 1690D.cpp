#include <bits/stdc++.h>
using namespace std;
int main () { 
    long long t; 
    cin>>t; 
    for (int i=0;i<t;i++) { 
        int count=0;
        long long n,k; 
        cin>>n>>k;
        int bestcount=INT_MAX;
        string s;
        cin >> s;
        for (int j = 0; j < k; j++) {
            if (s[j] == 'W') {
                    count++;
                  }
                    }
         bestcount = count;
         for (int right=k;right<n;right++) { 
            int left=right-k;
            if (s[right]=='W') {
                count++; } 
            if (s[left]=='W') {
                count--;
                }

            
             if (count<bestcount) {
                bestcount=count;
         } }
         cout<<bestcount<<endl; 

    }
    
    
    
    
    return 0; }