/// You have grown SMARTER, and halved the run time by checking
/// divisibility with odd-numbers only. You also understand that
/// looping till x/2 is enough.

int prime_or_not(int x) {
	if (x == 2) {
		return 1;
	}

	if (x % 2 == 0) {
		return 0;
	}

	int i;
	for (i = 3; i < x/2; i += 2) {
		if (x % i == 0){
			return 0;
		}
	}

	return 1;
}
