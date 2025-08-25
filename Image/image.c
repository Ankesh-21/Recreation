#include<stdio.h>
#include<stdlib.h>
#define rows 4
#define cols 4
typedef struct{
    float **image;
}Image;

int main(){
    printf("Image Shows: \n");
    Image I;
    float **img = I.image;
    img = (float **)malloc(rows * sizeof(float *));
    for(int i = 0; i< rows;i++){
        img[i] = (float *)malloc(cols * sizeof(float));
        for (int j = 0; j < cols;j++){
            img[i][j] = 0.0;
        }
    }
    //float **img = I->image;
    for (int i = 0 ; i < rows; i++){
        for (int j = 0; j < cols; j++){
            printf("%.2f ",img[i][j]);
        }
        printf("\n");
    }
}
