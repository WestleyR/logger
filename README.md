## Simple C Logger

This is a VERRY simple c message printer with color.

## Install:

Install via [clib](https://github.com/clibs/clib):

```
$ clib install WestleyR/logger
```

Or add to your `clib.json`:

```json
"dependencies": {
  "WestleyR/logger": "v1.1.0"
}
```

**Be sure to check the [latest release](https://github.com/WestleyR/logger/releases)**

#### Alternative install:

Copy the contents of the `src` directory to your project's `src` directory.

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

    print_debugf("With debug off, you should *not* see this...\n");

    set_debug(1);

    print_debugf("With debug on, you should see this.\n");

    return(0);
}
```

Then add this flag to you Makefile: _(only if you used clib to install, otherwise you compile as normal)_

```
CFLAGS += -Ideps
```

<br>

## License

```
The Clear BSD License

Copyright (c) 2019-2020 WestleyR
All rights reserved.

This software is licensed under a Clear BSD License.
```

<br>
