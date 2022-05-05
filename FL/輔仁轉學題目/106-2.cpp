//106 排序+二元搜尋
#include<iostream>
using namespace std;

int binarysearch(int [] , int , int);

int main()
{
    int num[10],tmp,n_search;
    cout<<"請輸入10個數字：";
    for(int i=0 ; i<10 ; i++){
        cin>>num[i];
    }

    cout<<"請輸入要找的數字數字：";
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
        cout<<"在第"<<ans + 1<<"筆資料找到"<<n_search<<"\n";
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
