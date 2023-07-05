#include <stdio.h>
main(){	
	int a[3][3],b[3][3],c[3][3],d[3][3],e[3][3];
	int i,j,k;		
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\n Enter the Element of Matrix A : a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
	printf("\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",a[i][j]);
		}
		printf("\n");
	}	
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\n Enter the Element of Matrix B : b[%d][%d]",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n");
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",b[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			c[i][j]=0;
			for (k=0;k<2;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\n-------Multiplication of Two Matrix---------- \n");
	printf("\n");
		for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",c[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			d[i][j]=0;
				d[i][j]=a[i][j]+b[i][j];
			}
		}
	printf("\n----------Addition of Two Matrix------------- \n");
	printf("\n");
		for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",d[i][j]);
		}
		printf("\n");
		printf("\n");
	}
	for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			e[i][j]=0;
				e[i][j]=a[i][j]-b[i][j];
			}
		}
	printf("\n---------Subtraction of Two Matrix----------- \n");
	printf("\n");
		for (i=0;i<2;i++){
		for (j=0;j<2;j++){
			printf("\t %d",e[i][j]);
		}
		printf("\n");
		printf("\n");
	}
}