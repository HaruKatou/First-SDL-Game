#include "Game.hpp"

Game* game=nullptr;

int main(int argc, const char * argv[])
{
    game = new Game();

    game->init();

    while(game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }
    game->clean();
}
