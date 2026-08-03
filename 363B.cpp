#include <bits/stdc++.h>
using namespace std;

int main() {
    int m,n; 
    cin>>m>>n;
    vector<int> a(m); 
    for (int i=0;i<m;i++) { 
        cin>>a[i]; 
    }
    int current = 0;
    int bestindex=0;
    int best = INT_MAX;
    for (int i=0;i<n;i++){ 
        current+=a[i]; 

    }
    best=current; 
    int i=1;
    while (i+n<=m)
{   
    current+=a[i+n-1]-a[i-1];
    
    if (current<best) {
        bestindex=i;
        best=current;
    }
    i++;
}    
  cout<<bestindex+1<<endl;




 }