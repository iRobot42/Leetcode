int maxProfit( vector< int >& prices ) {
  int max_profit{};
  for ( int day{}, min_price{ INT_MAX }; day < prices.size(); ++day )
    if ( prices[ day ] < min_price ) min_price = prices[ day ];
    else if ( const int current_profit{ prices[ day ] - min_price };
      current_profit > max_profit ) max_profit = current_profit;
  return max_profit;
}
