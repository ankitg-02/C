#include<stdio.h>
int main(){
    int a[5],c,g=1;
    while(g)
    {   printf("1.enque \n");
        printf("2.deque \n");
        printf("3.display \n");
        printf("4.exit \n");
        printf("select the operation you want:");
        scanf("%d",&c);
        switch (c)
        {
            int m,f=-1,r=-1;
            printf("enter the num");
            scanf("%d",&m);
             case 1:
                    if(r==4){
                        printf("overflow condition");
                    }
                    else if(f==-1 && r==-1)
                    {
                        f=r=0;
                        a[f]=m;
                    }
                    else{
                        r++;
                        a[r]=m;
                    }
                        break;
            case 2:
                    if(f==4){
                        printf("underflow condition");
                    }
                    else if(f==r)
                        f=r=-1;
                    }
                    else{
                        f++;
                    }
                    break;
            case 3:
                    for (int i = f; i <= r; i++)
                    {
                        printf("%d",a[i]);
                    }
                    
                    break;
            default:
                    printf("enter the valid choice: ")
                    break;
                    }
         printf("do you want to continue(0/1)");
         scanf("%d",&c);
    

}