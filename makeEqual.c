#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n;
        scanf("%d", &n); 

        long long total = 0; 
        int cont[n];
        
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &cont[i]);
            total += cont[i];
        }

        
        long long average = total / n;

 
        if (total % n != 0) {
            printf("NO\n");
            continue;
        }
        int possible = 1;
        for (int i = 0; i < n; i++) {
            if (cont[i] != average)
            {if(cont[i] > average) {
                cont[i + 1] += cont[i] - average; 
                cont[i] = average; 

            } 
            else{
                possible = 0;
                break;
            } 
            }
        }

        if (possible) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
