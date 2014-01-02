#ifndef __SCENE_GAMEPLAY_H__
#define __SCENE_GAMEPLAY_H__

#include"cocos2d.h"

class SceneGamePlay:public cocos2d::CCScene
{
public:
	SceneGamePlay();
	virtual	~SceneGamePlay();

	static SceneGamePlay *create();
	bool init();

private:

};

#endif