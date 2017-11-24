#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    while(n != 0){
        int i, a = 0, b = 1;
        for(i = 0; i < n; i++){
            int aux = a;
            a = b;
            b = a + aux;
        }
        printf("%d\n", b);
        scanf("%d\n", &n);
    }
    return 0;
}
