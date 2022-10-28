/* Considere o seguinte programa codificado em linguagem C: */
#include <stdio.h> 
void f(int x, int y);

int main(void){
    int x, y;
    x = 1;
    y = 2;
    f(x, y);
    printf("main: x = %d y = %d", x, y);
    
    return 0;
}
    void f(int x, int y){
    if (x < 10){
        x -= 3;
    }
    else{
        x += 25;
    }
    y = 10;
    printf("f() x = %d y = %d\n", x, y);
}
/* O resultado no monitor será o seguinte:
 */