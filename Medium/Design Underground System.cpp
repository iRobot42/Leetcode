class UndergroundSystem {
  unordered_map< int, pair< string, int >> in;
  unordered_map< string, pair< int, int >> out;
public:
  UndergroundSystem() {}
  void checkIn( int id, string s, int t ) {
    in[ id ] = { s, t };
  }
  void checkOut( int id, string s, int t ) {
    const string& r{ in[ id ].first + '|' + s };
    out[ r ].first += t - in[ id ].second;
    in.erase( id );
    out[ r ].second++;
  }
  double getAverageTime( string s, string e ) {
    const string& r{ s + '|' + e };
    return 1.0 * out[ r ].first / out[ r ].second;
  }
};
