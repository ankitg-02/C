#include<iostream>
using namespace std;
class object{
    
    public:
      int value;
      void input(){
        cout<<"enter the value :"<<endl;
        cin>>value;
        
      }
      void out(){
        cout<<"After Swapping:\n ";
        cout<<value<<endl;
      }
     int swap(int y){
        int z;
        z=value;
        value =y ;
        y=z;
        return z;
      }
};
int main(){
    object o1,o2;
    o1.input();
    o2.input();
   o2.value= o1.swap(o2.value);
    o1.out();
    o2.out();
    return 0;

}