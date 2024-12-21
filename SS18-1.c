#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20]; 
	};
	struct Student student={"Do Minh Tuyen", 18, "0974219484"}; 
	printf("Name: %s\n", student.name); 
	printf("Age: %d\n", student.age); 
	printf("Phone number: %s", student.phoneNumber); 
	return 0; 
} 
