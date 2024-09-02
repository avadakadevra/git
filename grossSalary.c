/* Gross Salary-- if else*/
#include<stdio.h>
int main(){
    float basicSalary=0,grossSalary=0,da=0,hra=0;
    printf("Enter Basic Salary: ");
    scanf("%f",&basicSalary);
    if(basicSalary<1500){
        hra=basicSalary*0.1;
        da=basicSalary*0.9;
    }
    else{
        hra=500;
        da=basicSalary*0.98;
    }
    grossSalary=basicSalary+hra+da;
    printf("\nGross Salary is : %f\n",grossSalary);
    return 0;
}
