///////////////////////////////////////////////////////////////////////////////////
//
//                          �ؿ�һ	��	�й����ʴ�ѧվ
//							����		��	��������¥
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