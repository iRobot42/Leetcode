#define V1

#ifdef V1 // iterative
ListNode* reverseList( ListNode* c ) {
  ListNode *p{}, *n{};
  while ( c ) n = c->next, c->next = p, p = c, c = n;
  return p;
}

#elif defined( V2 ) // recursive
ListNode* reverseList( ListNode* c, ListNode* p = nullptr ) {
  return c ? reverseList( c->next, ( c->next = p, c )) : p;
}

#endif
