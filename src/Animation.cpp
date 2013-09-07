#include "Animation.hpp"

Animation::Animation (SDL_Surface *imgs[], int frames, int _width, int _height)
{
  frames = imgs;
  curFrame = 0;
  nframes = frames;
  surface = frames[0];
  width = _width;
  height = _height;
}
