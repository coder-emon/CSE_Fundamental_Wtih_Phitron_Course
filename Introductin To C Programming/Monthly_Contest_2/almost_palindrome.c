#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char s[1001];
        scanf("%s", s);
        int n = strlen(s);
        int counts[26] = {0};
        for (int i = 0; i < n; i++) {
            counts[s[i] - 'a']++;
        }

        int extraCount = 0;
        for (int i = 0; i < 26; i++) {
            if (counts[i] % 2 != 0) {
                extraCount++;
            }
        }
        if(extraCount > 0){
            printf("%d\n", extraCount -1);
        }else{
            printf("0\n");
        }
        
    }
    return 0;
}