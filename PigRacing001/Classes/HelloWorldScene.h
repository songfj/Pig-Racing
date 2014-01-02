#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

#include "Box2D/Box2D.h"

#include "SimpleAudioEngine.h"

//class MenuMainView :public  cocos2d::CCLayer
//{
//public:
//		CREATE_FUNC(MenuMainView);
//		virtual bool init();
//		void start_single_game(CCObject* pSender);
//		void start_net_game(CCObject* pSender);
//		void setting(CCObject* pSender);
//		void help(CCObject* pSender);
//		void about(CCObject* pSender);
//};



class HelloWorld : public cocos2d::CCLayer
{
public:
	static const  int logoTag=0;
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
	void closeLogo(float delta);
	void showLogo();
    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);

    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
};

#endif  // __HELLOWORLD_SCENE_H__