bool isIsomorphic( string s, string t ) {
  unordered_map< char, char > ms, mt;
  for ( size_t i{}; i < s.size(); ++i )
    if ( !ms[ s[ i ]] && !mt[ t[ i ]] )
      ms[ s[ i ]] = t[ i ],
      mt[ t[ i ]] = s[ i ];
    else if ( ms[ s[ i ]] != t[ i ] )
      return false;
  return true;
}
