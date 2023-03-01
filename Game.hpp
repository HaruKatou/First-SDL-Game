#ifndef Game_hpp
#define Game_hpp

#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <iostream>

using namespace std;

class Game {
public:
    Game();
    ~Game();

    void init();

    void handleEvents();
    void update();
    void render();
    void clean();
    bool running();

private:
    bool isRunning = true;
    SDL_Window *gWindow;
    SDL_Renderer *gRenderer;

};

#endif //Game_hpp
