#include<iostream>
using namespace std;
class  student
{
    string n,b;
    int r;
public:
    float c;
    void input(){
        cout<<"Enter name:";
        cin>>n;
        cout<<"Enter Roll no.:";
        cin>>r;
        cout<<"Enter Branch:";
        cin>>b;
        cout<<"Enter cgpa:";
        cin>>c;
        
    }
    void output(){
        cout<<"Name:"<<n<<endl;
        cout<<"Roll no:"<<r<<endl;
        cout<<"Branch:"<<b<<endl;
        cout<<"Cgpa:"<<c<<endl;
    }
};
int main(){
    int i,no,index;
    float max=0;
    cout<<"Enter number of student";
    cin>>no;
    student s[no];
    for(i=0;i<no;i++){
        s[i].input();
    }
    for(i=0;i<no;i++){
        s[i].output();
    }
    for(i=0;i<no;i++){
          if(max<s[i].c){
            max=s[i].c;
            index=i;

          }
    }
    cout<<"Highest mark is secure by"<<endl;
    s[index].output();
    return 0;
}