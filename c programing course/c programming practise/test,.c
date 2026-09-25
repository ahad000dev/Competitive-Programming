#include <stdio.h>
#include <string.h>

// Function to check palindrome
int is_palindrome(char* s) {
    int start = 0;
    int end = strlen(s) - 1;

    // while the two pointers haven't crossed each other
    while (start < end) {
        if (s[start] != s[end]) {
            return 0; // Characters don't match, not a palindrome
        }
        start++; // Move right
        end--;   // Move left
    }
    
    return 1; // If the loop finishes, it's a palindrome
}

int main() {
    char s[1001];
    
    // Taking input
    // Using %s reads a single word; use %[^\n]s if you want to include spaces
    if (scanf("%s", s) != 1) return 0;

    // Receiving the integer return value
    int result = is_palindrome(s);

    // Printing result based on returned value
    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}