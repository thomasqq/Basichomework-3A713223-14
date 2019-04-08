#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b,c;
	
	printf("請輸入三角形三邊長的數值\n");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);
	printf("c="); scanf("%d",&c);
	
	
    if( (a+b) <= c ){
    	printf("不可以圍成一個三角形。"); 
	}
	else if( (a+c) <= b && (b>>a>>c || b>>c>>a)){
	    printf("不以圍成一個三角形。"); 
	}
	else if( (b+c) <= a ){
	    printf("不以圍成一個三角形。"); 
	}	
	else{
		printf("可以圍成一個三角形。");
	} 
	printf("\n");
	
	system("PAUSE");
	return 0;
}
