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
    
    Number operator+(Number ob){
        Number temp;
        temp.x=x+ob.x;
        return temp;
    }
    
    Number operator-(Number ob){
        Number temp;
        temp.x=x-ob.x;
        return temp;
    }
    void display(){
        cout<<"Value:"<<x<<endl;
    }
};

int main(){
    Number ob1,ob2,ob4,ob3;
    ob1.setdata();
    ob2.setdata();
    ob4.setdata();
    ob3=ob1+ob2-ob4;
    ob3.display();
    return 0;
}
