//6 digits
#include<stdio.h>
void main(){
	int num=623415;
	int r1,r2,r3,r4,r5,r6;
	int q1,q2,q3,q4,q5,q6;
	int sum;
	
	r1=num%10;//5
	q1=num/10;//62341
	
	r2=q1%10;//1
	q2=q1/10;//6234

	r3=q2%10;//4
	q3=q2/10;//623
	
	r4=q3%10;//3
	q4=q3/10;//62
	
	r5=q4%10;//2
	q5=q4/10;//6
	
	r6=q5%10;//6
	q6=q5/10;//0
	
	sum=r1+r2+r3+r4+r5+r6;
	
	printf(" sum of the digits %d is %d ",num,sum);
}
