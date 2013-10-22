#ifdef _DEBUG
#define DEBUG_CLIENTBLOCK   new( _CLIENT_BLOCK, __FILE__, __LINE__)
#else
#define DEBUG_CLIENTBLOCK
#endif
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#ifdef _DEBUG
#define new DEBUG_CLIENTBLOCK
#endif

//ע��, ��Ȼ��Щ�ط�����, �ر���ȫ�ֱ���.
namespace EAViewEngine
{
	class MemLeakCheck
	{
	private:
		MemLeakCheck()
		{
		}
	public:
		static void InitMemLeakCheck()
		{
			_CrtSetDbgFlag( _CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF );
		}
	};
}