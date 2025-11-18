//Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main() {
    FILE *src, *dest, *appendFile;
    char srcFile[100], destFile[100], appendFileName[100];
    char ch;
    char newLine[200];

    printf("Enter source file name: ");
    scanf("%s", srcFile);

    printf("Enter destination file name: ");
    scanf("%s", destFile);

    src = fopen(srcFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file.\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully from %s to %s.\n\n", srcFile, destFile);

    printf("Enter file name to append text: ");
    scanf("%s", appendFileName);

    getchar();

    appendFile = fopen(appendFileName, "a");
    if (appendFile == NULL) {
        printf("Error: Cannot open file to append.\n");
        return 1;
    }

    printf("Enter a new line to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, appendFile);

    fclose(appendFile);

    printf("Text appended successfully to %s.\n", appendFileName);

    return 0;
}
