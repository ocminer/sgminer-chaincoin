#ifndef CHAINCOIN_H
#define CHAINCOIN_H

#include "miner.h"

extern int chaincoin_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void chaincoin_regenhash(struct work *work);

#endif /* CHAINCOIN_H */
