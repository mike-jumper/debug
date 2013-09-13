
#include "dump.h"

int main(int argc, char** argv) {

    char buffer[] = "Hello World. This is a test of the dump.h debug helper.";
    dump(buffer, sizeof(buffer));

    return 0;

}

