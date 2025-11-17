#include<stdio.h>
int main()
{
    float n1,n2,result;
    char op;
    printf("simple calculator using switch case \n");
    printf("enter an operator(+,-,*,/):\n");
    scanf("%c",&op);
    printf("enter two numbers:");
    scanf("%f%f",&n1,&n2);
    switch(op)
    {
        case '+':
            result=n1+n2;
            printf("result=%2f\n",result);
            break;
        case '-':
            result=n1-n2;
            printf("result=%2f\n",result);
            break;
        case '*':
            result=n1*n2;
            printf("result=%2f\n",result);
            break;

        case '/':
            if(n2!=0){
                result=n1/n2;
                printf("result=%2f\n",result);
            }
            else{
                printf("error,division by zero is not possible\n");
            }
            break;
        default:
            printf("invalid operator! please use any of (+,-,*,/)\n");
    }
    return 0;
}
