template <typename T>
int foo(T) {

}  // general template definition

extern template int foo(char c);  
extern template int foo(int v);   

int b1 = foo('A');  // exact match: no object code generated.
int b2 = foo(4);	//exact match: no object code generated.
int b3 = foo(3.4);  // not exact match: Object code generated.
int b4 = foo(5u);  // not exact match: Object code generated.
