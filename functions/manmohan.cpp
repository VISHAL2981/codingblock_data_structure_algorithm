#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  
  for (int i = 0; i < n; i++)
  {
    if(i == 0){

      cout<<1<<endl;
    }
    else
    {
      cout<<1;

      if(i%2 == 0){
        for(int j = 0; j <i-1;j++){
          cout<<1;
        }
      }
      else
      {
        for(int j = 0; j <i-1;j++){
          cout<<0;
        }

      }
      cout<<1<<endl;
      
    }
    
  }
  





  return 0;
}