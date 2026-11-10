// Struct Count 
#include <stdio.h>
#include <string.h>

struct TextInfo {
    int char_count;
    int word_count;
    int line_count;
};

int main() {
    struct TextInfo info = {0, 0, 0};
    char line[500];

    while (scanf("%[^\n]", line) == 1) {
        getchar(); // เอา \n ออก

        if (strcmp(line, ".") == 0) {
            break;
        }

        info.line_count++;

        int in_word = 0;
        for (int i = 0; line[i] != 0; i++) {
            if (line[i] != ' ') {
                info.char_count++;
            }

            if (line[i] == ' ') {
                in_word = 0;
            } else if (in_word == 0) {
                in_word = 1;
                info.word_count++;
            }
        }
    }
    
    printf("Char = %d, word = %d, line = %d", info.char_count, info.word_count, info.line_count);

    return 0;
}