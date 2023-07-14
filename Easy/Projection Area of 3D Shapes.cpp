int projectionArea( vector< vector< int >>& g ) {
  int x{};
  for ( size_t i{}, s{ g.size() }; i < s; ++i ) {
    int y{}, z{};
    for ( size_t j{}; j < s; ++j )
      x += g[ i ][ j ] > 0,
      y = max( y, g[ i ][ j ] ),
      z = max( z, g[ j ][ i ] );
    x += y + z;
  }
  return x;
}
