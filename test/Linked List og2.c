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

int main() {
    SLL *mylist = cre_SLL();

    char *node = (char *) malloc(sizeof(char) * 20);
    while (1) {
        scanf("%s", node);
        if (strcmp(node, "Last") == 0) {
            break;
        }
        insert_l(mylist, node);
    }
    // traverse(mylist);
    int index;
    scanf("%d", &index);
    traverse_index(mylist, index);
    return 0;
}

DataNode *cre_DataNode(char *data) {
    unsigned int len = strlen(data);
    char *text_new = (char *) malloc(sizeof(char) * (len + 1));
    strcpy(text_new, data);

    DataNode *pNew = (DataNode *) malloc(sizeof(DataNode));
    pNew->data = text_new;
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
        printf("LIST NULL");
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
    DataNode *p = list->head;
    if (index < 0) {
        index = (int) list->count + index;
    }

    if (index > list->count) {
        printf("Error");
        return;
    }
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    printf("%s\n", p->data);
}