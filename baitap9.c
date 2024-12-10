# include<stdio.h>
void displayMenu(){
	printf("\nMENU\n");
	printf("1.Nhap gia tri cac phan tu cua mang \n");
	printf("2.In gia tri cac phan tu cua mang theo tran \n");
	printf("3.In ra cac phan tu o goc theo ma tran \n");
	printf("4.In ra cac phan tu nam tren duong bien theo ma tran \n");
	printf("5.In ra cac phan tu nam tren duong cheo chinh va duong cheo phu \n");
	printf("6.In ra cac phan tu la so nguyen to trong ma tran \n");
	printf("7.Thoat \n");
}
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
void in_phanTuGoc(int n, int m,int a[n][m]){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0&&j==0||i==0&&j==m-1||j==0&&i==n-1||i==n-1&&j==m-1){
                printf("%d ",a[i][j]);
			}
		}
	}
}
void in_phanTuBien(int n, int m,int a[n][m]){
    for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(i==0 || i==n-1 || j==0 || j==m-1 ){
				printf("%d ",a[i][j]);
			}
		}
	}
}
void in_duongCheo(int n, int m,int a[n][m]){
	printf("cac phan tu nam tren duong cheo chinh la: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i][i]);
	}
	printf("\n cac phan tu nam tren duong cheo phu la: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i][n-i-1]);
	}	
}
void so_nguyen_to(int n, int m,int a[n][m] ){
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
	        if(a[i][j]<10){
		        switch(a[i][j]){
			        case 2:
			        case 3:
			        case 5:
		            case 7:
		            	printf("%d ",a[i][j]);
		    	}
	        }	
	        if(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0){
		        printf("%d ",a[i][j]);
		    }
		}	    
	}
}
int main(){
	int choice;
	do{
	    displayMenu();
	    printf("nhap lua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			int n,m;
	        int a[100][100];
			case 1:
	            printf("nhap so hang: ");
	            scanf("%d",&n);
	            printf("nhap so cot: ");
	            scanf("%d",&m);
	            printf("nhap gia tri cac phan tu trong mang: \n");
                maTran(n,m,a);
                break;
            case 2:
            	printf("gia tri tung phan tu cho mang la: \n");
	            in_maTran(n,m,a);
	            break;
	        case 3:
	        	printf("cac phan tu nam o goc la: ");
				in_phanTuGoc(n,m,a);
	        	break;
			case 4:
	        	printf("cac phan tu nam tren duong bien la: ");
	        	in_phanTuBien(n,m,a);
			    break;
			case 5:
				in_duongCheo(n,m,a);
				break;
			case 6:
				printf("cac phan tu la so nguyen to trong ma tran: ");
				so_nguyen_to(n,m,a);
				break;
			case 7:
				break;
			default:
				printf("lua chon khong hop le");
	    }
	}while(choice!=7);
    return 0;
}
