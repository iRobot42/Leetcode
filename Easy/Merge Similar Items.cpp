vector< vector< int >> mergeSimilarItems( vector< vector< int >>& items1,
                                          vector< vector< int >>& items2 ) {
  map< int, int > hash;
  for ( const auto& item : items1 ) hash[ item.front() ] += item.back();
  for ( const auto& item : items2 ) hash[ item.front() ] += item.back();
  vector< vector< int >> result;
  for ( const auto [ value, weight ] : hash ) result.push_back({ value, weight });
  return result;
}
