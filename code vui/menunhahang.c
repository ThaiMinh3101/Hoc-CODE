#include <stdio.h>
#include <string.h>
int main(){
    int n;
    int luachon;
    int tien;
    char a[100];
    printf("*** XIN CHÀO QUÝ KHÁCH ĐÃ ĐẾN NHÀ HÀNG PHẠM HÙNG DUY *****\n");
    printf("              ------ MENU QUÁN ------\n");
    printf("                     1.BÚN\n");
    printf("                     2.PHỞ\n");
    printf("                     3.HỦ TÍU\n");
    printf("                     4.CƠM TẤM\n");
    printf("Mời bạn lựa chọn món:");
    scanf("%d",&n);
    if(n==1){
        printf("MENU BÚN:\n");
        printf("1.Bún bò (size M:40k,size L=60k)\n");
        printf("2.Bún bò Huế (size M:40k,size L=60k)\n");
        printf("Mời bạn chọn món:");
        scanf("%d",&luachon);
        getchar();
        switch(luachon){
            case 1:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Bún bò size M:40k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Bún bò size L:60k\n");
            }
            break;
            case 2:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Bún bò Huế size M:40k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Bún bò Huế size L:60k\n");
            }
            break;
        }
        
    }
    if(n==2){
        printf("MENU PHỞ:\n");
        printf("1.Phở nạm (size M:60k,size L=80k)\n");
        printf("2.Phở tái (size M:60k,size L=80k)\n");
        printf("2.Phở gàu (size M:60k,size L=80k)\n");
        printf("Mời bạn chọn món:");
        scanf("%d",&luachon);
        getchar();
        switch(luachon){
            case 1:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Phở nạm size M:60k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Phở tái Huế size L:80k\n");
            }
            break;
            case 2:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Phở tái size M:60k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Phở tái size L:80k\n");
            }
            break;
            case 3:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Phở gàu size M:60k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Phở gàu size L:80k\n");
            }
            break;
        }
    }
    if(n==3){
        printf("MENU HỦ TÍU:\n");
        printf("1.Hủ tíu gà (size M:30k,size L=50k)\n");
        printf("2.Hủ tíu heo (size M:30k,size L=50k)\n");
        printf("Mời bạn chọn món:");
        scanf("%d",&luachon);
        getchar();
        switch(luachon){
            case 1:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Hủ tíu gà size M:30k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Bún gà size L:60k\n");
            }
            break;
            case 2:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Hủ tíu heo size M:30k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Hủ tíu heo size L:50k\n");
            }
            break;
        }
    }
    if(n==4){
        printf("MENU CƠM:\n");
        printf("1.Cơm sườn cọng (size M:60k,size L=80k)\n");
        printf("2.Cơm tấm sà bì chưởng (size M:100k,size L=150k)\n");
        printf("Mời bạn chọn món:");
        scanf("%d",&luachon);
        getchar();
        switch(luachon){
            case 1:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Cơm sườn cọng size M:60k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Cơm sườn cọng size L:80k\n");
            }
            break;
            case 2:printf("Mời bạn lựa chọn size món ăn (nhập M hoặc L):");
            fgets(a,100,stdin);
            if(a[0]=='M'){
              tien=40000;
              printf("Hóa đơn của bạn:\n");
              printf("Cơm tấm sà bì chưởng size M:100k\n");
            }
            if(a[0]=='L'){
                tien=60000;
                printf("Hóa đơn của bạn:\n");
                printf("Cơm tấm sà bì chưởng size L:150k\n");
            }
            break;
        }
    }
    printf("*** NHÀ HÀNG XIN CẢM ƠN QUÝ KHÁCH ***");
}