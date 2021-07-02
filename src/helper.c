#include "helper.h"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"


int skip_tile_sum_used = -1;
void validate_tile_sum(const Image* input_image, unsigned long long* test_mosaic_sum) {

}
void skip_tile_sum(const Image* input_image, unsigned long long* mosaic_sum) {
    skip_tile_sum_used++;
}

int skip_compact_mosaic_used = -1;
void validate_compact_mosaic(unsigned int TILES_X, unsigned int TILES_Y,
    unsigned long long* mosaic_sum, unsigned char* test_compact_mosaic, unsigned char* test_global_pixel_average) {

}
void skip_compact_mosaic(unsigned int TILES_X, unsigned int TILES_Y,
    unsigned long long* mosaic_sum, unsigned char* compact_mosaic, unsigned char* global_pixel_average) {
    skip_compact_mosaic_used++;
}
int skip_broadcast_used = 0;
void validate_broadcast(const Image* input_image, unsigned char* compact_mosaic, Image* test_output_image) {

}
void skip_broadcast(const Image* input_image, unsigned char* compact_mosaic, Image* output_image) {
    skip_broadcast_used++;
}

int getSkipUsed() {
    return skip_tile_sum_used + skip_compact_mosaic_used + skip_broadcast_used;
}
int getStage1SkipUsed() {
    return skip_tile_sum_used;
}
int getStage2SkipUsed() {
    return skip_compact_mosaic_used;
}
int getStage3SkipUsed() {
    return skip_broadcast_used;
}
