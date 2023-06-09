struct Solution {
  char nextGreatestLetter( vector< char >& letters, char target ) {
    if ( letters.back() <= target ) return letters.front();
    size_t l{}, r{ letters.size() - 1 };
    while ( l < r ) {
      const size_t m{ ( l + r ) / 2 };
      letters.at( m ) <= target ? l = m + 1 : r = m;
    }
    return letters.at( l );
  }
  #if 0
  char nextGreatestLetter( vector< char >& letters, char target ) {
    return letters.back() <= target ? letters.front() :
      *upper_bound( letters.cbegin(), letters.cend(), target );
  }
  #endif
};
