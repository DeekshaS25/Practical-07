#include<iostream>
using namespace std;

int main()
{
  int N=3;
  int arr[N][N];
  cout<<"Enter the array elements row wise: "<<endl;
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++)
      cin>>arr[i][j];
     }cout<<"Resultant array: "<<endl;
   
     for(int i=0;i<N;i++){
       
       for(int j=0;j<N;j++)
       {
       cout<<10-arr[i][j]<<" ";
      }cout<<"\n";
    }
  
  return 0;
}

