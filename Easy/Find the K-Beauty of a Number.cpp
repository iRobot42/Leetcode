int divisorSubstrings( int num, int k ) {
  int c{};
  const string s{ to_string( num )};
  for ( size_t i{}, I{ s.size()-k }; i <= I; ++i ) {
    const int div{ stoi( s.substr( i, k ))};
    if ( div && !( num % div )) ++c;
  }
  return c;
}
