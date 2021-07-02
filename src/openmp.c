#include "openmp.h"
#include "helper.h"

void openmp_begin(const Image *input_image) {
    
}
void openmp_stage1() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // int max_contrast = skip_histogram(&input_image, histograms)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // validate_histogram(&input_image, histograms, max_contrast);
#endif
}
void openmp_stage2(unsigned char* output_global_average) {
    // Optionally during development call the skip function/s with the correct inputs to skip this stage
    // skip_limited_histogram(TILES_X, TILES_Y, histograms, limited_histograms)
    // skip_cumulative_histogram(TILES_X, TILES_Y, limited_histograms, cumulative_histograms)
    // skip_equalised_histogram(TILES_X, TILES_Y, histograms, equalisied_histograms)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation functions with the correct inputs
    // Note: Only validate_equalised_histogram() MUST be uncommented, the others are optional
    // validate_limited_histogram(TILES_X, TILES_Y, histograms, test_limited_histograms);
    // validate_cumulative_histogram(TILES_X, TILES_Y, limited_histograms, test_cumulative_histograms);
    // validate_equalised_histogram(TILES_X, TILES_Y, histograms, test_equalisied_histograms);
#endif    
}
void openmp_stage3() {
    // Optionally during development call the skip function with the correct inputs to skip this stage
    // skip_interpolate(&input_image, equalised_histograms, &output_image)

#ifdef VALIDATION
    // TODO: Uncomment and call the validation function with the correct inputs
    // validate_interpolate(&input_image, equalised_histograms, &output_image);
#endif    
}
void openmp_end(Image *output_image) {
    
}