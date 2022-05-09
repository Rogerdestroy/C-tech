#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[10000];
    while(cin>>n){
        for(int i=0;i<n;i++) a[i]=n-i;
        do{
            for(int i=0;i<n;i++)cout<<a[i];
            cout<<endl;
        }while(prev_permutation(a,a+n));
    }
}
