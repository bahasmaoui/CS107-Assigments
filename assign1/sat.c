#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <math.h>

unsigned long sat_add(unsigned long operand1, unsigned long operand2, int bitwidth) {
    unsigned long  maxBitWidth = (1UL << bitwidth) -1;
        unsigned long  sum = operand1+operand2;
        if (maxBitWidth <= sum){
            return maxBitWidth;
        }
    return sum;
}

int main(int argc, char *argv[]) {
    if (argc < 4){
        printf("Not enough Arguments!");
        return 0;
    }

    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);
    int bitWidth = atoi(argv[3]);

    int res = sat_add(op1,op2,bitWidth);

    
    printf("%i\n",res);
   
    
    return 0;
}
