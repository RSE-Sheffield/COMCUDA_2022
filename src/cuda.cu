#include "cuda.cuh"
#include "helper.h"

void cuda_begin(const Image *input_image) {
    
}
void cuda_stage1() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_tile_sum(input_image, mosaic_sum);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_tile_sum(&input_image, mosaic_sum);
#endif
}
void cuda_stage2(unsigned char* output_global_average) {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_compact_mosaic(TILES_X, TILES_Y, mosaic_sum, compact_mosaic, global_pixel_average);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation functions with the correct inputs
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_compact_mosaic(TILES_X, TILES_Y, mosaic_sum, mosaic_value, output_global_average);
#endif    
}
void cuda_stage3() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_broadcast(input_image, compact_mosaic, output_image);

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_broadcast(&input_image, mosaic_value, &output_image);
#endif    
}
void cuda_end(Image *output_image) {
    
}