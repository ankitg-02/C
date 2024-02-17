#include<iostream>
using namespace std;
class A{
    public:
        int a,b;
        A(){
            cout<<"Enter value of a & b";
            cin>>a>>b;

        }
        void show(){
            cout<<"a:"<<a <<" b:"<<b;
        }
};
int main(){
    A obj;
    obj.show();
}