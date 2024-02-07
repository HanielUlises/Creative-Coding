#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
    public:
        void setup();
        void update();
        void draw();

        // Add any variables you need here
        // For example, to store the mouse position:
        glm::vec2 mousePos;
};
