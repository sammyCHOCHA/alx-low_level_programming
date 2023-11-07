#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    // The secret password
    const char *password = "my_secret_password";

    if (strcmp(argv[1], password) == 0) {
        printf("Tada! Congrats\n");
        return 0;
    } else {
        printf("Invalid password. Try again.\n");
        return 1;
    }
}

