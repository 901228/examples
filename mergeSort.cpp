void MergeSort(int *a, int from, int to) {
  int mid;
  if (from < to) {
    mid=(from+to)/2;

    MergeSort(a, from, mid);
    MergeSort(a, mid+1, to);

    Merge(a, from, to, mid);
  }
}
void Merge(int *a, int from, int to, int mid);
