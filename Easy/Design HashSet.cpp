class MyHashSet {
  bitset< int( 1e6 ) + 1 > s;
public:
  MyHashSet() {}
  void add( int i ) { s.set( i ); }
  void remove( int i ) { s.reset( i ); }
  bool contains( int i ) { return s.test( i ); }
};
