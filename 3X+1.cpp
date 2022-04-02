//The 3x+1 problem
//input a , b	；	output a~b max cycle legth
#include <iostream>
using namespace std;

int main() {
	int a,length,i,j,n,x,y; //i j輸入值  x y輸出記錄用   legth存最大cycle legth值    a計算cycle lngth  n  
	cin>>i>>j;
	x=i;
	y=j;
	if(i>j) swap(i,j);
	
	for(int k=i ; k<j+1 ; ++k){
		a=1;    // 因為 計算到最後=1時也算一個 cycle legth
		n=k;		
		while(n!=1){
				if(n%2==1){
				n=n*3+1;
				a=a+1;
			}
			else{
				n=n/2;
				a=a+1;
			}
		}
			if(a>length){
				length=a;
				n=k;
			}
	}
	
	cout<<x<<" "<<y<<" "<<length;
	  
	return 0;
}

