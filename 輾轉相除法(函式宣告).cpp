#include<iostream>
using namespace std;
 
int getans(int i,int j){
    if(i % j)
        return getans(j , i % j);
    else
        return j;
}
 
 
int main()
{
    cout<<getans(1716 , 120);
    return 0;
}

