#include <string>

class Link {
  private:
    std::string material;

  public:
    Link(std::string material) {
      this->material = material;
    };
    Link() {
      this->material = "";
    };
    std::string get_material() {
      return this->material;
    }
};


// class Node {
// private:
//   Link *data;
//
// public:
//   Node next;
//
//   Node() {
//
//     next = nullptr;
//   }
//
//   Node(Link &link) {
//     data = &link;
//     this->next = NULL;
//   }
//
//
//   Node(Link &link, Node &parentLink) {
//
//     data = &link;
//     next = nullptr;
//   }
//
//   // Node* next() {
//   //   return nextNode;
//   // };
//   // Node* nextSet(Node* next) {
//   //   nextNode = next;
//   //   return nextNode;
//   // };
// };
//
// class LinkedList {
// private:
//   int count;
//   Node cur;
//   Node temp;
//   Node head;
// public:
//
//
//   LinkedList() {
//     count = 0;
//     head = new Node();
//     cur = head;
//     temp = head;
//   };
//
//   void add_node(Link*) {
//     cur = head;
//     while (cur->next() != nullptr) {
//       cur = cur->next();
//     }
//     return;};
//
// };