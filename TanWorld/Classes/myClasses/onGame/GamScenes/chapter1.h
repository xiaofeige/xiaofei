///////////////////////////////////////////////////////////////////////////////////
//
//                          关卡一	：	中国地质大学站
//							任务		：	保卫公主楼
//
/////////////////////////////////////////////////////////////////////////////////////

#include "..\BaseScene.h"

class Chapter1 :public BaseLayer
{
public:
	
	virtual bool init();

	CREATE_FUNC(Chapter1);
	RUN_THIS_CHAPTER(Chapter1);
private:
	bool		contactListen(const PhysicsContact& contact);
};