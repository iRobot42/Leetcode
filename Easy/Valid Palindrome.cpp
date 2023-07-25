bool isPalindrome( string s ) {
  size_t l{}, r{ s.size()-1 };
  while ( l < r )
    if ( !isalnum( s[ l ] )) ++l;
    else if ( !isalnum( s[ r ] )) --r;
    else if ( tolower( s[ l++ ] ) != tolower( s[ r-- ] ))
      return false;
  return true;
}
