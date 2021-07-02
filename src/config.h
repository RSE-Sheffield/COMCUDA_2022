#ifndef __config_h__
#define __config_h__

#include <math.h>

/**
 * Dimensions of the tiles that the image is subdivided into
 */
#define TILE_SIZE 32
/**
 * Number of runs to complete for benchmarking
 */
#define BENCHMARK_RUNS 100

// Dependent config, do not change values hereafter
#define TILE_PIXELS ((int)(TILE_SIZE * TILE_SIZE))

#endif  // __config_h__
