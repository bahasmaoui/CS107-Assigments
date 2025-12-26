#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


void printArray(int a[],int size,int level){
    for (int i=0; i<size - level ; i++){
            printf(" ");
    }
    for (int i=0; i<size; i++){ 
        if ( a[i]%2==1 ){
            printf("%c ",'*');}
        else{
            printf("  ");
        }        
    
    }
    printf("\n");
}

void copyArray(int *dest, int *src, int size) {
    memcpy(dest, src, size * sizeof(int));
}


void drawTriangle(int n){
    //char spacer[];
    int line[n];
    int newLine[n];
    memset(line,0,n*sizeof(int));
    line[0]=1;
    
    for (int i=0; i<n;i++){
        printArray(line,n,i);
        memset(newLine,0,n*sizeof(int));
        newLine[0]=1;
        for (int j=1; j<i+1; j++){
            newLine[j] = line[j]+line[j-1];
        }
        newLine[i+1]=1;
        
        copyArray(line,newLine,n);
        printf("\n");
    }
}




int main(int argv, char *argc[]){
    if (argv < 2){
        printf("No argument were given!");
    }
    else{
        int level = atoi(argc[1]);
        level = pow (2,level);
        drawTriangle(level);   
    }


    
    return 0;
}
