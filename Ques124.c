/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt
*/

#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    char ch;

    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error! Cannot open source file.\n");
        return 1;
    }

    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error! Cannot create destination file.\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s\n", destFile);

    return 0;
}
