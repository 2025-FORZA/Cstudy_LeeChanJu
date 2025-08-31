#include <stdio.h>
#include <string.h> 

char combine(char a, char b) {
    if (a == b) return a;
    if ((a == 'A' && b == 'G') || (a == 'G' && b == 'A')) return 'C';
    if ((a == 'A' && b == 'C') || (a == 'C' && b == 'A')) return 'A';
    if ((a == 'A' && b == 'T') || (a == 'T' && b == 'A')) return 'G';
    if ((a == 'G' && b == 'C') || (a == 'C' && b == 'G')) return 'T';
    if ((a == 'G' && b == 'T') || (a == 'T' && b == 'G')) return 'A';
    if ((a == 'C' && b == 'T') || (a == 'T' && b == 'C')) return 'G';
    return ' '; 
}

int main() {
    int n;
    scanf("%d", &n);

    char dna[1000001];
    scanf("%s", dna);

    if (n == 1) {
        printf("%c\n", dna[0]);
        return 0;
    }

    for (int i = n - 2; i >= 0; i--) {       
        dna[i] = combine(dna[i], dna[i+1]);
    }

    printf("%c\n", dna[0]);

    return 0;
}
