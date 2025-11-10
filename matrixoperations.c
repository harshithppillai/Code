#include <stdio.h>
int main() {
    int matrix1[3][3]={0};
    int matrix2[3][3]={0};
    int result[3][3]={0};
    char op;
    printf("Enter the entries of the first 3x3 matrix as a regular matrix :\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter the entries of the second 3x3 matrix as a regular matrix :\n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("Enter the operation to be performed (+,-,*) : ");
    scanf(" %c",&op);
    switch(op){
        case '+':
            for(int row = 0;row<3;row++){
                for(int col = 0;col<3;col++){
                    result[row][col]=matrix1[row][col]+matrix2[row][col];
                }
            }
            break;
        case '-':
            for(int row = 0;row<3;row++){
                for(int col = 0;col<3;col++){
                    result[row][col]=matrix1[row][col]-matrix2[row][col];
                }
            }
            break;
        case '*':
            for(int row = 0; row<3;row++){
                for(int col = 0;col<3;col++){
                    int sum = 0;
                    for(int f = 0;f<3;f++){
                        sum+=matrix1[row][f]*matrix2[f][col];
                    }
                    result[row][col]=sum;
                }
            }
            break;
        default:printf("Invalid operation!");
                return 1;
    }
    printf("The matrix is : \n");
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("%3d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
