/*
���ߣ�ott123
���ܣ�����Ϸ��Layer����
���ڣ�2014��1��2��16:40:23
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