bool containsDuplicate( vector< int >& nums ) {
  unordered_set< int > distinct;
  for ( const int num : nums )
    if ( distinct.count( num )) return true;
    else distinct.insert( num );
  return false;
}
