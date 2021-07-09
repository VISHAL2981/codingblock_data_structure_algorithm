#include<iostream>
using namespace std;
private: float price;

class Car{

public:
int model_no;
char *name;


Car(){
    name=NULL;
}




Car(float p, int m ,char*n){
    price=p;
    model_no=m;
    name=new char[strlen(n)+1];
    strcpy(name,n);
}
Car(Ca &X){
    price=X.price;
    model_no=X.model_no;

    //deep copy the

    name = new char[strlen(X.name)+1];
    strcpy(name,X.name);
}
void setprice(float p){
    price=p;

}
  void print(){
        cout<<"Name"<<name<<endl;
        cout<<"Model no"<<model_no<<endl;
        cout<<"Price"<<price<<endl;
    }
};
int main(){


    Car c(100,200,"BMW");//parametrised constructor
    Car d(c);//cpy constrctr
    d.name[0] ='A';
    d.setprice(400);

    c.print();
    d.print();

}


