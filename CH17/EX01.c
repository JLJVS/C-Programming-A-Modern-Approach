#include <stdio.h>
#include <stdlib.h>

void *my_malloc_impl(size_t n, void *(*alloc_fn)(size_t)) {
    void *ptr = alloc_fn(n);
    if (ptr == NULL) {
        fprintf(stderr, "my_malloc: failed to allocate %zu bytes\n", n);
        return NULL;
    }
    return ptr;
}

void *my_malloc(size_t n) {
    return my_malloc_impl(n, malloc);
}

// Fake allocator that always fails
void *always_fail(size_t n) {
    (void)n; // unused
    return NULL;
}

int main(void) {
    printf("=== Testing successful allocation ===\n");
    void *p1 = my_malloc_impl(64, malloc);   // should succeed
    if (p1 != NULL) {
        printf("Success: allocated 64 bytes at %p\n", p1);
        free(p1);
    }

    printf("\n=== Testing forced failure ===\n");
    void *p2 = my_malloc_impl(64, always_fail);  // forced failure
    if (p2 == NULL) {
        printf("Correct: my_malloc detected failure\n");
    }

    return 0;
}
