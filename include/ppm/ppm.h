#ifndef PPM_H
#define PPM_H


/**
 * @brief Get the type of a ppm image file
 * 
 * @param type output variable for the image file type
 * @param filename the name of the ppm image file
 */
void ppm_get_type(char type[3], const char *filename);

/**
 * @brief Get the maximum color value of the ppm image
 * 
 * @param filename the name of the ppm image file
 * 
 * @return The maximum color value
 */
int ppm_get_max_color_value(const char *filename);

/**
 * @brief Get the width of a ppm image
 * 
 * @param filename the name of the ppm image file
 * 
 * @return The width of the ppm image
 */
int ppm_get_width(const char *filename);

/**
 * @brief Get the height of a ppm image
 * 
 * @param filename the name of the ppm image file
 * 
 * @return The height of the ppm image
 */
int ppm_get_height(const char *filename);


#endif	// PPM_H
