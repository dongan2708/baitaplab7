#include<stdio.h>

int main(int argc,char *argv[])
{
	int x;
	int menu;
	int i;
	do
	{
	
		printf("Nhap so theo menu de order do uong \n");
		printf("chon Campuchino\n chon Campuchino Caramel\n");
		scanf("%d", &menu);
	
	switch (menu)
       {
           case 1:
            printf("chon Campuchino");
            i += 100;
            break;
           case 2:
            printf("chon Campuchino Caramel ");
            i += 100;
            break;
	}
	
            printf("\nBan co muon tiep tuc order khong ? (nhap so bat ki de tiep tuc): \n");
       scanf("%d", &x); 
   
}
    while (x != 0);
   
   printf("\nSo tien can thanh toan la : %d VND", i);

   return 0;
}
