#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TEXT 500
#define FILE_NAME "notices.txt"

void addNotice();
void viewNotices();
void clearNotices();

int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf(" NOTICE & ANNOUNCEMENT SYSTEM \n");
        printf("==============================\n");
        printf("1. Add Notice\n");
        printf("2. View Notices\n");
        printf("3. Clear All Notices\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();  // clear buffer

        switch (choice) {
            case 1:
                addNotice();
                break;
            case 2:
                viewNotices();
                break;
            case 3:
                clearNotices();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

void addNotice() {
    FILE *fp = fopen(FILE_NAME, "a");
    if (!fp) {
        printf("Error opening file!\n");
        return;
    }

    char notice[MAX_TEXT];
    printf("\nEnter the notice/announcement:\n");
    fgets(notice, MAX_TEXT, stdin);

    fprintf(fp, "%s\n", notice);
    fclose(fp);

    printf("Notice added successfully!\n");
}

void viewNotices() {
    FILE *fp = fopen(FILE_NAME, "r");
    if (!fp) {
        printf("No notices found.\n");
        return;
    }

    char line[MAX_TEXT];
    printf("\n===== STORED NOTICES =====\n");

    int count = 0;
    while (fgets(line, sizeof(line), fp)) {
        printf("%d. %s", ++count, line);
    }

    if (count == 0)
        printf("No notices available.\n");

    fclose(fp);
}

void clearNotices() {
    FILE *fp = fopen(FILE_NAME, "w");
    if (!fp) {
        printf("Error clearing notices!\n");
        return;
    }
    fclose(fp);
    printf("All notices cleared successfully!\n");
}
