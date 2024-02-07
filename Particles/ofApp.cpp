#include "ofApp.h"

void ofApp::setup(){
    // 
    ofBackground(0);
}

void ofApp::update(){
    mousePos.x = mouseX; 
    mousePos.y = mouseY; 
}

void ofApp::draw(){
    ofSetColor(255, 0, 0); 
    ofDrawCircle(mousePos.x, mousePos.y, 50);
}
