# include<stdio.h>
void displayMenu(){
	printf("MENU\n");
	printf("1.Nhap so phan tu can nhap va gia tri cac phan tu \n");
	printf("2.In ra gia tri cac phan tu dang quan li \n");
	printf("3.Them mot phan tu vao vi tri chi dinh \n");
	printf("4.Sua mot phan tu o trong vi tri chi dinh  \n");
	printf("5.Xoa mot phan tu o vi tri chi dinh \n");
	printf("6.Sap xep cac phan tu \n");
	printf("7.Tim kiem phan tu nhap vao \n");
	printf("8.Thoat \n");
}
void displayMenu6(){
    printf("Sap xep cac phan tu \n");
	printf("1.Giam dan \n");
	printf("2.Tang dan \n");
	printf("3.Thoat \n");
}
void displayMenu7(){
    printf("Tim kiem phan tu nhap vao \n");
	printf("1.Tim kiem tuyen tinh \n");
	printf("2.Tim kien nhi phan \n");
	printf("3.Thoat\n");
}
int i;
void displayArr(int n, int a[]){
	for(i=0;i<n;i++){
    	printf("a[%d]= ",i);
    	scanf("%d",&a[i]);
    }
}
void printArr(int n, int a[]){
	for(i=0;i<n;i++){
    	printf("a[%d]= %d\n",i,a[i]);
    }
}
void addArr(int *n, int a[], int pos, int val){
	if(pos<0||pos>*n){
		printf("vi tri ko hop le");
	}else{
	    for(i=*n;i>=pos;i--){
		    a[i]=a[i-1];
	    }
	    a[pos]=val;
	    (*n)++;
    }
}
void updateArr(int n, int a[], int pos, int val){
	if(pos<0||pos>n){
		printf("vi tri ko hop le");
	}else{
	    a[pos]=val;
    }
}
void deleteArr(int *n, int a[], int pos){
	if(pos<0||pos>*n){
		printf("vi tri ko hop le");
	}else{
	    for(i=pos;i<*n-1;i++){
		    a[i]=a[i+1];
	    }
	    (*n)--;
    }
}
void sortIncrease(int n,int a[]){
    int i,j,temp; 
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j+1]>a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void sortReduce(int n,int a[]){
    int i,j,temp; 
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(a[j+1]<a[j]){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
int linearSearch(int n,int a[],int x){
	for(i=0;i<n;i++){
		if(a[i]==x){
			return i;
			break;
	    }
    }
	return -1;
}
int binarySearch(int n,int a[],int mid, int x){
    int start=0;
    int end=n;
	while(start<=end){
		mid=(start+end)/2;
		if(a[mid]==x){
			return mid;
		}else if(a[mid]>x){
			end=mid-1;
		}else{
			start=mid+1;
		}
	} 
	return -1;
}	
int main(){
	int choice;
	do{
	    displayMenu();
	    printf(" \n");
		printf("nhap lua chon cua ban: ");
		scanf("%d",&choice);
		printf(" \n");
		switch(choice){
			int n,a[100];
			case 1:
			    printf("nhap so luong phan tu:  ");
                scanf("%d",&n);
			    displayArr(n,a);
			    printf(" \n");
				break;	
			case 2:
				printf("gia tri cac phan tu dang quan li la: \n");
				printArr(n,a);
				printf(" \n");
				break;
			int pos,val;
			case 3:
				printf("nhap gia tri muon them: ");
				scanf("%d",&val);
				printf("nhap vi tri muon them: ");
				scanf("%d",&pos);
				addArr(&n,a,pos,val);
				printf(" \n");
				break;
			case 4:
				printf("nhap gia tri muon sua: ");
				scanf("%d",&val);
				printf("nhap vi tri muon sua: ");
				scanf("%d",&pos);
				updateArr(n,a,pos,val);
				printf(" \n");
				break;
			case 5:
				printf("nhap vi tri muon xoa: ");
				scanf("%d",&pos);
				deleteArr(&n,a,pos);
				printf(" \n");
				break;
			case 6:
				do{
	                displayMenu6();
	                printf(" \n");
					printf("nhap lua chon cua ban: ");
		            scanf("%d",&choice);
		            switch(choice){
		            	case 1:
		            	    printf("mang sap xep giam dan: \n");
							sortIncrease(n,a);
							printArr(n,a);
							printf(" \n");
							break;
                        case 2:
		            	    printf("mang sap xep tang dan: \n");
							sortReduce(n,a);
							printArr(n,a);
							printf(" \n");
							break;
						case 3:
							break;
						default:
				        	printf("khong hop le \n");
			        }
				}while(choice!=3);
			    break;
			int x;
			case 7:
				do{
	                displayMenu7();
	                printf(" \n");
					printf("nhap lua chon cua ban: ");
		            scanf("%d",&choice);
		            printf(" \n");
					switch(choice){
		            	case 1:
		            	    printf("nhap so can tim: ");
				            scanf("%d",&x);
							if(linearSearch(n,a,x)!=-1){
	                            printf("vi tri cua phan tu %d la: %d",x,i);
	                        }else{
	                    	    printf("ko tim thay %d trong mang",x);  
	                        }
							printf(" \n");
							break;
                        int mid;
						case 2:
		            	    printf("nhap so can tim: ");
				            scanf("%d",&x);
						    printf(" \n");
							if(binarySearch(n,a,mid,x)!=-1){
	                            printf("vi tri cua phan tu %d la: %d",x,i);
	                        }else{
	                    	    printf("ko tim thay %d trong mang",x);  
	                        }
						    printf(" \n");
							break;
						case 3:
							break;
						default:
				        	printf("khong hop le \n");
			        }
				}while(choice!=3);
			    break;
			case 8:
				printf("thoat truong trinh");
				printf(" \n");
				break;
			default:
			    printf("lua chon khong hop le");
		}
	}while(choice!=7);
    return 0;
}
