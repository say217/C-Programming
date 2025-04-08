//Write a Program to write into a file. 
//Write a Program to copy the content of one file to another
#include <stdio.h>

// Program to write data into a file
int main() {
    FILE *file;
    file = fopen("output.txt", "w");
    
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }
    
    fprintf(file, "Mathematics 85\nPhysics 90\nChemistry 78\n");
    printf("Data written to output.txt successfully.\n");
    
    fclose(file);
    return 0;
}


#include <stdio.h>

// Program to copy content from one file to another
int main() {
    FILE *source, *destination;
    char ch;
    
    source = fopen("input.txt", "r");
    if (source == NULL) {
        printf("Error: Could not open input file for reading.\n");
        return 1;
    }
    
    destination = fopen("copy.txt", "w");
    if (destination == NULL) {
        printf("Error: Could not open destination file for writing.\n");
        fclose(source);
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("File copied successfully to copy.txt.\n");
    
    fclose(source);
    fclose(destination);
    return 0;
}