#include <cstdlib>
#include <iostream>
using namespace std;
int i, j,k;
 char Temp[]= "";
 int Stu_Sum[3][4];          //學生總成績
 int Stu_Average[3][4];      //學生平均成績
 int Subject_Sum[3][5];      //科目總成績
 int Subjcet_Average[3][5];   //科目平均成績
 char Stu_Name[4] = { 'A','B','C','D'};
 int Score[3][4][5] ={ { { 65, 85, 78, 75, 69 }, { 66, 55, 52, 92, 47 }, { 75, 99, 63, 73, 86 }, { 77, 88, 99, 91, 99 } }, { { 77, 88, 66, 77, 66 }, { 65, 66, 88, 55, 77 }, { 70, 88, 56, 88, 88 }, { 80, 90, 95, 99, 99 } }, { {55, 67, 56,  98, 67 }, {66, 69, 76, 66, 78}, {77, 89, 88, 77, 77}, {88, 89, 99, 97, 88} } };
 int main(int argc, char *argv[])
{ 
   // ======= 讀取資料並計算各科總分======
    for (k = 0; k <= 2; k++)            //3次月考
       for (i = 0; i <= 3; i++)          //控制列數
          for (j = 0; j <= 4; j++)       //控制行數
          {  //計算出每一位「同學」的總成績與每一「科目」的總成績
                Stu_Sum[k][i] = Stu_Sum[k][i] + Score[k][i][j];           
                Subject_Sum[k][j] = Subject_Sum[k][j] + Score[k][i][j];   
           }
            //========= 印出開頭========
     for (k = 0; k <= 2; k++)
       {
         cout<<"==========第"<<k+1<<"次月考成績如下：==========";
         cout<<"\n"; 
         cout<<"姓名　國文　 英文 　數學 　計概 　程設";
         cout<<"\n"; 
         cout<<"=======================================";
         cout<<"\n"; 
         // ======== 印出成績單=======
         for (i = 0; i <= 3; i++)       //控制列數
           {
              cout<< Stu_Name[i];
              for (j = 0; j <= 4; j++)   //控制行數
               {
                 cout<<"     "<<Score[k][i][j];
               }
                cout<<"\n"; 
                }
                cout<<"\n"; 
            }
     system("PAUSE");
     return(0);
}
