#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a,b,c;
	
	printf("�п�J�T���ΤT������ƭ�\n");
	printf("a="); scanf("%d",&a);
	printf("b="); scanf("%d",&b);
	printf("c="); scanf("%d",&c);
	
	
    if( (a+b) <= c ){
    	printf("���i�H�򦨤@�ӤT���ΡC"); 
	}
	else if( (a+c) <= b && (b>>a>>c || b>>c>>a)){
	    printf("���H�򦨤@�ӤT���ΡC"); 
	}
	else if( (b+c) <= a ){
	    printf("���H�򦨤@�ӤT���ΡC"); 
	}	
	else{
		printf("�i�H�򦨤@�ӤT���ΡC");
	} 
	printf("\n");
	
	system("PAUSE");
	return 0;
}
