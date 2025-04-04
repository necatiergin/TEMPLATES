template <typename T>
class Container{
public:
	class Iterator{	 
	public:
		bool operator==(const Iterator&)const;
		Iterator& operator++();
		//
	};

	Iterator begin();
	Iterator end();
	//...
};


int main()
{
	Container<int> con;

	for (Container<int>::Iterator beg = con.begin(); beg != con.end(); ++beg) {
		//...
	}

	for (auto beg = con.begin(); beg != con.end(); ++beg) {
		//...
	}
}
