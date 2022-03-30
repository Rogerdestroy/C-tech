//leap year
#include<iostream>
using namespace std;

int main(){
	int x;
	while(cin>>x){
		if(x%4!=0){
			cout<<"No\n";
		}
		else if(x%4==0 && x%100!=0){
			cout<<"Yes\n";
		}
		else if(x%100==0 && x%400!=0){
			cout<<"No\n";
		}
		else if(x%400==0){
			cout<<"Yes\n";
		}
	}
	
	return 0;
} 
