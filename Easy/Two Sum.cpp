struct Solution {
  vector< int > twoSum( vector< int >& nums, int target ) {
    unordered_map< int, int > h;
    for ( int i{}, t; i < nums.size(); ++i )
      if ( h.find( t = target - nums[ i ] ) != h.cend() )
        return { h[ t ], i };
      else h[ nums[ i ] ] = i;
    return {};
  }
};
