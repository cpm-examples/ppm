# PPM

A C library for working with `ppm` images

## Installation

```sh
cpm install ppm
```

```cmake
add_subdirectory(lib/ppm)

target_include_directories(<target>
	PRIVATE
		${CMAKE_CURRENT_SOURCE_DIR}/lib/ppm/include
)

target_link_libraries(<target>
	PRIVATE
		ppm
)
```

## Example usage

```c
// main.c

#include "ppm/ppm.h"

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

    if(argc < 2) {
        puts("Invalid ppm image!");
        return EXIT_FAILURE;
    }

    char type[3];
    ppm_get_type(type, argv[1]);
    printf("Image type: %s\n", type);
    printf("Image dimensions: %d x %d\n", ppm_get_width(argv[1]), ppm_get_height(argv[1]));
    printf("Maximum color value: %d\n", ppm_get_max_color_value(argv[1]));

	return EXIT_SUCCESS;
}
```

Output:

```sh
$ ./main image.ppm
Image type: P6
Image dimensions: 1024 x 683
Maximum color value: 255
```
