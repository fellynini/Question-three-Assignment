#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare file pointer
    FILE *file;

    // Open file for writing
    file = fopen("output.txt", "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Write "Hello World" to the file
    fprintf(file, "Hello World\n");

    // Close the file
    fclose(file);

    // Open file for reading
    file = fopen("output.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    // Read content from the file
    char content[100];
    fscanf(file, "%s", content);

    // Print the read content
    printf("Read from file: %s\n", content);

    // Close the file
    fclose(file);

    return 0;
}
