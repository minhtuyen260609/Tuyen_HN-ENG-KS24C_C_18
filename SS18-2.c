#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[20]; 
	};
	struct Student student;
	printf("Moi nhap ten: ");
	fgets(student.name, 50, stdin);
	student.name[strcspn(student.name,"\n")]='\0';
	printf("Moi nhap tuoi: ");
	scanf("%d",&student.age);
	getchar();
	printf("Moi nhap so dien thoai: ");
	fgets(student.phoneNumber, 20, stdin);
	printf("Name: %s\n", student.name); 
	printf("Age: %d\n", student.age); 
	printf("Phone number: %s", student.phoneNumber); 
	return 0; 
} 
