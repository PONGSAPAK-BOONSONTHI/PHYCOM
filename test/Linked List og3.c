#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SLL {
    DataNode *head;
    int count;
} SLL;

DataNode *cre_DataNode(char *data);
SLL *cre_SLL();

void insert_l(SLL *list, char *data);
void traverse(SLL *list);
void traverse_index(SLL *list, int index);
void del(SLL *list, char *data);

int main() {
    SLL *mylist = cre_SLL();

    insert_l(mylist, "PONG");
    insert_l(mylist, "HEE");
    insert_l(mylist, "GG");
    insert_l(mylist, "KUY");

    traverse(mylist);
    traverse_index(mylist, -1);


    DataNode *c = mylist->head;;
    while (c != NULL) {
        free(c->data);;
        DataNode *t = c;
        c = c->next;
        free(t);
    }
    free(mylist);
    
    return 0;
}

DataNode *cre_DataNode(char *data) {
    int len = strlen(data);
    char *text = (char *) malloc(sizeof(char) * (len + 1));
    strcpy(text, data);

    DataNode *pNew = (DataNode *) malloc(sizeof(DataNode));
    pNew->data = text;
    pNew->next = NULL;

    return pNew;
}

SLL *cre_SLL() {
    SLL *list = (SLL *) malloc(sizeof(SLL));
    list->head = NULL;
    list->count = 0;
    return list;
}

void insert_l(SLL *list, char *data) {
    DataNode *pNew = cre_DataNode(data);
    if (list->count == 0) {
        list->head = pNew;
    } else {
        DataNode *p = list->head;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = pNew;   
    }
    list->count++;
}

void traverse(SLL *list) {
    if (list->count == 0) {
        printf("NULL SLL");
        return;
    }

    DataNode *p = list->head;
    while (p != NULL) {
        printf("%s", p->data);
        if (p->next != NULL) printf(" -> ");
        p = p->next;
    }
    printf("\n");
}

void traverse_index(SLL *list, int index) {
    if (index < 0) {
        index = (int) list->count + index;
    }

    if (index > list->count) {
        return;
    }
    DataNode *p = list->head;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    printf("%s\n", p->data);
}

void del(SLL *list, char *data) {
    
}