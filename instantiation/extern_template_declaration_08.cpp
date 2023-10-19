/* The C++ standard library includes a number of templates that are only commonly used with a few basic types. 
For example, the std::basic_string class template is most commonly used with char (because std::string is a type alias instantiate it with other character-like types. 
Therefore, it is common for standard library implementations to introduce explicit instantiation declarations for these common cases. 
For example:
*/

namespace std {
  template<typename charT, typename traits = char_traits<charT>,
                          typename Allocator = allocator<charT>>
  class basic_string {
    //...
  };

  extern template class basic_string<char>;
  extern template class basic_string<wchar_t>;
}

/* The source files implementing the standard library will then contain the corresponding explicit instantiation definitions, 
so that these common implementations can be shared among all users of the standard library. 
Similar explicit instantiations often exist for the various stream classes, 
such as basic_iostream, basic_istream, and so on.
*/
