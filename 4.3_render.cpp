#include "2_Game.hpp"

void Game::render() 
{
//clear last frame
    myWindow.clear();

//playing state
    switch(state)
    {
        case MainMenu:
            break;

        case Playing:
            //draw background
                myWindow.draw(myBackground);
            
            //draw projectiles
                for( int i = 0 ; i < PlayerProjectiles.size() ; i++ )
                {
                    myWindow.draw(PlayerProjectiles[i]);
                }
            //draw gifts
                for( int i = 0 ; i < gifts.size() ; i++ )
                {
                    myWindow.draw(gifts[i]);
                }
            //draw meats
                for( int i = 0 ; i < meats.size() ; i++ )
                {
                    myWindow.draw(meats[i]);
                }
            //draw eggs
                for( int i = 0 ; i < eggProjectiles.size() ; i++ )
                {
                    myWindow.draw(eggProjectiles[i]);
                }
            //draw enemies
                for( int i = 0 ; i < myEnemies.size() ; i++ )
                {
                    myWindow.draw(myEnemies[i]);
                }
            //draw eggSplashes
                for( int i = 0 ; i < eggSplash.size() ; i++ )
                {
                    myWindow.draw(eggSplash[i]);
                }
            //draw player
                myWindow.draw(myPlayer);
            //infos
                myWindow.draw(HeartSample);
                myWindow.draw(HealthText);
                myWindow.draw(ProjectileLimitText);
                myWindow.draw(ProjectileInfo);
                myWindow.draw(scoreText);
                //myWindow.draw(bestScoreText);
                myWindow.draw(myTimerText);
            break;

        case Win:
            myWindow.draw(myBackground);
            myWindow.draw(messageText);
            break;

        case Lose:
            myWindow.draw(myBackground);
            myWindow.draw(messageText);
            break;

        case Pause:
            break;
    }
//display
    myWindow.display();
}