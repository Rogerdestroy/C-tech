#include <cstdlib> 
#include <ctime> 
#include<iostream>
using namespace std;

int main(){
	while(1){
		srand(time(NULL));  
		int z= (rand());
		cout<<"z="<<z<<'\n';
	}
	
	return 0;
} 
