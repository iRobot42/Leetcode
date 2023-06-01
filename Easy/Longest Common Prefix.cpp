struct Solution {
  string longestCommonPrefix( vector< string >& strs ) {
    const auto& s{ strs.front() };
    for ( size_t c{}; c < s.size(); ++c )
      for ( const auto& n : strs )
        if ( n.empty() || s[ c ] != n[ c ] )
          return s.substr( 0, c );
    return s;
  }
};
