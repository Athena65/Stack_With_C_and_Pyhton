#include<stdlib.h>
#include<stdio.h>
void push(int a);
void pop();
#define boyut 10

int yigin[boyut];
int es=0,i,veri=0;

int main(){
	//cikarirken indis 1 eksiltebilir veya 0 yapilabilir
	//push yerlestir pop cek
	int islem,sayi;
	
	do
	{
	
	printf("push =>1 pop =>0\n");
	scanf("%d",&islem);
	if(islem==1)
	{
		printf("\neklenecek sayiyi girin");
		scanf("%d",&sayi);
		
		push(sayi);
		
		
	}
	else if(islem==0)
	{
		pop();
	}
	}while(islem==0 || islem==1);
	
}

void push(int veri)
{
	if(es<boyut)
	{
	//indis arttir
	
	
    yigin[es]=veri;
    
    es++;
    for(int i=0;i< es;i++)
	{
      printf("%d\n",yigin[i]);
      
	}
	return;
		
	}
	else
	{
		printf("\n dizi boyutuna ulasildi \n");	
	}

}

void pop()
{ //indis eksilt
	 int i;
	 if(es<=0)
	 {
	 	printf("yigin bos\n");
	 	return;
	 }
	 es--;
	 printf("\n");
	 for(i=0;i<es;i++) 
	 {
		printf("%d\n",yigin[i]);
	 }
}
