int lengthOfLastWord( string s ) {
  const size_t i{ s.find_last_not_of( ' ' ) };
  return i - s.find_last_of( ' ', i );
}
