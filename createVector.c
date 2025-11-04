// criar vetores
int * vect_new (int n){
  int *v = NULL;
  v = (int *)malloc(n*sizeof(int));
  return v;
}

// criar matrizes
int ** mat_new(int nl, int nc){
  int **m = NULL;
  m = (int **)malloc(nl*sizeof(int*));
  for (i=0; i < nl;i++){
    m[i] = (int*)malloc(nc*sizeof(int));
  }
  return m;
}

// libera vetores
void vect_free(int *v){
  free(v);
}

//libera matrizes
void mat_free(int **m, int nl){
  for(i=0; i<nl; i++) free(m[i]);
  free(m);
}
