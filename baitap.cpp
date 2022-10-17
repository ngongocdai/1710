#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,p,s=0;
	scanf("%f",&a);
    
	scanf("%f",&b);
	
	scanf("%f",&c);
	if((a*a<b*b+c*c) && (b*b<a*a+c*c) && (c*c<b*b+a*a)){
		printf("day la ba canh cua tam giac");
	
	 p=(a+b+c)/2;
	printf("chu vi cua tam giac la%f",p);
	
     s= sqrt(p*(p-a)*(p-b)*(p-c));
    printf("dien tich tam giac la%f",s);
}else
	printf("day khong phai ba canh cua tam giac");
}


