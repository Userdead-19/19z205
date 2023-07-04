
/*Write a function that accepts a string and returns the longest palindrome substring in the string.*/
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Palindrome
}

void longestPalindromeSubstring(char str[]) {
    int len = strlen(str);
    int maxLength = 1;
    int start = 0;
    int i, j;

    // Check for odd length palindromes
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            if (j - i + 1 > maxLength && isPalindrome(str, i, j)) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }

    // Check for even length palindromes
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++) {
            if (j - i + 1 > maxLength && isPalindrome(str, i, j)) {
                maxLength = j - i + 1;
                start = i;
            }
        }
    }

    printf("Longest palindrome substring: ");
    for (i = start; i < start + maxLength; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove the trailing newline character

    longestPalindromeSubstring(str);
    return 0;
}


