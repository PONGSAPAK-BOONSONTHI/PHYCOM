#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char *data;
    struct DataNode *next;
} DataNode;

typedef struct SinglyLinkedList {
    DataNode *head;
    int count;
} SinglyLinkedList;

DataNode *cre_DataNode(char *data);
SinglyLinkedList *cre_SinglyLinkedList();

void insert_l(SinglyLinkedList *list, char *data);
void insert_f(SinglyLinkedList *list, char *data);
void delete(SinglyLinkedList *list, char *data);
void traverse(SinglyLinkedList *list);
void traverse_index(SinglyLinkedList *list, int index);

int main() {
    SinglyLinkedList *mylist= cre_SinglyLinkedList();
    int n;
    char condition;
    char data[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf(" %c: %[^\n]", &condition, data);

        if (condition == 'F') {
            insert_f(mylist, data);
        } else if (condition == 'L') {
            insert_l(mylist, data);
        } else if (condition == 'D') {
            delete(mylist, data);
        } else if (condition == 'I') {
            traverse_index(mylist, atoi(data));
        } else { 
            printf("Invalid Condition!\n");
        }
    }
    traverse(mylist);
    
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
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

SinglyLinkedList *cre_SinglyLinkedList() {
    SinglyLinkedList *list = (SinglyLinkedList *) malloc(sizeof(SinglyLinkedList));
    list->head = NULL;
    list->count = 0;

    return list;
}

void insert_l(SinglyLinkedList *list, char *data) {
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

void insert_f(SinglyLinkedList *list, char *data) {
    DataNode *pNew = cre_DataNode(data);
    pNew->next = list->head;
    list->head = pNew;
    list->count++;
}

void traverse(SinglyLinkedList *list) {
    DataNode *p = list->head;
    while (p != NULL) {
        printf("%s", p->data);
        if (p->next != NULL) printf(" -> ");
        p = p->next;
    }
    printf("\n");
}

void traverse_index(SinglyLinkedList *list, int index) {
    if (list->count <= index) {
        printf("Index out of range.\n");
        return;
    }
    DataNode *p = list->head;
    for (int i = 0; i < index; i++) {
        p = p->next;
    }
    printf("%s\n", p->data);
}

void delete(SinglyLinkedList *list, char *data) {
    DataNode *p = NULL;
    DataNode *c = list->head;;

    while (c != NULL && strcmp(c->data, data) != 0) {
        p = c;
        c = c->next;
    }

    if (c == NULL) {
        printf("Cannot delete, %s does not exist.\n", data);
        return;
    }

    if (p == NULL) {
        list->head = c->next;
    } else {
        p->next = c->next;
    }

    free(c->data);
    free(c);
    list->count--;
}
