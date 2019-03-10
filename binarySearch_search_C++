 Node* search(Node* root, int data) {
  if (root == NULL) {
    cout << "Not found";
    return NULL;
  }
  if (root->data == data) {
    cout << "Found at: " << root;
    return root;
  }
  if (root->data < data)
    return search(root->right, data);
  else
    return search(root->left, data);
}
