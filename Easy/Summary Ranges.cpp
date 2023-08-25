vector< string > summaryRanges( vector< int >& nums ) {
  if ( nums.empty() ) return {};
  int left{ nums.front() };
  vector< string > result;
  for ( size_t i{ 1 }; i <= nums.size(); ++i ) {
    const int right{ nums[ i-1 ] };
    if ( i == nums.size() || nums[ i ] != right + 1 ) {
      result.push_back( to_string( left ));
      if ( left != right )
        result.back() += "->" + to_string( right );
      if ( i != nums.size() ) left = nums[ i ];
    }
  }
  return result;
}
