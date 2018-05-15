
const int MAX_ITEMS = 5;

class array_ds
{
		
	public:
		
		array_ds();
		void MakeEmpty();
		bool IsFull();
		int GetLength();
		int GetItem(int item);
		int PutItem(int item);
		int PutItembykey(int pos, int item);
		void Display();
		int DeleteItem(int item);
		int DeleteItembykey(int item);
		void PrintArray();
		void Sort();
		void Reverse();
		//int GetNextItem();
	private:
		int length;
		int info[MAX_ITEMS];
};