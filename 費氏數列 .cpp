//Fisher sequence
#include<iostream>
using namespace std;

int fff(int a){
	if(a==1)
		return 1;
	if(a==0)
		return 0;
		
	return fff(a-1)+fff(a-2);

}

int main(){
	
	for(int x=0 ; x<100 ; x++){
		cout<<fff(x)<<"\n";
	}
	
	return 0;
} 
