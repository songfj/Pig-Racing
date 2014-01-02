#include"SceneGamePlay.h"
#include"../UI/LayerGamePlay.h"

using namespace cocos2d;

SceneGamePlay::SceneGamePlay()
{
	
}

SceneGamePlay::~SceneGamePlay()
{
	
}

SceneGamePlay *SceneGamePlay::create()
{   
	SceneGamePlay *pRet = new SceneGamePlay();
    if (pRet && pRet->init())
    {
        pRet->autorelease();
        return pRet;
    }
    else
    {
        CC_SAFE_DELETE(pRet);
        return NULL;
    }
}

bool SceneGamePlay::init()
{
	LayerGamePlay *layer=LayerGamePlay::create();

	this->addChild(layer);
	return true;
}