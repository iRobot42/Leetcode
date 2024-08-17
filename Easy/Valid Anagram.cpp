bool isAnagram( string s, string t ) {
  int a[ 26 ]{};
  for ( const char c : s ) ++a[ c-'a' ];
  for ( const char c : t ) --a[ c-'a' ];
  for ( const int i : a ) if ( i ) return false;
  return true;
}
