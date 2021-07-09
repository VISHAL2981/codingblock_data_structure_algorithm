#include<iostream>
using namespace std;

//defining a new datatype f
class Car{
    public:

    float price;
    int Model_no;
    char name[20];



    void print(){
        cout<<"Name"<<name<<endl;
        cout<<"Model no"<<Model_no<<endl;
        cout<<"Price"<<price<<endl;
    }
    float getdiscountprice(float x){
        return price*(1.0-x);
    }
        float applydiscountprice(float x){
        price=price*(1.0-x);
        return price;
    }

};

int main(){




    //create an object 


  

    Car c,d,e;
    c.price=100;
    c.Model_no=112;
    c.name[0]='B' ;
    c.name[1]='M' ;
    c.name[2]='W' ;
    c.name[3]='\0' ;

    // TRY TO PRINT
    cout<<"enter the discount you want to five";
    float discount;
    cin>>discount;

    cout<<c.applydiscountprice(discount);

    c.print();

  

    return 0;


    
}