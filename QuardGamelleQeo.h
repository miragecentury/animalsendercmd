/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#ifndef QDM_QUARDGAMELLEQEO_H_
#define QDM_QUARDGAMELLEQEO_H_

#include <qeo/types.h>


/**
 * Change de poid de la gamelle
 */
typedef struct {
    /**
     * uuid de la gamelle.
     */
    char * from;
    /**
     * the new poids
     */
    float weight;
    /**
     * timestamp
     */
    int32_t timestamp;
} org_animall_home_GamelleMessage_t;
extern const DDS_TypeSupport_meta org_animall_home_GamelleMessage_type[];

/**
 * Change de poid de la balance
 */
typedef struct {
    /**
     * uuid de la balance.
     */
    char * from;
    /**
     * the new poids de l'animal
     */
    float weight;
    /**
     * timestamp
     */
    int32_t timestamp;
} org_animall_home_BalanceMessage_t;
extern const DDS_TypeSupport_meta org_animall_home_BalanceMessage_type[];


#endif /* QDM_QUARDGAMELLEQEO_H_ */

