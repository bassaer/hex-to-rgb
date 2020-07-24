#include <stdio.h>

typedef struct {
  unsigned char r;
  unsigned char g;
  unsigned char b;
} color_t;

void to_rgb(int hex, color_t *color) {
  color->r = (hex >> 16) & 0xFF;
  color->g = (hex >>  8) & 0xFF;
  color->b = (hex      ) & 0xFF;
}


int main() {
  int hex = 0x607D8B;
  color_t color;
  to_rgb(hex, &color);
  printf("[hex]: 0x%x, [R]: %d, [G]: %d, [B]: %d\n", hex, color.r, color.g, color.b);
  return 0;
}
