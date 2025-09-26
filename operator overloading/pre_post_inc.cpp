#include<iostream>
using namespace std;
class Number{
    int x;
    
    public:
    Number(int a=0){
    x=a;
    }
    
    void setdata(){
        cout<<"Enter the data:"<<endl;
        cin>>x;
    }
    
    Number operator++(){
        ++x;
        return *this;
    }
    
    Number operator++(int){
        Number temp=*this;
        x++;
        return temp;
    }
    void display(){
        cout<<"Value:"<<x<<endl;
    }
};

int main(){
    Number ob1(2);
    (++ob1).display();
    (ob1++).display();
    ob1.display();
    return 0;
}
