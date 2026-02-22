#include<stdio.h>

int main(){
    char operator;
    int a,b;
    printf("Enter value of your first operand: ");
    scanf("%d",&a);
    printf("Enter operator(+,-,*,%%,/): ");
    scanf(" %c",&operator);
    printf("Enter value of your second operand: ");
    scanf("%d",&b);
    if(operator=='+'){
        printf("%d\n",a+b);
    }
    else if(operator=='-'){
        printf("%d\n",a-b);
    }
    else if(operator=='*'){
        printf("%d\n",a*b);
    }
    else if(operator=='%'){
        if(b==0){
            printf("NOT VALID\n");
        }
        else
            printf("%d\n",a%b);
    }
    else if(operator=='/'){
        if(b==0){
            printf("NOT VALID\n");
        }
        else
            printf("%.2f\n",(a*1.0)/b);
    }
    else{
        printf("Invalid operator use +,-,*,/,%%\n");
    }
    return 0;
}
