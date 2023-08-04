int titleToNumber( string title ) {
  int number{};
  for ( const char c : title )
    ( number *= 26 ) += c - 64;
  return number;
}
