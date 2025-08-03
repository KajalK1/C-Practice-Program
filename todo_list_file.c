#include <stdio.h>
#include <stdlib.h>
int main() 
{
    FILE *fp;
    char task[100];
    fp = fopen("todo.txt", "a");
    if (fp == NULL) {
        printf("Unable to open file\n");
        return 1;
    }
    printf("Enter a task: ");
    getchar();  // clear buffer
    fgets(task, 100, stdin);
    fprintf(fp, "%s", task);
    fclose(fp);
    printf("Task added to todo.txt\n");
    return 0;
}
