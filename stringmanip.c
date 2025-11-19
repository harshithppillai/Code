#include <stdio.h>
int slen(char *string);
int scmp(char *s1, char *s2, int len1, int len2);
void scat(char *temp, char *s1, char *s2, int len1, int len2);
void scpy(char *s1, char *s2, int len1, int len2);

int main() {
    char string1[50];
    char string2[50];
    char temp[100];
    int op;

    printf("Operations that can be performed:\n1. String Length\n2. String Comparison\n3. String Concatenation\n4. String Copy\n");
    printf("Enter the operation that you want to perform on the string: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
            printf("Enter the string: ");
            scanf("%s", string1);
            printf("The length of the string is: %d\n", slen(string1));
            break;

        case 2:
            printf("Enter the first string: ");
            scanf("%s", string1);
            printf("Enter the second string: ");
            scanf("%s", string2);
            printf("The comparison output is: %d\n",
                   scmp(string1, string2, slen(string1), slen(string2)));
            break;

        case 3:
            printf("Enter the first string: ");
            scanf("%s", string1);
            printf("Enter the second string: ");
            scanf("%s", string2);
            scat(temp, string1, string2, slen(string1), slen(string2));
            printf("The concatenated output is: %s\n", temp);
            break;

        case 4:
            printf("Enter the first string: ");
            scanf("%s", string1);
            printf("Enter the second string: ");
            scanf("%s", string2);
            scpy(string1, string2, slen(string1), slen(string2));
            printf("The output is: %s\n", string1);
            break;

        default:
            printf("Invalid operation!\n");
            return 1;
    }

    return 0;
}

int slen(char *string) {
    int i = 0;
    int count = 0;
    while (string[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

int scmp(char *s1, char *s2, int len1, int len2) {
    int i = 0;
    while (i < len1 && i < len2) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (len1 < len2) return -1;
    if (len1 > len2) return 1;
    return 0;
}

void scat(char *temp, char *s1, char *s2, int len1, int len2) {
    int n = len1 + len2;

    for (int i = 0; i < len1; i++)
        temp[i] = s1[i];

    for (int i = 0; i < len2; i++)
        temp[len1 + i] = s2[i];

    temp[len1 + len2] = '\0';
}

void scpy(char *s1, char *s2, int len1, int len2) {
    for (int i = 0; i < len2; i++)
        s1[i] = s2[i];

    s1[len2] = '\0';
}
