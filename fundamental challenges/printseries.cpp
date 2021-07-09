#include<iostream>
using namespace std;

int main() {
	int n1;
	cin>>n1;

	int n2;
	cin>>n2;

	int i = 1;
	while(n1>0){
  if (((3*i)+2)%n2!=0){

	  cout<<((3*i)+2)<<endl;
	  n1--;
	  i++;
  }
else{

	i++;
}

	}


	return 0;
}