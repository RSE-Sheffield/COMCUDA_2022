#include "cuda.cuh"
#include "helper.h"

void cuda_begin(const Image *input_image) {
    
}
void cuda_stage1() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // You will need to copy the data back to host before passing to these functions
    // int max_contrast = skip_histogram(&input_image, histograms)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_histogram(&input_image, histograms, max_contrast);
#endif
}
void cuda_stage2(unsigned char* output_global_average) {
    // Optionally during development call the skip function/s with the correct inputs to skip this stage
    // You will need to copy the data back to host before passing to these functions
    // skip_limited_histogram(TILES_X, TILES_Y, histograms, limited_histograms)
    // skip_cumulative_histogram(TILES_X, TILES_Y, limited_histograms, cumulative_histograms)
    // skip_equalised_histogram(TILES_X, TILES_Y, histograms, equalisied_histograms)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation functions with the correct inputs
    // Note: Only validate_equalised_histogram() MUST be uncommented, the others are optional
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_limited_histogram(TILES_X, TILES_Y, histograms, test_limited_histograms);
    // validate_cumulative_histogram(TILES_X, TILES_Y, limited_histograms, test_cumulative_histograms);
    // validate_equalised_histogram(TILES_X, TILES_Y, histograms, test_equalisied_histograms);
#endif    
}
void cuda_stage3() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // You will need to copy the data back to host before passing to these functions
    // skip_interpolate(&input_image, equalised_histograms, &output_image)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // You will need to copy the data back to host before passing to these functions
    // (Ensure that data copy is carried out within the ifdef VALIDATION so that it doesn't affect your benchmark results!)
    // validate_interpolate(&input_image, equalised_histograms, &output_image);
#endif    
}
void cuda_end(Image *output_image) {
    
}