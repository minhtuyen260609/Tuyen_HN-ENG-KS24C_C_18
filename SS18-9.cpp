#include<stdio.h>
#include<string.h>
int main(){
	int i, j, choice, pos, check, min;
	int length=5; 
	char findDish[50];
	char temp[50];
	struct Dish{
		int id; 
		char name[50];
		int price; 
	}; 
	struct Dish menu[100]={{1, "ga xao", 120 },{2, "ga luoc", 100 },{3, "ga tan", 150 },{4, "ga nuong", 150 },{5, "ga khong loi thoat", 220}};
	do{
		printf("\n***MENU***\n");
		printf("1. In ra cac phan tu co trong menu mon an.\n");
		printf("2. Them mot phan tu vao vi tri chi dinh.\n");
		printf("3. Sua mot phan tu o vi tri chi dinh.\n");
		printf("4. Xoa mot phan tu o vi tri chi dinh.\n");
		printf("5. Sap xep cac phan tu theo thu tu tang dan.\n");
		printf("6. Tim kiem phan tu theo ten nhap vao\n");
		printf("7. Thoat\n");
		printf("Lua chon cua ban: ");
		scanf("%d", &choice);
		if(choice==1){
			for(i=0;i<5;i++){
				printf("%d. %s: %d\n", menu[i].id, menu[i].name, menu[i].price);
			} 
		}else if(choice==2){
			printf ("moi ban nhap vi tri muon them:");
	    	scanf ("%d",&pos);
	    	for (int i=length; i>=pos-1; i--){
	    		menu[i]=menu[i-1];
			}
			fflush(stdin);
			printf ("moi bsn nhsp ten mon an muon them:");
			fgets(menu[pos-1].name,50,stdin);
			menu[pos-1].name[strcspn(menu[pos-1].name,"\n")]='\0';
			printf ("moi ban nhap gia :");
			scanf ("%d",&menu[pos-1].price);
			length++;
			for (int i=0; i<length; i++){
		    	printf ("%d:%s %d\n",i+1,menu[i].name,menu[i].price);
	        }   
		}else if(choice==3){
			printf ("moi ban nhap vi tri muon sua:");
	    	scanf ("%d",&pos);
	    	fflush(stdin);
			printf ("moi ban nhap ten mon an muon sua:");
			fgets(menu[pos-1].name,100,stdin);
			menu[pos-1].name[strcspn(menu[pos-1].name,"\n")]='\0';
			printf ("moi ban nhap gia :");
			scanf ("%d",&menu[pos-1].price);
	    	for (int i=0; i<length; i++){
		    	printf ("%d:%s %d\n",i+1,menu[i].name,menu[i].price);
	        }
		}else if(choice==4){
			printf ("moi ban nhap vi tri muon xoa:");
			scanf ("%d",&pos-1);
	    	for (int i=pos; i<length; i++){
	    		menu[i]=menu[i+1];
			}
			length--;
			for (int i=0; i<length; i++){
		    	printf ("%d:%s %d\n",i+1,menu[i].name,menu[i].price);
	        }
		}else if(choice==5){
			for(i=0;i<length;i++){
				min= menu[i].price;
				for(j=i+1;j<length;j++){
					if(menu[j].price<min){
						min= menu[j].price;
						menu[j].price=menu[i].price;
						menu[i].price=min;
						strcpy(temp, menu[j].name);
						strcpy(menu[j].name, menu[i].name);
						strcpy(menu[i].name, temp);
					}
				}
			}	
			printf("\nmang sau khi sap xep:\n");
			for (i=0;i<length;i++){
				printf("%d. %s: %d  \n",menu[i].id, menu[i].name, menu[i].price);		
			}	
		}else if(choice==6){
			check=0;
			printf("moi nhap mon an muon tim: ");
			fflush(stdin);
			fgets(findDish,sizeof(findDish),stdin);	
			findDish[strcspn(findDish, "\n")]='\0';
			for(i=0;i<length;i++){
				if(strcmp(menu[i].name,findDish)==0){
				printf("mon an ban muon tim co id la: %d", menu[i].id);
				check++;
				}
			}
			if(check==0){
				printf("mon an ban muon tim khong co trong menu");
			}
		}else if(choice==7){
			printf("Thoat.\n"); 
		}else{
			printf("Yeu cau khong hop le. Moi nhap lai."); 
		} 
		 
	}while(choice!= 7); 
	return 0; 
} 
