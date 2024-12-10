# include <stdio.h>
int i,j;
void maTran(int n, int m ,int a[n][m]){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("a[%d][%d]= ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void in_maTran(int n, int m ,int a[n][m]){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%2d",a[i][j]);
		}
		printf("\n");
	}
}
int main(){
	int n,m;
	int a[n][m];
	printf("nhap so hang: ");
	scanf("%d",&n);
	printf("nhap so cot: ");
	scanf("%d",&m);
	printf("nhap gia tri cac phan tu trong mang: \n");
    maTran(n,m,a);
    printf("gia tri tung phan tu cho mang la: \n");
	in_maTran(n,m,a);
	
}
		
