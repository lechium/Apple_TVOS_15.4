//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AFTimeRange {
    double _field1;
    double _field2;
};

struct AudioQueueBuffer {
    unsigned int _field1;
    void *_field2;
    unsigned int _field3;
    void *_field4;
    unsigned int _field5;
    struct AudioStreamPacketDescription *_field6;
    unsigned int _field7;
};

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioStreamPacketDescription;

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

#if 0
// Names with conflicting types:
typedef struct {
    unsigned int isDirty:1;
    unsigned int hasGenerationsByDataType:1;
} _mutationFlags_ba3f8b0e;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    _Bool _field1;
    long long _field2;
} CDStruct_8f3a66c8;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    CDStruct_8f3a66c8 _field1;
    CDStruct_8f3a66c8 _field2;
    CDStruct_8f3a66c8 _field3;
    unsigned long long _field4;
} CDStruct_09307a1f;

