#include <stdio.h>

#include "src/logger.h"


void foobardooooooooo() {
    print_errorf("infobar ofoobar: foo\n");
}

int main(int argc, char** argv) {

    if (argc > 1) {
        set_verbose(1);
        set_debug(1);
    }

    print_infof("Starting the code, from main()\nadd any argument to this program and it will turn on debug and verbose!\n\n");

    print_verbosef("You are not suppost to see this!\n");

    print_verbosef("You are suppested to see this!\n");

    print_debugf("With debug off, you should *not* see this...\n");

    foobardooooooooo();

    print_debugf("With debug on, you should see this.\n");

    print_errorf("This is a error message.\n");

    print_warningf("This is a warning message.\n");

    return(0);
}
