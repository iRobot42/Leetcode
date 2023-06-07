struct Solution {
  int strStr( string haystack, string needle ) {
    const size_t p{ haystack.find( needle ) };
    return p == string::npos? -1 : p;
  }
};
