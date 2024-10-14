class Container {
public:
	class Iterator {
		//...
	};

	Iterator foo();
};


//Iterator Container::foo() {	} //error Iterator is in class scope

auto Container::foo()->Iterator
{
	//...
}
