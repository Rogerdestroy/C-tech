//The 3x+1 problem
//input a , b	�F	output a~b max cycle legth
#include <iostream>
using namespace std;

int main() {
	int a,length,i,j,n,x,y; //i j��J��  x y��X�O����   legth�s�̤jcycle legth��    a�p��cycle ength  n  
	cin>>i>>j;
	x=i;
	y=j;
	if(i>j) swap(i,j);
	
	for(int k=i ; k<j+1 ; ++k){
		a=1;    // �]�� �p���̫�=1�ɤ]��@�� cycle legth
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

