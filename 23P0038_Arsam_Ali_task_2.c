#include<stdio.h>
int main()
{
	int score;
	
	printf("enter student score:");
	scanf("%d",&score);
	
		if (score>60 && score<100) {
		printf("Pass \n");
		}
		
		else {
			printf("Failed \n");
		}
	
	if (score>=90 && score<=100) {
		printf("A grade");
		}
		
	else if (score>=80 && score<90) {
		printf("B grade");
		}
		
	else if (score>=70 && score<80) {
		printf("C grade");	}
		
	else if (score>=60 && score<70) {
		printf("D grade");	}
		
	else if (score<=60) {
		printf("F grade");	}
		
	return 0;
}
