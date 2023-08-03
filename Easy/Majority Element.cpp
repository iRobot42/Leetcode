#define V2

#ifdef V1 // Hash
int majorityElement( vector< int >& nums ) {
  unordered_map< int, int > m;
  const int s = nums.size() / 2;
  for ( const int i : nums )
    if ( ++m[ i ] > s ) return i;
  return {};
}

#elif defined( V2 ) // Boyer-Moore
int majorityElement( vector< int >& nums ) {
  int x;
  for ( int c{}; const int i : nums )
    ( x = c ? x : i ) == i ? ++c : --c;
  return x;
}

#endif
