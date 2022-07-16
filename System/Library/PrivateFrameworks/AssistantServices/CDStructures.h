//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AvailabilityState {
    unsigned int availabilityIsKnown:1;
    unsigned int isAvailable:1;
};

struct MyriadMetricsDataV1 {
    unsigned char _field1;
    unsigned long long _field2;
    unsigned char _field3;
    unsigned long long _field4;
    unsigned char _field5;
    double _field6;
    double _field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    unsigned char _field12;
    unsigned char _field13;
    double _field14;
    unsigned char _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18[50];
    unsigned char _field19[50];
    unsigned char _field20[50];
    unsigned char _field21;
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct myrAccessoryMessage {
    unsigned char version;
    unsigned long long requestType;
    unsigned long long session;
    double voiceTriggerEndTime;
    unsigned short audioHash;
    unsigned char goodnessScore;
    unsigned char userConfidenceScore;
    unsigned char tieBreaker;
    unsigned char deviceClass;
    unsigned char deviceGroup;
    unsigned char productType;
    unsigned char electionDecision;
    unsigned char emergencyHandled;
    unsigned char ack;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
} CDStruct_89ddc8e1;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned short _field1[64];
    struct __CFString *_field2;
    unsigned short *_field3;
    char *_field4;
    struct {
        long long _field1;
        long long _field2;
    } _field5;
    long long _field6;
    long long _field7;
} CDStruct_f9502b4c;

