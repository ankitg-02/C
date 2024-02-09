#include<iostream>
#include<math.h>
using namespace std;
class Area
{

    public:
        //square
        void area(int s)
        {
            int as;
            as=s*s;
            cout<<"area of square:"<<as<<endl;
        }
        //rectangle
        void area(int l,int w)
        {
            int ar;
            ar=l*w;
            cout<<"area of rectangle:"<<ar<<endl;
        }
        //triangle
        void area(int a,int b,int c){
            float at;
            float se;
            se=(a+b+c)/2;
            at=sqrt(se*(se-a)*(se-b)*(se-c));
            cout<<"area of triangle:"<<at<<endl;
        }

};
int main()
{   int s,l,w,a,b,c; 
    cout<<"s:\n l:\n w:\n a:\n b:\n c:\n"<<endl;
    cin>>s>>l>>w>>a>>b>>c;
  /* cout<<"enter l:"<<endl;
    cin>>l;
    cout<<"enter w:"<<endl;
    cin>>w;
    cout<<"enter a:"<<endl;
    cin>>a;
    cout<<"enter b:"<<endl;
    cin>>b;
    cout<<"enter c:"<<endl;
    cin>>c;*/
    Area sq,tri,rect;
    sq.area(s);
    rect.area(l,w);
    tri.area(a,b,c);
    return 0;
}

