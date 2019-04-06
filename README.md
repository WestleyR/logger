## Simple C Logger

This is a VERRY simple c message printer with color.

<br>

## Install:

Install via [clib](github.com/clib/clib):

```
$ clib install WestleyR/logger
```

<br>

## Example:


```c
#include <stdio.h>

#include "logger/logger.h"

int main() {

    print_verbosef("You are not suppost to see this!\n");

    // 1 means on
    set_verbose(1);

    print_verbosef("You are suppested to see this!\n");

    print_errorf("This is a error message.\n");

    print_warningf("This is a warning message.\n");

    return(0);
}
```

Then add this flag to you Makefile:

```
CFLAGS += -I deps
```

<br>

## License:

```
The Clear BSD License

Copyright (c) 2019 WestleyR
All rights reserved.

This software is licensed under a Clear BSD License.
```

<br>
