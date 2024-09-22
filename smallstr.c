#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        char smallest_word[4];

        int max_value =369;

        for (char c1 = 'a'; c1 <= 'z'; c1++) {
            for (char c2 = 'a'; c2 <= 'z'; c2++) {
                for (char c3 = 'a'; c3 <= 'z'; c3++) {
                  
                    int encoded_value = c1 - 'a' + 1 + c2 - 'a' + 1 + c3 - 'a' + 1;
                    
              
                    if (encoded_value == n) {
                     
                        if (c1 + c2 + c3 < max_value) {
                            max_value = c1 + c2 + c3;
                            smallest_word[0] = c1;
                            smallest_word[1] = c2;
                            smallest_word[2] = c3;
                            smallest_word[3] = '\0'; // Null-terminate the string
                        }
                    }
                }
            }
        }

        // Output the lexicographically smallest word for this test case
        printf("%s\n", smallest_word);
    }

    return 0;
}

