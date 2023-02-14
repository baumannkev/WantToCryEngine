//
//  Game.hpp
//  WantToCryEngine
//
//  Created by Alex on 2023-02-14.
//

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include "Common.h"

class Game{
public:
    std::string resourcePath;
    //these are used to store models and gameobjects in an easily accessible way.
    std::map<std::string, GeometryObject> models;
    std::map<std::string, GameObject> objects;
    Renderer renderer;
    //Set up the base state upon construction. Build the level, etc...
    //The view is required to set up the Renderer straight from here.
    Game(GLKView* view);
    //Call these events from Swift using the GameBridge.
    void EventSwipeUp();
    //Events can have parameters - once again, pass in from Swift through GameBridge.
    void EventSinglePan(GLKVector2 input);
    //This is where the magic happens - pass the frame update to this function.
    void Update();
    //This is a bridge to the Renderer.
    void DrawCall(CGRect* drawArea);
};


#endif /* Game_hpp */
