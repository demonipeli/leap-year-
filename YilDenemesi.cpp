#include<stdio.h>
#include<conio.h>

main ()
{
	int yil;
	printf("Bir yil gir: ");
	scanf("%d",&yil);
	
	if ( yil % 4 == 0 )
		printf("%d artik yil\n",yil);
	else
		printf("%d artik yil degil\n",yil);
		
getch ();
}

