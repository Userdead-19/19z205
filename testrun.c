#include<Stdio.h>
#include<math.h>
void main(){
    int x,n;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    int result=power(x,n);
    printf("the result is %d",result);
}

int power(int x,int n){
    int x=math.pow(x,n);
    return x;
}