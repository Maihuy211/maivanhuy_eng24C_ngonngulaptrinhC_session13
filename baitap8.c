# include <stdio.h>
int ucln(int a, int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}	
    }
    return a;
}
int main(){
	int a,b;
	printf("nhap so thu nhat: ");
	scanf("%d",&a);
	printf("nhap so thu hai: ");
	scanf("%d",&b);
	printf("uoc chung lon nhat cua 2 so la: %d",ucln(a,b));
}

