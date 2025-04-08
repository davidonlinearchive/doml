#include <stdio.h>


void forLoop(){

    for(int i = 0; i < 5; i++){
        puts("forLoop");
    }

}

void whileLoop(){
    int z = 5;
    while(z > 0){
        puts("whileLoop");
        z -= 1;
    }
}

void funcPrint(int n){
    for( int i = 0; i <= n; i++) {
        puts("funcPrint");
    }
}

int main (int argc, char** argv){
    puts("Hello, world!");
    forLoop();
    whileLoop();
    funcPrint(5);
    return 0;
}


