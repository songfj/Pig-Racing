#include"LayerGamePlay.h"
#include"../Role/SpritePig.h"

using namespace cocos2d;

LayerGamePlay::LayerGamePlay(){}
LayerGamePlay::~LayerGamePlay(){}


LayerGamePlay *LayerGamePlay::create()
{
	LayerGamePlay *pRet = new LayerGamePlay();
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


bool LayerGamePlay::init()
{
    bool bRet = true;

	//���ر���
	CCTMXTiledMap *tmxPlayBack=CCTMXTiledMap::create("playback.tmx");
	this->addChild(tmxPlayBack);

	//����һ������
	SpritePig

    return bRet;
}