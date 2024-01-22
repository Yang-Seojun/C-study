#define SEED 17

int MUTL = 25173;
int INC = 13849;
int MOD = 65536;

static unsigned int seed = SEED;
 
unsigned random_i(void) {
	seed = (MUTL * seed + INC) % MOD;

	return seed;
}

double random_f(void) {
	seed = (MUTL * seed + INC) % MOD;

	return seed / (double)MOD;
}