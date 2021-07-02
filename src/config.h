#ifndef __config_h__
#define __config_h__

#include <math.h>

/**
 * Dimensions of the tiles that the image is subdivided into
 */
#define TILE_SIZE 32
#define RELATIVE_CONTRAST_LIMIT 0.015f
/**
 * The number of values a pixel can take
 * This has no reason to be changed
 * Any change would likely necessitate changes to the code
 */
#define PIXEL_RANGE 256
/**
 * Number of runs to complete for benchmarking
 */
#define BENCHMARK_RUNS 100

// Dependent config, do not change values hereafter
// f values are to save implicit/explicit casts in the code
// Some uses may ensure floating point division, be careful if replacing them
#define TILE_SIZEf ((float)TILE_SIZE)
#define HALF_TILE_SIZEf (TILE_SIZE / 2.0f)
#define HALF_TILE_SIZE ((unsigned int)roundf(HALF_TILE_SIZEf))
#define TILE_PIXELS ((int)(TILE_SIZE * TILE_SIZE))
#define ABSOLUTE_CONTRAST_LIMIT ((int)(TILE_PIXELS * RELATIVE_CONTRAST_LIMIT))
#define PIXEL_MAX (PIXEL_RANGE - 1)

#endif  // __config_h__
