#include "base.h"

using namespace std;

void Base::init(SDL_Renderer* renderer){
    loadSprites(surface, texture, renderer, path);
    rect1.x = 0;
    rect1.y = 590;
    rect1.w = 1280;
    rect1.h = 130;
    rect2.x = 1280;
    rect2.y = 590;
    rect2.w = 1280;
    rect2.h = 130;
}

void Base::display(SDL_Renderer* renderer){
    SDL_RenderCopy(renderer, texture, NULL, &rect1);
    SDL_RenderCopy(renderer, texture, NULL, &rect2);
    rect1.x -=5;
    rect2.x -=5;
    if(rect1.x < -1279) rect1.x = 1280;
    if(rect2.x < -1279) rect2.x = 1280;
}

void Base::destroy(){
    destroyObject(surface, texture);
}
