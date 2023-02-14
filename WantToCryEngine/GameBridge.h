//
//  GameBridge.h
//  WantToCryEngine
//
//  Created by Alex on 2023-02-14.
//

#ifndef GameBridge_h
#define GameBridge_h

#import <GLKit/GLKit.h>

struct Game;

#ifdef __cplusplus
extern "C"
{
#endif
//Creates a game and gives Swift the pointer to it for future calls.
struct Game* NewGame(GLKView* view);
//Game's update function to be triggered by the update.
void GameUpdate(struct Game* inThis);
//Game's draw that passes things to the renderer draw.
void GameDraw(struct Game* inThis, CGRect rect);
//Game Event caller.
void GameEventSinglePan(struct Game* inThis, GLKVector2 input);
#ifdef __cplusplus
}
#endif

#endif /* GameBridge_h */
