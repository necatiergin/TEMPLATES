struct Base {
	//...
	virtual int foo();
};

struct Der : Base {

	virtual auto foo()->int override;
};
