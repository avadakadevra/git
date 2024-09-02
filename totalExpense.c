/* Calculate total expense based on wether qty is 1000 or more*/
#include<stdio.h>
int main(){
    int qty=0,discount=0;
    float rate=0,total=0;
    printf("Enter qty purchased: ");
    scanf("%d",&qty);
    printf("\nEnter Rate: ");
    scanf("%f",&rate);
    if(qty>=1000)
        discount=10;
    total=(qty*rate)-(qty*rate*discount/100);
    printf("\nTotal Expense: %f\n",total);
    return 0;
}
