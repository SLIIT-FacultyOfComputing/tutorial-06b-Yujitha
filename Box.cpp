#include "Box.h"

// Implement setters and getters
void Box :: setValues(int blength, int bwidth, int bheight) {
  length = blength;
  width = bwidth;
  height = bheight;
}

int Box :: getlength() {
  return length;
}

int Box :: getheight() {
  return width;
}

int Box :: getwidth() {
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;

}