/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.1 at Fri Jun 15 15:59:08 2018. */

#include "smart-compass.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t SmartCompassMessage_fields[12] = {
    PB_FIELD(  1, FIXED_LENGTH_BYTES, SINGULAR, STATIC  , FIRST, SmartCompassMessage, network_hash, network_hash, 0),
    PB_FIELD(  2, FIXED_LENGTH_BYTES, SINGULAR, STATIC  , OTHER, SmartCompassMessage, message_hash, network_hash, 0),
    PB_FIELD(  3, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, tx_peer_id, message_hash, 0),
    PB_FIELD(  4, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, tx_time, tx_peer_id, 0),
    PB_FIELD(  5, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, tx_ms, tx_time, 0),
    PB_FIELD(  6, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, peer_id, tx_ms, 0),
    PB_FIELD(  7, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, last_updated_at, peer_id, 0),
    PB_FIELD(  8, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, hue, last_updated_at, 0),
    PB_FIELD(  9, UINT32  , SINGULAR, STATIC  , OTHER, SmartCompassMessage, saturation, hue, 0),
    PB_FIELD( 10, INT32   , SINGULAR, STATIC  , OTHER, SmartCompassMessage, latitude, saturation, 0),
    PB_FIELD( 11, INT32   , SINGULAR, STATIC  , OTHER, SmartCompassMessage, longitude, latitude, 0),
    PB_LAST_FIELD
};


/* @@protoc_insertion_point(eof) */
