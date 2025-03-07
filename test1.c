#include <stdio.h>
#include <string.h>

void formatText(char *words[], int wordCount, int maxWidth)
{
    char line[100] = "";
    int lineLength = 0;

    for (int i = 0; i < wordCount; i++)
    {
        int wordLength = strlen(words[i]);

        if (lineLength + wordLength + (lineLength > 0 ? 1 : 0) <= maxWidth)
        {
            if (lineLength > 0)
            {
                strcat(line, " ");
                lineLength++;
            }
            strcat(line, words[i]);
            lineLength += wordLength;
        }
        else
        {
            printf("%s\n", line);
            strcpy(line, words[i]);
            lineLength = wordLength;
        }
    }

    if (lineLength > 0)
    {
        printf("%s\n", line);
    }
}

int main()
{
    char *words[] = {"This", "is", "an", "example", "of", "text", "justification."};
    int wordCount = sizeof(words) / sizeof(words[0]);
    int maxWidth = 10;

    formatText(words, wordCount, maxWidth);
    return 0;
}
