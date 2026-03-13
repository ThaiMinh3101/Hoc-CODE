#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int tuoi,chieucao,cannang;
	int luachon;
	printf("------DON TUYEN NHAN VIEN CONG TY PHAM HUNG DUY------\n");
	printf("Nhap vao ho ten:");
	fgets(a,100,stdin);
	a[strlen(a)-1]='\0';
	printf("\nNhap vao so tuoi:");
	scanf("%d",&tuoi);
	printf("\nNhap vao chieu cao(cm):");
	scanf("%d",&chieucao);
	printf("\nnhap vao can nang(kg):");
	scanf("%d",&cannang);
	printf("\n");
	printf("------HO SO LY LICH------\n");
    printf("Ho va Ten:%s\n",a);
    printf("Tuoi:%d\n",tuoi);
    printf("Chieu cao:%d\n",chieucao);
    printf("Can nang:%d\n",cannang);
    printf("\n");
	printf("------BANG LUA CHON CONG VIEC MUON UNG TUYEN------\n");
	printf("1.Lao cong\n");
	printf("2.Bao ve\n");
	printf("3.Nhan vien\n");
	printf("4.Giu xe\n");
	printf("\n");
	do{
	printf("nhap vao so thu tu tuy theo mong muon ung tuyen cua ban(1-4):");
	scanf("%d",&luachon);
	if(luachon>4||luachon<1){
		printf("nhap sai vui long nhap lai(nhap1-5)\n");
	}
}while(luachon<1||luachon>4);
	switch(luachon){
		case 1:printf("Lao cong:\n");
		if(cannang>60&&cannang<70&&chieucao>160){
			printf("Ban da dat yeu cau vao cong viec nay\n");
			printf("******CHUC MUNG BAN DU DIEU KIEN NHAN CONG VIEC LAO CONG******\n");
            printf("      MONG BAN CO NHIEU DONG GOP CHO CONG TY\n");
		}else{
			printf("Ban khong du yeu cau de nhan cong viec nay\n");
		}
			break;
		case 2:printf("Bao ve:\n");
		if(cannang>80&&cannang<90&&chieucao>180){
			printf("Ban da dat yeu cau vao cong viec nay\n");
			printf("******CHUC MUNG BAN DU DIEU KIEN NHAN CONG VIEC BAO VE******\n");
            printf("      MONG BAN CO NHIEU DONG GOP CHO CONG TY\n");
	}else{
			printf("Ban khong du yeu cau de nhan cong viec nay\n");
		}
			break;
	case 3:printf("Nhan vien:\n");
		if(cannang>50&&cannang<60&&chieucao>150){
			printf("Ban da dat yeu cau vao cong viec nay\n");
			printf("******CHUC MUNG BAN DU DIEU KIEN NHAN CONG VIEC NHAN VIEN******\n");
            printf("      MONG BAN CO NHIEU DONG GOP CHO CONG TY\n");
		}else{
			printf("Ban khong du yeu cau de nhan cong viec nay\n");
		}
			break;
			case 4:printf("Giu xe:\n");
		if(cannang>50&&cannang<60&&chieucao>150){
			printf("Ban da dat yeu cau vao cong viec nay\n");
			printf("******CHUC MUNG BAN DU DIEU KIEN NHAN CONG VIEC GIU XE******\n");
            printf("      MONG BAN CO NHIEU DONG GOP CHO CONG TY\n");
		}else{
			printf("Ban khong du yeu cau de nhan cong viec nay\n");
		}
			break;
}
printf("      ------KET THUC------");
}