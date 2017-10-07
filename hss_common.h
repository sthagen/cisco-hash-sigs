#if !defined( HSS_COMMON_H_ )
#define HSS_COMMON_H_

#include <stdlib.h>
#include "common_defs.h"

/*
 * This returns the length of the public key for the given parameter set
 */
size_t hss_get_public_key_len(unsigned levels,
                   const param_set_t *lm_type,
                   const param_set_t *lm_ots_type);

/*
 * This returns the length of the signature for the given parameter set
 */
size_t hss_get_signature_len(unsigned levels,
                   const param_set_t *lm_type,
                   const param_set_t *lm_ots_type);

#endif /* HSS_COMMON_H_ */