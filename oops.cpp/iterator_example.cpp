#include<iostream>
#include<list>
using namespace std;

template<typename T>
int search(T arr[],int n,T key){
    for(int p=0;p<n;p++){
        if (arr[p]==key){
            return p;
    }
}
//return n if elemnt not found

return n;
}

template<class forwarditerator,class T>
forwarditerator search(forwarditerator start, forwarditerator end,T key){
    while(start!=end){
        if(*start==key){
            return start;
        }
        start++;
    }
    return end;
}
int main(){
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(6);
    l.push_back(4);
    l.push_back(3);

    auto it=search(l.begin(),l.end(),4);
    if(it==l.end()){
        cout<<"element not found";

    }
    else{
        cout<<*it<<endl;
    }

    return 0;
}