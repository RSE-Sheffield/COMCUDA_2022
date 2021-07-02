#ifndef __common_h__
#define __common_h__

#include "config.h"

/**
 * This structure represents a single channel image (e.g. greyscale)
 * It contains the data required by the stb image read/write functions
 */
struct Image {
   /**
    * Array of pixel data of the image, 1 unsigned char per pixel channel (e.g. r, g, b or a)
    * Pixels ordered left to right, top to bottom
    * There is no stride, this is a compact storage
    */
    unsigned char *data;
    /**
     * Image width and height
     */
    int width, height;
    /**
     * Number of colour channels, e.g. 1 (greyscale), 3 (rgb), 4 (rgba)
     * For the purposes of the assignment this will always evaluate to 3 (e.g. RGB images)
     */
    int channels;
};
typedef struct Image Image;
/**
 * This structure represents a histograms used throughout the algorithm
 * The type is unsigned int
 */
struct Histogram_uint {
    /**
     * PIXEL_RANGE bins for histogram data
     */
    unsigned int histogram[PIXEL_RANGE];
};
typedef struct Histogram_uint Histogram_uint;
/**
 * This structure represents a histograms used throughout the algorithm
 * The type is unsigned char
 */
struct Histogram_uchar {
    /**
     * PIXEL_RANGE bins for histogram data
     */
    unsigned char histogram[PIXEL_RANGE];
};
typedef struct Histogram_uchar Histogram_uchar;

#endif  // __common_h__
