#pragma once

#include "ofMain.h"
#include "ofxFX.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofImage     image;
    
    ofxFXObject sandbox;
    
    ofxBloom    bloom;
    ofxBlur     blur;
    ofxBokeh    bokeh;
    ofxGlow     glow;
    ofxUnsharp  unsharp;
    ofxOldTv    oldtv;
    
    enum        { nTotalFrag = 19 };
    string      frags[ nTotalFrag ];
    string      fragsTitles[ nTotalFrag];
    float       beat;
    int         nFrag, selection, width, height;
};
