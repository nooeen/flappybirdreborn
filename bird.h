#ifndef BIRD_H
#define BIRD_H

#include "sdl_engine.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

class Bird
{
public:
    SDL_Rect dstrect;

    void select();
    void init(SDL_Renderer* renderer);
    void display(SDL_Renderer* renderer);
    void update();
    void keyUpdate();
    void aniUpdate();
    void status(bool &close);
    void destroy();
private:
    char* path = "sprites\\yellowBird.png";
    SDL_Texture *texture = NULL;
    SDL_Surface *surface = NULL;
    SDL_Rect srcrect;
    double sizeMultiplier = 1.2;
    int speed = 500;
    int velocity = 0;
    int delay = 0;
    int flapStatus = 2; //1-up 2-mid 3-down
    bool flapReversed = false;
    double angle = 0;
    int hold = 0;
    SDL_Point* center = NULL;
    SDL_RendererFlip flip = SDL_FLIP_NONE;
};

#endif // BIRD_H