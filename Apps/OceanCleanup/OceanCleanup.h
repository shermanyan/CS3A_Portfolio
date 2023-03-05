//
// Created by Sherman Yan on 12/14/22.
//

#ifndef FINALPROJECT_OCEANCLEANUP_H
#define FINALPROJECT_OCEANCLEANUP_H

#include "AppComponent.h"
#include "Trash/TrashGenerator.h"
#include "Vessel.h"
#include "Fonts.h"
#include "Position.h"

class OceanCleanup: public AppComponent {
private:
    TrashGenerator trashGenerator;
    Vessel boat;
    sf::Clock clock;
    sf::Clock boostTime;
    sf::Text scoreText;
    sf::Text gameTitle;

public:
    OceanCleanup();

    void eventHandler(sf::RenderWindow &window, const sf::Event &event) override;
    void update(const sf::RenderWindow &window) override;
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;


};


#endif //FINALPROJECT_OCEANCLEANUP_H
