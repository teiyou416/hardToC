#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    int height;
    int weight;
};

void person_init(struct Person who) {};

// void Person_destroy(struct Person who) { free(who.name); }

void Person_print(struct Person who) {
    printf("Name: %s\n", who.name);
    printf("\tAge: %d\n", who.age);
    printf("\tHeight: %d\n", who.height);
    printf("\tWeight: %d\n", who.weight);
}

int main(int argc, char *argv[]) {
    // make two people structures
    struct Person joe;
    struct Person frank;
    strcpy(joe.name, "JOE");
    joe.age = 32;
    joe.height = 64;
    joe.weight = 140;

    // print them out and where they are in memory
    Person_print(joe);

    Person_print(frank);

    // make everyone age 20 years and print them again
    joe.age += 20;
    joe.height -= 2;
    joe.weight += 40;
    Person_print(joe);

    // Person_print(frank);

    // destroy them both so we clean up

    return 0;
}
