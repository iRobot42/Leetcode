#define V1

#ifdef V1 // Hash table
ListNode* getIntersectionNode( ListNode* headA, ListNode* headB ) {
  unordered_set< ListNode* > a;
  while ( headA ) a.insert( headA ), headA = headA->next;
  while ( headB )
    if ( a.find( headB ) != a.cend() ) return headB;
    else headB = headB->next;
  return nullptr;
}

#elif defined( V2 ) // Two pointers
ListNode* getIntersectionNode( ListNode* headA, ListNode* headB ) {
  ListNode *a{ headA }, *b{ headB };
  while ( a != b )
    a = a ? a->next : headB,
    b = b ? b->next : headA;
  return a;
}

#endif
