#include <stdio.h>
#include <string.h>

int main() {
    int t;
   
    scanf("%d", &t);
    getchar(); 
    for (int i = 0; i < t; i++) {
        int n;
        scanf("%d", &n);
        getchar(); 
        char a[n];
        for (int i = 0; i < n; i++) {
            scanf("%c", &a[i]);
        }
        
        int temp1 = 0;
        int temp2 = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 66) {
                temp1 = i;
                break;
            }
        }
        
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] == 66) {
                temp2 = i;
                printf("%d\n", temp2 - temp1 + 1);
                break;
            }
        }
    }
    return 0;
}
