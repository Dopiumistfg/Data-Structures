#include<stdio.h>

int main(){
    
    int A[3][3] = {1,3,5,
                   7,4,9,
                   6,8,2};
    int sorted[3][3];
    int min,minx,miny;
    for(int h=0;h<9;h++){
        min = 1000;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(A[i][j]<min && A[i][j]>=0){
                    min = A[i][j];
                    minx = i;
                    miny = j;
                }
            }
        }
        A[minx][miny] = -1;
        if(h>=6){
            sorted[2][h%3] = min;
        }
        else if(h>=3){
            sorted[1][h%3] = min;
        }
        else
        sorted[0][h%3] = min;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",sorted[i][j]);
        }
        printf("\n");
    }
}
