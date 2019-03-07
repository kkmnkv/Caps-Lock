#include <stdio.h>
#include <string.h>
int main() {
    unsigned char s[110];
    int k;
    int m = 0;
    scanf("%s", &s);
    k = strlen(s);
    for (int i = 0;i < k; i++) {
        if (s[i+1] <= 90) {
            m = m + 1;
        }
        
    }
    if (m != k) {
        printf("%s", s);
        
    }
    else {
        if (s[0] <= 90) {
            s[0] = s[0] + 32;
            
        }
        else {
            s[0] = s[0] - 32;
            
        }
        for (int i = 0;i < k; i++) {
            s[i+1] = s[i+1] + 32;
            
        }
        for (int i = 0; i < k; i++){
            printf("%c", s[i]);
        }
    }
}
