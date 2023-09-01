bool isAnagram( string s, string t ) {
  int a[ 26 ]{};
  for ( const char c : s ) ++a[ c-'a' ];
  for ( const char c : t ) --a[ c-'a' ];
  for ( int i{}; i < 26; ++i )
    if ( a[ i ] ) return false;
  return true;
}
