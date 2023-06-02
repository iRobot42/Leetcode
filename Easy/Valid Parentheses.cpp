struct Solution {
  bool isValid( string s ) {
    stack< char > st; // O(n)
    for ( const char c : s ) // O(n)
      switch ( c ) {
        case '(': st.push( ')' ); break;
        case '[': case '{': st.push( c + 2 ); break;
        default:
          if ( st.empty() || st.top() != c ) return false;
          else st.pop();
      }
    return st.empty();
  }
};
