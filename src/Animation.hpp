#ifndef ANIMATION_HPP
#define ANIMATION_HPP

#include "Wrapper.hpp"

class Animation (Drawable){
	public:
		Animation(SDL_Surface *imgs[], int frames, int _width, int _height);
	private:
		SDL_Surface *frames;
		int curFrame, nframes;

};

#endif