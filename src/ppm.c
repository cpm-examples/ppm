#include "ppm/ppm.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>


void ppm_get_type(char type[3], const char *filename) {
    FILE *image_file = fopen(filename, "rb");
    char magic_number[3];

    fgets(magic_number, sizeof magic_number, image_file);   // line 1: magic number

    fclose(image_file);
    strcpy(type, magic_number);
}

int ppm_get_max_color_value(const char *filename) {
    FILE *image_file = fopen(filename, "rb");
    char cmax_str[20];

    fgets(cmax_str, sizeof cmax_str, image_file);   // line 1: magic number
    fgets(cmax_str, sizeof cmax_str, image_file);   // line 2: image dimensions
    fgets(cmax_str, sizeof cmax_str, image_file);   // line 3: max color value

    fclose(image_file);
    return strtol(cmax_str, NULL, 10);
}

int ppm_get_width(const char *filename) {
    FILE *image_file = fopen(filename, "rb");
    char dimensions_str[20];

    fgets(dimensions_str, sizeof dimensions_str, image_file);   // line 1: magic number
    fgets(dimensions_str, sizeof dimensions_str, image_file);   // line 2: image dimensions

    fclose(image_file);
    return strtol(strtok(dimensions_str, " "), NULL, 10);
}

int ppm_get_height(const char *filename) {
    FILE *image_file = fopen(filename, "rb");
    char dimensions_str[20];

    fgets(dimensions_str, sizeof dimensions_str, image_file);   // line 1: magic number
    fgets(dimensions_str, sizeof dimensions_str, image_file);   // line 2: image dimensions

    fclose(image_file);
    strtok(dimensions_str, " ");
    return strtol(strtok(NULL, " "), NULL, 10);
}
