void sortArray(vector<int> &v, int n)
{
  int l = 0, m = 0, h = n - 1;
  while (m <= h)
  {
    if (v[m] == 0)
    {
      swap(v[l], v[m]);
      l++;
      m++;
    }
    else if (v[m] == 1)
    {
      m++;
    }
    else
    {
      swap(v[h], v[m]);
      h--;
    }
  }
}