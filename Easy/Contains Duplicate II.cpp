// sliding window
bool containsNearbyDuplicate( vector< int >& nums, int k ) {
  unordered_set< int > s;
  for ( size_t i{}; i < nums.size(); ++i ) {
    if ( i > k ) s.erase( nums[ i-k-1 ]);
    if ( !s.insert( nums[ i ]).second ) return true;
  }
  return false;
}
