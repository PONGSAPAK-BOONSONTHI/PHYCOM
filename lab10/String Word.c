// String Word 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Words {
    char word[20];
    int count_char;
};

struct Text {
    struct Words words[100];
    int count;
};
int main() {
    struct Text text_data;
    text_data.count = 0;

    char text[200];
    scanf(" %199[^\n]", text);

    char temp_word[20];
    int len = 0;

    for (int i = 0; ; i++) {
        if (text[i] != ' ' && text[i] != '\0') {
            temp_word[len++] = tolower((unsigned char) text[i]); 
        } else {
            if (len > 0) {
                temp_word[len] = '\0';
                strcpy(text_data.words[text_data.count].word, temp_word);
                text_data.words[text_data.count].count_char = len;
                text_data.count++;
                len = 0;
            }
        }
        if (text[i] == '\0') break;
    }
    
    printf("%d words\n", text_data.count);
    printf("----\n");

    for (int i = 0; i < text_data.count; i++) {
        printf("%s : %d\n", text_data.words[i].word, text_data.words[i].count_char);
    }

    return 0;
}