### from C++ Templates book

8.4 SFINAE (Substitution Failure Is Not An Error)
In C++ it is pretty common to overload functions to account for various argument types. 
When a compiler sees a call to an overloaded function, it must therefore consider each candidate separately, evaluating the arguments of the call and picking the candidate that matches best (see also Appendix C for some details about this process).

In cases where the set of candidates for a call includes function templates, the compiler first has to determine what template arguments should be used for that candidate, then substitute those arguments in the function parameter list and in its return type, and then evaluate how well it matches (just like an ordinary function).
However, the substitution process could run into problems: 
It could produce constructs that make no sense. Rather than deciding that such meaningless substitutions lead to errors, the language rules instead say that candidates with such substitution problems are simply ignored.

We call this principle **SFINAE (pronounced like sfee-nay)**, which stands for _“substitution failure is not an error.”_
Note that the substitution process described here is distinct from the on-demand instantiation process (see Section 2.2 on page 27): 
The substitution may be done even for potential instantiations that are not needed (so the compiler can evaluate whether indeed they are unneeded). 
It is a substitution of the constructs appearing directly in the declaration of the function (but not its body).

