#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100], str3[200];
    int result;
    int i;

    do {
        printf("\n--- STRING OPERATIONS MENU ---\n");
        printf("1. String Length (strlen)\n");
        printf("2. Copy String (strcpy)\n");
        printf("3. Concatenate Strings (strcat)\n");
        printf("4. Compare Strings (strcmp)\n");
        printf("5. Convert to Uppercase\n");
        printf("6. Convert to Lowercase\n");
        printf("7. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string (no spaces): ");
                scanf("%s", str1);
                printf("Length of the string: %d\n", (int)strlen(str1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%s", str1);
                strcpy(str2, str1); 
                printf("Copied destination string: %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                
                strcpy(str3, str1);
                strcat(str3, str2); 
                printf("Concatenated string: %s\n", str3);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                
                result = strcmp(str1, str2);
                if (result == 0) {
                    printf("Strings are equal.\n");
                } else if (result > 0) {
                    printf("First string is greater.\n");
                } else {
                    printf("Second string is greater.\n");
                }
                break;

            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i] >= 'a' && str1[i] <= 'z') {
                        str1[i] = str1[i] - 32;
                    }
                }
                printf("Uppercase string: %s\n", str1);
                break;

            case 6:
                printf("Enter a string: ");
                scanf("%s", str1);
                
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i] >= 'A' && str1[i] <= 'Z') {
                        str1[i] = str1[i] + 32;
                    }
                }
                printf("Lowercase string: %s\n", str1);
                break;

            case 7:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);

    return 0;
}
