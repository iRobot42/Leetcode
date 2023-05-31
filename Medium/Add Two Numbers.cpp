struct Solution {
  ListNode* addTwoNumbers( ListNode* l1, ListNode* l2 ) {
    ListNode* h{ new ListNode }, *n{ h };
    int s{};
    while ( l1 || l2 || s ) {
      if ( l1 ) s += l1->val, l1 = l1->next;
      if ( l2 ) s += l2->val, l2 = l2->next;
      n = n->next = new ListNode( s % 10 ), s /= 10;
    }
    n = h, h = h->next, delete n; // clearing extra node
    return h;
  }
};
