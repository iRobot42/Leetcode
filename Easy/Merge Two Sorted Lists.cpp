struct Solution {
  ListNode* mergeTwoLists( ListNode* a, ListNode* b ) {
    ListNode h, *t{ &h };
    for ( t; a && b; t = t->next )
      if ( a->val < b->val ) t->next = a, a = a->next;
      else t->next = b, b = b->next;
    return t->next = a ? a : b, h.next;
  }
};
