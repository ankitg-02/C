#include<stdio.h>
#include<ctype.h>
#define SIZE 50
char stack[SIZE];
int top=-1;
void push(char x){
    top++;
    stack[top]=x;
}
char pop()
{
    char x;
    x=stack[top];
    top--;
    return x;
}
int pri(char symbol){
    if(symbol=='^')
    {return (6);}
    else if(symbol=='*' || symbol=='/')
    {return(3);}
    else if(symbol=='+' || symbol=='-')
    {return(4);}
    else{
        return 0;
    }
}
int prs(char symbol)
{
    if(symbol=='^')
    {return (1);}
    else if(symbol=='*' || symbol=='/')
    {return(2);}
    else if(symbol=='+' || symbol=='-')
    {return(5);}
    else{
        return 0;
    }
}
void main(){
    char infix[50],posfix[50],ch,elem;
    int i=0,k=0;
    printf("enter infix expression:");
    scanf("%s",&infix);
    push('#');
    while((ch=infix[i]!='\0'))
    {
        if(ch=="(")
    }
}
