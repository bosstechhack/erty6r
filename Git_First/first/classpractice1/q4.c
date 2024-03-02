#include <stdio.h>
#include <string.h>

int main() {
    int t, i, j, count = 1;
    
    char a[1000];
    char b[1000] = ""; // Initialize b with null characters

    printf("Enter a string: ");
    scanf(" %[^\n]s", a);

    t = strlen(a);

    for (i = 0; i < t; i++) {
        count = 1; // Initialize count for each character
        for (j = 0; j < strlen(b); j++) {
            if (a[i] == b[j]) {
                count = 0;
                break;
            }
        }

        if (count) {
            b[strlen(b)] = a[i]; // Append unique character to b
        }
    }
    printf("%s",b);
    
    int m=0;
    for(i=0;i<strlen(b);i++){
        m=0;
        
        for(j=0;j<t;j++){
            
            if(b[i]==a[j]){
                m++;
            }
            
        }
        
        printf("\n%d  ",m);
    }
    return 0;
}
