#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Member {
    int age;
    char name[101];
    int order; 
};


int compare(const void* a, const void* b) {
    struct Member* m1 = (struct Member*)a;
    struct Member* m2 = (struct Member*)b;

    if (m1->age != m2->age) {
        return m1->age - m2->age;
    } else {
        return m1->order - m2->order;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    struct Member members[100000];

    for (int i = 0; i < n; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].order = i; 
    }

    
    qsort(members, n, sizeof(struct Member), compare);

    
    for (int i = 0; i < n; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    return 0;
}
