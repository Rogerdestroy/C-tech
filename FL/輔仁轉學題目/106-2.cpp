//106 �Ƨ�+�G���j�M
#include<iostream>
using namespace std;

int binarysearch(int [] , int , int);

int main()
{
    int num[10],tmp,n_search;
    cout<<"�п�J10�ӼƦr�G";
    for(int i=0 ; i<10 ; i++){
        cin>>num[i];
    }

    cout<<"�п�J�n�䪺�Ʀr�Ʀr�G";
    cin>>n_search;

    for(int i=0 ; i<10 ; i=i+1 )
    {
        for(int j=i+1 ; j<10 ; j=j+1 )
        {
            if( num[i] > num[j] )
            {
                tmp = num[i];
                num[i] = num[j];
                num[j] = tmp;
            }
        }
    }

    int ans = binarysearch(num , n_search , sizeof(num)/sizeof(int)) ;


    for(int i=0 ; i<10 ; i++){
        cout<<num[i]<<"   ";
    }

    if (ans < 0)
    {
        cout<<"Not found\n";
    }
    else
    {
        cout<<"�b��"<<ans + 1<<"����Ƨ��"<<n_search<<"\n";
    }

    system("pause");
    return 0;
}

int binarysearch(int data[], int x_search, int n){
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (data[mid] == x_search)
        {
            return mid;
        }
        else if (data[mid] > x_search)
        {
            high = mid - 1;
        }
        else if (data[mid] < x_search)
        {
            low = mid + 1;
        }
    }

    return -1;
}
