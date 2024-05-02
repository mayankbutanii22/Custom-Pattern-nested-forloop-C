#include<stdio.h>
main()
{
	int row,col;
	
	for(row=5; row>=1; row--){
		for(col=1; col<=5; col++){
			if(row==1 || col==1 || row==5 || col==5 || row==col){
				
				printf("* ");
			}else{
				printf("  ");
			}
		}
		printf("\n");
	}
}