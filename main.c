#include <stdio.h>

#include "src/logger.h"

int main() {

    print_verbosef("You are not suppost to see this!\n");

    // 1 means on
    set_verbose(1);

    print_verbosef("You are suppested to see this!\n");

    print_errorf("This is a error message.\n");

    print_warningf("This is a warning message.\n");

    print_debugf("With debug off, you should *not* see this...\n");

    set_debug(1);

    print_debugf("With debug on, you should see this.\n");

    return(0);
}
