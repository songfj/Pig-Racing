#include  "LayerMenuMain.h"

using namespace cocos2d;

void MenuMainView::start_single_game(CCObject* pSender)
{
	 
}
void MenuMainView::start_net_game(CCObject* pSender){ }
void MenuMainView::setting(CCObject* pSender){ }
void MenuMainView::help(CCObject* pSender){ }
void MenuMainView::about(CCObject* pSender){ } 

bool MenuMainView::init()
{

	 bool bRet = false;
	do{
	  //  .添加背景
		CCSize size = CCDirector::sharedDirector()->getWinSize();
        CCSprite* background = CCSprite::create("back.png"); 
        CC_BREAK_IF(! background); 
        background->setPosition(ccp(size.width/2, size.height/2)); 
        this->addChild(background, 0); 
		//开始单机游戏按钮
		 CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
            "start_single_game.png",
            "start_single_game.png",
            this,
            menu_selector(MenuMainView::start_single_game));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(size.width/2, size.height/2));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* start_single_game = CCMenu::create(pCloseItem, NULL);
        start_single_game->setPosition(CCPointZero);
        CC_BREAK_IF(! start_single_game);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(start_single_game, 2);



		//开始联网游戏按钮
		pCloseItem = CCMenuItemImage::create(
            "start_net_game.png",
            "start_net_game.png",
            this,
			menu_selector(MenuMainView::start_net_game));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(size.width/2, size.height/2+35));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* start_net_game = CCMenu::create(pCloseItem, NULL);
        start_net_game->setPosition(CCPointZero);
        CC_BREAK_IF(! start_net_game);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(start_net_game, 2);

		//设置按钮
		pCloseItem = CCMenuItemImage::create(
            "setting.png",
            "setting.png",
            this,
			menu_selector(MenuMainView::setting));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(size.width/2, size.height/2-35));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* setting = CCMenu::create(pCloseItem, NULL);
        setting->setPosition(CCPointZero);
        CC_BREAK_IF(! setting);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(setting, 2);

		//帮助按钮
		pCloseItem = CCMenuItemImage::create(
            "help1.png",
            "help2.png",
            this,
			menu_selector(MenuMainView::help));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(size.width/2, size.height/2-70));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* help = CCMenu::create(pCloseItem, NULL);
        help->setPosition(CCPointZero);
        CC_BREAK_IF(! help);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(help, 2);

		//关于按钮
		pCloseItem = CCMenuItemImage::create(
            "about1.png",
            "about1.png",
            this,
			menu_selector(MenuMainView::about));
        CC_BREAK_IF(! pCloseItem);

        // Place the menu item bottom-right conner.
        pCloseItem->setPosition(ccp(size.width/2, size.height/2-105));

        // Create a menu with the "close" menu item, it's an auto release object.
        CCMenu* about = CCMenu::create(pCloseItem, NULL);
        about->setPosition(CCPointZero);
        CC_BREAK_IF(! about);

        // Add the menu to HelloWorld layer as a child layer.
        this->addChild(about, 2);
		bRet=true;
	}while(0);
 return bRet;

}