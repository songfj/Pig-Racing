#ifndef __MenuMain_Layer_H__
#define __MenuMain_Layer_H__
#include "cocos2d.h"
class MenuMainView :public  cocos2d::CCLayer
{
public:
		CREATE_FUNC(MenuMainView);
		virtual bool init();
		void start_single_game(CCObject* pSender);
		void start_net_game(CCObject* pSender);
		void setting(CCObject* pSender);
		void help(CCObject* pSender);
		void about(CCObject* pSender);
};


#endif 