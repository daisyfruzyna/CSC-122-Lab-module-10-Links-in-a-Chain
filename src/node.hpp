//
// Created by daisy on 4/24/2026.
//
#include <iostream>
#include <string>
#include "link.hpp"
#ifndef LINKS_IN_A_CHAIN_NODE_HPP
#define LINKS_IN_A_CHAIN_NODE_HPP

using namespace std;

class Node {
  public:
  Link data;
  Node *next;

  Node() {
    data = Link();
    next = nullptr;
  }
  Node(const Link& data) {
    this->data = data;
    next = nullptr;
  }
  Node(Link data, Node *parentLink) {
    this->data = data;
    next = nullptr;
    // parentLink.next = parentLink;
  }
  void setNext(Node next) {
    this->next = &next;
  }
  Node getNext() {
    return *next;
  }
  void print() {
    cout << data.get_material() << endl;
  }

};

class LinkedList {
  private:
    int count;
    Node *cur;
    Node *temp;
    Node *head;
  public:


    LinkedList() {
      count = 0;
      head = new Node();
      cur = head;
      temp = head;
    }

    void add_node(Link data) {
      cur = head;
      while (cur->next != nullptr) {
        temp = new Node(data);
        cur = cur->next;
      }
      return;
    }
    void appendNode(Node *node) {
      cur = head;
      while (cur->next != nullptr) {
        cur = cur->next;
      }
      cur->next = node;
      return;
    }

    Node* getHead() {
      return head;
    }
  };
#endif //LINKS_IN_A_CHAIN_NODE_HPP