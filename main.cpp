#include <iostream>

// #include "src/hello.hpp"
// #include "src/link.hpp"
#include "src/node.hpp"

int main() {
  LinkedList LinkedList;
  Link gold = Link("Gold");
  Node node_one = Node(gold);
  Node* node_ptr = &node_one;
  LinkedList.add_node(gold);
  node_one.print();
  node_ptr->print();

  Link silver = Link("Silver");
  Node node_two = Node(silver);
  node_two.print();
  node_one.next = &node_two;
  // node_one.setNext(node_two);
  node_one.next->print();
  LinkedList.add_node(silver);

  Link bronze = Link("Bronze");
  Node node_three = Node(bronze);

  Node temp_node = *LinkedList.getHead();
  temp_node.print();
  temp_node.next->print();

  Node retrieved_node_two = node_one.getNext();
  Node retrieved_node_three = node_two.getNext();
}
