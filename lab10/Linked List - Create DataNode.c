// Lab 10-01 Linked List - Create DataNode
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
  char* data;
  struct DataNode *next;
} DataNode;

DataNode *createDataNode(char *data);

int main() {
  char data[101];
  scanf("%[^\n]s", data);

  DataNode *pNew = createDataNode(data);

  printf("%s\n", pNew->data);
  printf("%p\n", (void*)pNew->next);

  return 0;
}

DataNode *createDataNode(char* data) {
  unsigned int len = strlen(data);
  char *text_new = (char*) malloc(sizeof(char) * (len + 1));
  strcpy(text_new, data);

  DataNode *pNew = (DataNode*) malloc(sizeof(DataNode));
  pNew->data = text_new;
  pNew->next = NULL;
  return pNew;
}