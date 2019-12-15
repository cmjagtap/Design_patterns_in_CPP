
#include <iostream>

using namespace std;

class SingletonClass
{
	public:
		static SingletonClass *getInstance();
		void TestingSingletonClass();

	private:
		static SingletonClass *m_instance;
		SingletonClass();
		SingletonClass(SingletonClass const&); //copy constructor private
		SingletonClass& operator=(SingletonClass const&);
};