#include<iostream>
using namespace std;
int main() {

	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){

    if(n%2==0){

		cout<<n<<" is not prime"<<endl;
	   break;
	}
	else{
		cout<<n<<" is prime"<<endl;
        break;
	}
	


	}
	return 0;
}