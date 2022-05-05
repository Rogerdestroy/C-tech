//107
#include<iostream>
using namespace std;

int main(){
    int m,coin[4]={50,10,5,1},i=0,mon;
    cin>>m;
    while(1){
        if(i==4)break;

        cout<<coin[i]<<":"<<m/coin[i]<<endl;
        m=m-(coin[i]*(m/coin[i]));
        i += 1;
    }

    system("PAUSE");
    return 0;
}
