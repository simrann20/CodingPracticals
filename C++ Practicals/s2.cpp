#include<iostream>
using namespace std;

int main()
{
	struct node{
		int inf;
		node *next;
		node *prev;
	};
	
	class DLL{
		private:
		node *head,*tail;
		public:
		DLL()
		{
			head = NULL;
			tail = NULL;
		}
		void add_node(){
			
		}
	};
}
