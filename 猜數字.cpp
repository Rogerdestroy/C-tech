//�q�Ʀr
#include <cstdlib> 
#include <ctime> 
#include <iostream>
using namespace std;

int main(){
	
	srand(time(NULL));  //�]�w�@���H�����Ʀr 
	int z= (rand()%97)+1;  //�N�o�ӼƦr��97���l��,�ܦ�0~96,�b+1,�ܦ�2~98�䤤�@�Ӽ�,��Jz; 
//	cout<<"z="<<z<<'\n';
	
	int x=0,a=1,b=99;     //a,b �Ω�s�Ʀr 
	cout<<"�п�J�Ʀr: ";
	
	while(1){
		cin>>x;
		if(x>=b || x<=a){
			cout<<"�Э��s��J: ";
			continue; //�^��while�������s���� 
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
			cout<<"�п�J "<<a<<" �� "<<b<<" �������Ʀr: "; 
		}
	}
	
	cout<<"\n����!!!";
	return 0;
} 
