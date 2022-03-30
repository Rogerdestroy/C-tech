//猜數字
#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;

int main(){
	
	srand(time(NULL));  //設定一個隨機的數字 
	int z= (rand()%97)+1;  //將這個數字跟97取餘數,變成0~96,在+1,變成2~98其中一個數,放入z; 
//	cout<<"z="<<z<<'\n';
	
	int x=0,a=1,b=99;     //a,b 用於存數字 
	cout<<"請輸入數字: ";
	
	while(1){
		cin>>x;
		if(x>=b || x<=a){
			cout<<"請重新輸入: ";
			continue; //回到while部分重新執行 
		} 
		else{
			if(x==z)
			{
				break;
			}
			else if(x>z){
				b=x;
			}
			else if(x<z){
				a=x;
			}
			cout<<"請輸入 "<<a<<" 到 "<<b<<" 之間的數字: "; 
		}
	}
	
	cout<<"\n答對!!!";
	return 0;
} 
