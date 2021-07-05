#include "openmp.h"
#include "helper.h"

void openmp_begin(const Image *input_image) {
    
}
void openmp_stage1() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_tile_sum(input_image, mosaic_sum);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // validate_tile_sum(&input_image, mosaic_sum);
#endif
}
void openmp_stage2(unsigned char* output_global_average) {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_compact_mosaic(TILES_X, TILES_Y, mosaic_sum, compact_mosaic, global_pixel_average);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation functions with the correct inputs
    // validate_compact_mosaic(TILES_X, TILES_Y, mosaic_sum, mosaic_value, output_global_average);
#endif    
}
void openmp_stage3() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_broadcast(input_image, compact_mosaic, output_image);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // validate_broadcast(&input_image, mosaic_value, &output_image);
#endif    
}
void openmp_end(Image *output_image) {
    
}