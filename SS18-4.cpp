#include<stdio.h>
#include<string.h>
struct Student {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct Student sv[50];
    for(int i = 0; i < 5; i++) {
        sv[i].id = i + 1;
        printf("Nhap thong tin sinh vien %d:\n", i+1);
        printf("Nhap ten: ");
        fgets(sv[i].name, 50, stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi: ");
        scanf("%d", &sv[i].age);

        getchar();
        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, 20, stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';

        printf("\n");
    }
    printf("Thong tin cac sinh vien:\n");
    for(int i = 0; i < 5; i++) {
        printf("Sinh vien %d:\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

