#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(const char *src) {
    if (src == NULL) {
        return NULL;   // cannot duplicate a NULL string
    }

    size_t len = strlen(src) + 1;   // +1 for the null terminator

    char *copy = malloc(len);
    if (copy == NULL) {
        fprintf(stderr, "duplicate: failed to allocate %zu bytes\n", len);
        return NULL;
    }

    memcpy(copy, src, len);   // copy including '\0'
    return copy;
}

int main(void) {
    const char *original = "Hello, world!";
    char *copy = duplicate(original);

    if (copy != NULL) {
        printf("Original: %s\n", original);
        printf("Copy:     %s\n", copy);
        free(copy);
    } else {
        printf("Failed to duplicate string\n");
    }

    return 0;
}