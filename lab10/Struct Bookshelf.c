// Struct Bookshelf
#include <stdio.h>
#include <string.h>

struct Book {
    char id[10];
    char name[100];
    char author[100];
};

int main() {
    int N;
    scanf("%d", &N);
    struct Book book[100];

    char id_search[10];
    scanf("%s", id_search);

    for (int i = 0; i < N; i++) {
        scanf("%s %s %s", book[i].id, book[i].name, book[i].author);
    }

    int search = -1;
    for (int i = 0; i < N; i++) {
        if (strcmp(id_search, book[i].id) == 0) {
            search = i;
            break;
        }
    }

    if (search != -1) {
        printf("%s %s %s", book[search].id, book[search].name, book[search].author);
    } else {
        printf("Not Found");
    }
    
    return 0;
}