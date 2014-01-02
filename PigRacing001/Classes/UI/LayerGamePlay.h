/*
作者：ott123
功能：玩游戏的Layer处理
日期：2014年1月2日16:40:23
*/

#ifndef __LAYER_GAMEPLAY_H__
#define __LAYER_GAMEPLAY_H__

#include"cocos2d.h"

class LayerGamePlay:public cocos2d::CCLayer
{
public:
	LayerGamePlay();
	virtual ~LayerGamePlay();

	static LayerGamePlay *create();
	bool init();
private:

};

#endif