#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
	int ASM,Wirtten,Practice;
	printf("Nhap vao ASM\n ");
	scanf("%d", &ASM);
	printf("Nhap vao Wirtten\n ");
	scanf("%d", &Wirtten);
	printf("Nhap vao Practice\n ");
	scanf("%d", &Practice);
	
	
	if( ASM >= 4 &&ASM <=10)
		if(ASM >=4)
		printf("ASM pass\n");
		else ("ASM notpass\n");
	
     
     if(Wirtten >= 40 &&Wirtten <=100)
     	if(Wirtten >= 40)
     	printf("Wirtten pass\n");
     	else ("Wirtten notpass\n");
	  
	 if( Practice >= 6 &&Practice  <=15)
     	if(Practice >= 6)
     	printf("Practice pass\n");
     	else ("Practice notpass\n");
	return 0;
}
