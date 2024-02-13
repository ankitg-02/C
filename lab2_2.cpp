#include<iostream>
using namespace std;
class call
{
    public:
    int m,n;
        void input(){
            cout<<"enter m:"<<endl;
            cin>>m;
            cout<<"enter n:"<<endl;
            cin>>n;
            cout<<"before swapping"<<m<<n<<endl;
        }
        //call by value
        void swap1(int a,int b){
            int z;
            z=a;
            a=b;
            b=z;
            cout<<"call by value:"<<endl;
            cout<<"after"<<a<<b<<endl;
        }
        //call by address
        void swap2(int *a,int *b){
            int z;
            z=*a;
            *a=*b;
            *b=z;
            cout<<"call by address:"<<endl;
            cout<<"after"<<*a<<*b<<endl;
        }
        //call by reference
        void swap3(int&a,int&b){
            int z;
            z=a;
            a=b;
            b=z;
            cout<<"call by reference:"<<endl;
            cout<<"after"<<a<<b<<endl;
        }
};
int main()
{
    int m,n;
    call o;
    o.input();
    o.swap1(o.m,o.n);
    o.input();
    o.swap2(&o.m,&o.n);
    o.input();
    o.swap3(o.m,o.n);

    return 0;
}

