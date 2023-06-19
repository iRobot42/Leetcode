int largestAltitude( vector< int >& gain ) {
  int top{};
  for ( int cur{}; const int i : gain )
    top = max( top, cur += i );
  return top;
}
