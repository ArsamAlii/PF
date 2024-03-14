#include<stdio.h>
float discount(float price)
{ 
	printf("Congratulations! You got 10 percent off \n");
	price=price-(price*0.10);
	return price;
}
int main()
{
	float price;
	int item;
	
	printf("enter total amount:");
	scanf("%f",& price);
	
	printf("enter no of items:");
	scanf("%d",&item);
	
	if (price>=5000){
		price=discount(price);
	}
	
	if (item<=10){
		price=price+100;
		printf("shipping charges= 100 R.s \n");
	}
	else {
		printf("Congratulations! You got free shipping. \n");
		price=price;
	}
	
	printf("total amount to be paid: %.2f", price);
	
	return 0;
}
