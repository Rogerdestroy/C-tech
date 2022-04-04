#include<iostream>
using namespace std;

int main()
{
    int i;
    unsigned int Mask=0x8;
    for(i=15 ; i>=8 ; i-=1){
    	cout<<i<<",";
    	cout<<(i&~Mask)<<",";
    	cout<<(i|Mask)<<endl;
	}
    return 0;
}
