/* blpapi_types.h     -*-C-*- */

#ifndef INCLUDED_BLPAPI_TYPES
#define INCLUDED_BLPAPI_TYPES

typedef int                 blpapi_Bool_t;
typedef char                blpapi_Char_t;
typedef unsigned char       blpapi_UChar_t;
typedef short               blpapi_Int16_t;
typedef short               blpapi_UInt16_t;
typedef int                 blpapi_Int32_t;
typedef unsigned int        blpapi_UInt32_t;
typedef long long           blpapi_Int64_t;
typedef unsigned long long  blpapi_UInt64_t;
typedef float               blpapi_Float32_t;
typedef double              blpapi_Float64_t;


enum blpapi_DataType_t {
        BLPAPI_DATATYPE_BOOL           = 1     //< 
      , BLPAPI_DATATYPE_CHAR           = 2     //< Char
      , BLPAPI_DATATYPE_BYTE           = 3     //< Unsigned 8 bit value
      , BLPAPI_DATATYPE_INT32          = 4     //< 32 bit Integer
      , BLPAPI_DATATYPE_INT64          = 5     //< 64 bit Integer
      , BLPAPI_DATATYPE_FLOAT32        = 6     //< 64 bit Floating point - IEEE
      , BLPAPI_DATATYPE_FLOAT64        = 7     //< 64 bit Floating point - IEEE
      , BLPAPI_DATATYPE_STRING         = 8     //< ASCIIZ string
      , BLPAPI_DATATYPE_BYTEARRAY      = 9     //< Opaque binary data
      , BLPAPI_DATATYPE_DATE           = 10     //< Date
      , BLPAPI_DATATYPE_TIME           = 11    //< Timestamp           
      , BLPAPI_DATATYPE_DECIMAL        = 12    // 
      , BLPAPI_DATATYPE_DATETIME       = 13    //< Date and time
      , BLPAPI_DATATYPE_ENUMERATION    = 14    //< An opaque enumeration
      , BLPAPI_DATATYPE_SEQUENCE       = 15    //< Sequence type
      , BLPAPI_DATATYPE_CHOICE         = 16    //< Choice type
      , BLPAPI_DATATYPE_CORRELATION_ID = 17    // Used for some internal messages
};

#ifdef __cplusplus 

namespace BloombergLP {
namespace blpapi {

struct DataType {
    enum Value {
        BOOL           = BLPAPI_DATATYPE_BOOL           //< 
      , CHAR           = BLPAPI_DATATYPE_CHAR           //< Char
      , BYTE           = BLPAPI_DATATYPE_BYTE           //< Unsigned 8 bit value
      , INT32          = BLPAPI_DATATYPE_INT32          //< 32 bit Integer
      , INT64          = BLPAPI_DATATYPE_INT64          //< 64 bit Integer
      , FLOAT32        = BLPAPI_DATATYPE_FLOAT32        //< 32 bit Floating point
      , FLOAT64        = BLPAPI_DATATYPE_FLOAT64        //< 64 bit Floating point
      , STRING         = BLPAPI_DATATYPE_STRING         //< ASCIIZ string
      , BYTEARRAY      = BLPAPI_DATATYPE_BYTEARRAY      //< Opaque binary data
      , DATE           = BLPAPI_DATATYPE_DATE           //< Date
      , TIME           = BLPAPI_DATATYPE_TIME           //< Timestamp           
      , DECIMAL        = BLPAPI_DATATYPE_DECIMAL        // Currently Unsuppored
      , DATETIME       = BLPAPI_DATATYPE_DATETIME       //< Date and time
      , ENUMERATION    = BLPAPI_DATATYPE_ENUMERATION    //< An opaque enumeration
      , SEQUENCE       = BLPAPI_DATATYPE_SEQUENCE      //< Sequence type
      , CHOICE         = BLPAPI_DATATYPE_CHOICE         //< Choice type
      , CORRELATION_ID = BLPAPI_DATATYPE_CORRELATION_ID // Used for some internal 
                                                        // messages
    };
};

typedef blpapi_Bool_t Bool;
typedef blpapi_Char_t Char;
typedef blpapi_UChar_t UChar;
typedef blpapi_Int16_t Int16;
typedef blpapi_UInt16_t UInt16;
typedef blpapi_Int32_t Int32;
typedef blpapi_UInt32_t UInt32;
typedef blpapi_Int64_t Int64;
typedef blpapi_UInt64_t UInt64;
typedef blpapi_Float32_t Float32;
typedef blpapi_Float64_t Float64;

} // namespace blpapi {
} // namespace BloombergLP {

#endif /* ifdef __cplusplus  */


#endif /* #ifndef INCLUDED_API_TYPES */

