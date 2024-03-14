#include<stdio.h>
float calculateAttendence(float t_classes,float attend)
{
	int result= (attend/t_classes)*100;
	return result;
}

int main()
{
	float t_classes,attend;
	
	printf("enter total no of classes scheduled \n");
	scanf("%f",&t_classes);
	
	printf("enter no of classes attended:");
	scanf("%f",&attend);
	
	float f_result=calculateAttendence(t_classes,attend);
	
	printf("Your attendence is: %.1f %% \n",f_result);
	
	if (f_result>=80){
		printf("You are allowed to sit in exam \n");
	}
	else {
	printf("you are not allowed to sit in exam \n");
	}
	return 0;
}
