#include<iostream>
#include<ctime>
using namespace std;

int main(){
  int choice;
  cout<<"Enter your choice :\n1.Get year\n2.Get month\n3.Get date\n"<<endl;
  cin>>choice;
  time_t ttime=time(0);
  tm*local_time=localtime(&ttime);
  switch(choice){
     case 1:
            cout<<"Current year is: "<<1900+local_time->tm_year<<endl;
            break;
     case 2:
            cout<<"Current month is: "<<1+local_time->tm_mon<<endl;
            break;
     case 3:
            cout<<"Current date is: "<<local_time->tm_mday<<endl;
            break;
     default:
            cout<<"Enter a valid choice"<<endl;
   }
  return 0;
}

