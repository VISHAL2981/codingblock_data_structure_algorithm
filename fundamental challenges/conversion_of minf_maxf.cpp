#include<iostream>
using namespace std;
//input is 0,100,20;

int main() {


	int minf,maxf,step;
    cin>>minf>>maxf>>step;

	while(minf<=maxf){
		cout<<minf<<" ";
		cout<<(5*(minf-32))/9<<endl;
		minf=minf+step;
	}





	return 0;
}