//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct RawData {
    _Bool _field1;
    void *_field2;
    int _field3;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _malloc_zone_t {
    void *_field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    char *_field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    struct malloc_introspection_t *_field13;
    unsigned int _field14;
    CDUnknownFunctionPointerType _field15;
    CDUnknownFunctionPointerType _field16;
    CDUnknownFunctionPointerType _field17;
    CDUnknownFunctionPointerType _field18;
};

struct malloc_introspection_t;

struct malloc_statistics_t {
    unsigned int blocks_in_use;
    unsigned long long size_in_use;
    unsigned long long max_size_in_use;
    unsigned long long size_allocated;
};

struct os_state_data_decoder_s {
    char _field1[64];
    char _field2[64];
};

struct os_state_data_s {
    unsigned int _field1;
    union {
        unsigned int :32;
        unsigned int _field1;
    } _field2;
    struct os_state_data_decoder_s _field3;
    char _field4[64];
    unsigned char _field5[0];
};

struct os_state_hints_s {
    unsigned int _field1;
    char *_field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct task_vm_info {
    unsigned long long virtual_size;
    int region_count;
    int page_size;
    unsigned long long resident_size;
    unsigned long long resident_size_peak;
    unsigned long long device;
    unsigned long long device_peak;
    unsigned long long internal;
    unsigned long long internal_peak;
    unsigned long long external;
    unsigned long long external_peak;
    unsigned long long reusable;
    unsigned long long reusable_peak;
    unsigned long long purgeable_volatile_pmap;
    unsigned long long purgeable_volatile_resident;
    unsigned long long purgeable_volatile_virtual;
    unsigned long long compressed;
    unsigned long long compressed_peak;
    unsigned long long compressed_lifetime;
    unsigned long long phys_footprint;
    unsigned long long min_address;
    unsigned long long max_address;
    long long ledger_phys_footprint_peak;
    long long ledger_purgeable_nonvolatile;
    long long ledger_purgeable_novolatile_compressed;
    long long ledger_purgeable_volatile;
    long long ledger_purgeable_volatile_compressed;
    long long ledger_tag_network_nonvolatile;
    long long ledger_tag_network_nonvolatile_compressed;
    long long ledger_tag_network_volatile;
    long long ledger_tag_network_volatile_compressed;
    long long ledger_tag_media_footprint;
    long long ledger_tag_media_footprint_compressed;
    long long ledger_tag_media_nofootprint;
    long long ledger_tag_media_nofootprint_compressed;
    long long ledger_tag_graphics_footprint;
    long long ledger_tag_graphics_footprint_compressed;
    long long ledger_tag_graphics_nofootprint;
    long long ledger_tag_graphics_nofootprint_compressed;
    long long ledger_tag_neural_footprint;
    long long ledger_tag_neural_footprint_compressed;
    long long ledger_tag_neural_nofootprint;
    long long ledger_tag_neural_nofootprint_compressed;
    unsigned long long limit_bytes_remaining;
    int decompressions;
    long long ledger_swapins;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int timestamp:1;
} CDStruct_b5306035;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

// Ambiguous groups
typedef struct {
    unsigned int timestamp:1;
    unsigned int button:1;
    unsigned int usedLongTap:1;
} CDStruct_9b2e609f;

typedef struct {
    unsigned int timestamp:1;
    unsigned int category:1;
    unsigned int formProperty:1;
} CDStruct_18b2ecd0;

typedef struct {
    unsigned int timestamp:1;
    unsigned int action:1;
} CDStruct_399b966a;

typedef struct {
    unsigned int timestamp:1;
    unsigned int method:1;
} CDStruct_64f0786c;
