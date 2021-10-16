double al[5], bt[5], root[5];

double * calca(double * a, double * b, double * c) {
	al[0] = -1 * (c[0] / b[0]);
	for (int i = 1; i < 5; i++) {
		al[i] = -1 * (c[i] / (a[i] * al[i - 1] + b[i]));
	}
	return al;
}

double * calcb(double * a, double * b, double * d) {
	bt[0] = d[0] / b[0];
	for (int i = 1; i < 5; i++) {
		bt[i] = (d[i] - a[i] * bt[i - 1]) / (a[i] * al[i - 1] + b[i]);
	}
	return bt;
}

double * calcRoot(double * d, double * a, double * b) {
	root[4] = (d[4] - a[4] * bt[4 - 1]) / (a[4] * al[4 - 1] + b[4]);
	for (int i = 3; i >= 0; i--) {
		root[i] = al[i] * root[i + 1] + bt[i];
	}
	return root;
}
