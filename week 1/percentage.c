#include<stdio.h>
int main ()
{
	int p,c,m,b,com;
	float z, total;
	printf(" mention your mathematics marks out of 100 : \n");
	scanf("%d",&m);
	printf(" mention your physics marks out of 100 : \n");
	scanf("%d",&p);
	printf(" mention your chemistry marks out of 100  : \n");
	scanf("%d",&c);
	printf(" mention your biology marks out of 100 : \n");
	scanf("%d",&b);
	printf(" mention your computer marks out of 100 : \n");
	scanf("%d",&com);
	printf("your mathematics mark  out of 100 is : %d \n",m);
	printf("your physics mark out of 100 is : %d \n",p);
	printf("your chemistry mark  out of 100 is : %d \n",c);
	printf("your biology mark  out of 100 is : %d \n",b);
	printf("your computer mark  out of 100 is : %d \n",com);
	total =  p +c +m +b + com ;

	printf("your total mark is : %f out of  500 \n",total);
		z = total/500 * 100;


	printf(" your percentage is : %f \n",z);
	
	if( z>=90){
		printf("Your grade is A");
	}
	else if( z>=80){
		printf("Your grade is B");
	}
	else if( z>=70){
		printf("Your grade is C");
	}
	else if( z>=60){
		printf("Your grade is D");
	}
	else if( z>=40){
		printf("Your grade is E");
	}
	else if(z<40){
		printf("Your grade is F");
	}
	else {
		printf("You failed");
	}


}
