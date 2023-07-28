bool hasCycle( ListNode* n ) {
  ListNode *n1{ n }, *n2{ n };
  while ( n2 && n2->next )
    if (( n1 = n1->next ) == ( n2 = n2->next->next ))
      return true;
  return false;
}
