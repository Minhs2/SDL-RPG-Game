#include "Global.h"

bool Global::hasUpMap = false;
bool Global::hasLeftMap = false;
bool Global::hasRightMap = false;
bool Global::hasDownMap = false;
double Global::TEXTURE_SCALE = 1;
int Global::SCREEN_WIDTH = 1024;
int Global::SCREEN_HEIGHT = 576;
float Global::timeElapsed = 0;

Global::Global(const double textureScale, const int screenWidth, const int screenHeight) {

}

Global::~Global() {
}
