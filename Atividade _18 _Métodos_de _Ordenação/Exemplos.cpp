void bogo_sort(int v[N])
{
    bool trocou;
    do
    {
        trocou = false;
        for (int i = 0; i < N - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                swap(v[i], v[i + 1]);
                trocou = true;
            }
        }
    } while (trocou);
}


void BozoSort(int arValues[], int size) {
	int slot1 = 0;
	int slot2 = 0;
	int temp;

	// Seed our random number generator
	srand(time(NULL));

	// Continue until sorted
	while (!isSorted(arValues,size)) {
		// Pick two values at random.
		slot1 = rand() % size;
		slot2 = rand() % size;

		// Swap the values and go for a retest.
		temp = arValues[slot1];
		arValues[slot1] = arValues[slot2];
		arValues[slot2] = temp;
	}
}

