#include<stdio.h>
#include<conio.h>
void main ()
{
	int bnum,digit,decimal =0,bin,base=0;
	clrscr();
	printf("Enter the binary number:");
	scanf("%d",&bnum);
	bin=bnum;
	while(bnum!=0)
	{
		digit=bnum%10;
		decimal=decimal+(digit<<base);
		base=base+1;
		bnum=bnum/10;
	}
	printf("The binary equivalent of %d in dicimmal = %d" , bin,decimal);
	getch();
}
