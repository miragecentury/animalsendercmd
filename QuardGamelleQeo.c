/**************************************************************
 ********          THIS IS A GENERATED FILE         ***********
 **************************************************************/

#include "QuardGamelleQeo.h"

const DDS_TypeSupport_meta org_animall_home_GamelleMessage_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "org.animall.home.GamelleMessage", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 3, .size = sizeof(org_animall_home_GamelleMessage_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "from", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(org_animall_home_GamelleMessage_t, from), .size = 0 },  
    { .tc = CDR_TYPECODE_FLOAT, .name = "weight", .offset = offsetof(org_animall_home_GamelleMessage_t, weight) },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(org_animall_home_GamelleMessage_t, timestamp) },  
};

const DDS_TypeSupport_meta org_animall_home_BalanceMessage_type[] = {
    { .tc = CDR_TYPECODE_STRUCT, .name = "org.animall.home.BalanceMessage", .flags = TSMFLAG_DYNAMIC|TSMFLAG_GENID|TSMFLAG_MUTABLE, .nelem = 3, .size = sizeof(org_animall_home_BalanceMessage_t) },  
    { .tc = CDR_TYPECODE_CSTRING, .name = "from", .flags = TSMFLAG_DYNAMIC, .offset = offsetof(org_animall_home_BalanceMessage_t, from), .size = 0 },  
    { .tc = CDR_TYPECODE_FLOAT, .name = "weight", .offset = offsetof(org_animall_home_BalanceMessage_t, weight) },  
    { .tc = CDR_TYPECODE_LONG, .name = "timestamp", .offset = offsetof(org_animall_home_BalanceMessage_t, timestamp) },  
};
