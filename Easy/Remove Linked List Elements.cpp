#define V2

#ifdef V1 // iterative
ListNode* removeElements( ListNode* head, int val ) {
  while ( head && head->val == val ) head = head->next;
  if ( !head ) return nullptr;
  ListNode* curr{ head };
  while ( curr->next )
    if ( curr->next->val != val ) curr = curr->next;
    else curr->next = curr->next->next;
  return head;
}

#elif defined( V2 ) // no leak
ListNode* removeElements( ListNode* head, int val ) {
  while ( head && head->val == val ) {
    ListNode* temp{ head };
    head = head->next;
    delete temp;
  }
  if ( !head ) return nullptr;
  ListNode* curr{ head };
  while ( curr->next )
    if ( curr->next->val == val ) {
      ListNode* temp{ curr->next };
      curr->next = temp->next;
      delete temp;
    } else curr = curr->next;
  return head;
}

#elif defined( V3 ) // recursive
ListNode* removeElements( ListNode* head, int val ) {
  if ( !head ) return nullptr;
  head->next = removeElements( head->next, val );
  return head->val == val ? head->next : head;
}

#endif
