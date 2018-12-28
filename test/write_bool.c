#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

struct m_byte {
    int b0;
    int b1;
    int b2;
    int b3;

    int b4;
    int b5;
    int b6;
    int b7;
    
};

char *strc(const char *s1, const char *s2) {
    char *result = malloc(
        strlen(s1) +
        strlen(s2) + 1
    );
    strcpy(
        result,
        s1
    );
    strcat(
        result,
        s2
    );
    return result;
}

char *construct_bit(int bit) {
    if (bit == 1) {
        return "1";
    } else {
        return "0";
    }
}


char *construct_byte(struct m_byte *b) {

    char *b0 = construct_bit(b->b0);
    char *b1 = construct_bit(b->b1);
    char *b2 = construct_bit(b->b2);
    char *b3 = construct_bit(b->b3);
    char *b4 = construct_bit(b->b4);
    char *b5 = construct_bit(b->b5);
    char *b6 = construct_bit(b->b6);
    char *b7 = construct_bit(b->b7);
    
    char *final = strc(
        strc(
        strc(
        strc(
        strc(
        strc(
        strc(
            b0,
            b1),
            b2),
            b3),
            b4),
            b5),
            b6),
            b7
        );
    return final;
}

char construct_char(char *b) {
    char *data = b;
    char c = strtol(
        data,
        0,
        2
    );

    return c;
}

struct m_byte *m_byte_constructor(
    int b0,
    int b1,
    int b2,
    int b3,
    int b4,
    int b5,
    int b6,
    int b7
) {

    struct m_byte *b = (
        struct m_byte *
        )
        malloc(
        sizeof(
            struct m_byte
            )
        );
    b->b0 = b0;
    b->b1 = b1;
    b->b2 = b2;
    b->b3 = b3;
    b->b4 = b4;
    b->b5 = b5;
    b->b6 = b6;
    b->b7 = b7;
    return b;
}

int main() {
    struct m_byte *b0 = m_byte_constructor(
        FALSE,
        TRUE,
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        FALSE,
        FALSE
    );

    struct m_byte *b1 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        TRUE
    );
    
    struct m_byte *b2 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE
    );
    
    struct m_byte *b3 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE
    );

    struct m_byte *b4 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        TRUE,
        TRUE
    );

    struct m_byte *b5 = m_byte_constructor(
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE
    );

    struct m_byte *b6 = m_byte_constructor(
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        FALSE,
        FALSE,
        FALSE,
        FALSE
    );

    struct m_byte *b7 = m_byte_constructor(
        FALSE,
        TRUE,
        FALSE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        TRUE
    );

    struct m_byte *b8 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        TRUE,
        TRUE
    );

    struct m_byte *b9 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        TRUE,
        FALSE,
        FALSE,
        TRUE,
        FALSE
    );

    struct m_byte *b10 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE
    );

    struct m_byte *b11 = m_byte_constructor(
        FALSE,
        TRUE,
        TRUE,
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        FALSE
    );

    struct m_byte *b12 = m_byte_constructor(
        FALSE,
        FALSE,
        TRUE,
        FALSE,
        FALSE,
        FALSE,
        FALSE,
        TRUE
    );
    return 0;
}