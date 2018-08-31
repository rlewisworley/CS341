#include <stdio.h>
#include <stdlib.h>

void printBits (int num){
    unsigned int size = sizeof(unsigned int);
    unsigned int maxPow = 1<<(size*8-1);
    int i = 0;
    for(;i<size*8;++i){
        // print last bit and shift left.
        printf("%u ",num&maxPow ? 1 : 0);
        num = num<<1;
    }
}
int mult17 (int x){

    int results = (x << 4) + x;
    return results;
}

int multNeg7 (int x){
    int results = x - (x << 3);
    return results;
}

int mult60 (int x){
    int results = (x << 6) - (x << 2);
    return results;
}

int mult112 (int x){
    int results = (x << 4) - (x << 7);
    return results;
}

//part A bit pattern (w-k) 1s and k0s
//part B:  0 w-k-j 1k 0j

int partA(int k){
    int results = -1 << k;
    results = ~((1 << k) - 1);
    return results;
}

int partB (int j, int w){

}

int main(int argc, char *argv[]) {
    int x = atoi(argv[1]);
    printf("%d * 17 = %d\n",x,mult17(x));
    printf("%d * -7 = %d\n",x,multNeg7(x));
    printf("%d * 60 = %d\n",x,mult60(x));
    printf("%d * -112 = %d\n",x,mult112(x));
    printBits(partA(x));
    return 0;
}