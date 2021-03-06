//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __CFString;

struct __DDQueryOffset {
    unsigned int :32;
    unsigned int :32;
};

struct __DDResult {
    struct __CFRuntimeBase {
        unsigned long long _field1;
        _Atomic unsigned long long _field2;
    } _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    CDStruct_912cb5d2 _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    struct __CFDictionary *_field9;
    long long _field10;
    unsigned char _field11;
    float _field12;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic_flag {
    _Atomic _Bool _Value;
};

struct header_s {
    unsigned int qidCount;
    unsigned int topicCount;
    unsigned int nonzeroCount;
    unsigned int payloadLen;
};

struct shared_ptr<std::vector<float>> {
    void *_field1;
    struct __shared_weak_count *_field2;
};

struct type {
    unsigned char __lx[32];
};

struct unique_ptr<std::vector<PPScoreInterpreterValue>, std::default_delete<std::vector<PPScoreInterpreterValue>>> {
    struct __compressed_pair<std::vector<PPScoreInterpreterValue>*, std::default_delete<std::vector<PPScoreInterpreterValue>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> {
    struct __compressed_pair<std::vector<PPSubscoreIdentifier>*, std::default_delete<std::vector<PPSubscoreIdentifier>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<std::vector<float>, std::default_delete<std::vector<float>>> {
    struct __compressed_pair<std::vector<float>*, std::default_delete<std::vector<float>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<std::vector<std::shared_ptr<std::vector<float>>>, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> {
    struct __compressed_pair<std::vector<std::shared_ptr<std::vector<float>>>*, std::default_delete<std::vector<std::shared_ptr<std::vector<float>>>>> {
        void *__value_;
    } __ptr_;
};

struct unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> {
    struct __compressed_pair<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>*, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> {
        void *__value_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

// Ambiguous groups
typedef struct {
    unsigned int resultSizeLog10:1;
    unsigned int error:1;
    unsigned int exclusionSpec:1;
    unsigned int limitHit:1;
    unsigned int timeLimited:1;
    unsigned int timeSpec:1;
} CDStruct_68ee747f;

typedef struct {
    unsigned int rank:1;
    unsigned int algorithm:1;
    unsigned int donationSource:1;
    unsigned int newItem:1;
    unsigned int userCreated:1;
} CDStruct_9710aa02;

typedef struct {
    unsigned int algorithm:1;
    unsigned int donationSource:1;
} CDStruct_e3b84e97;

typedef struct {
    unsigned int algorithm:1;
    unsigned int source:1;
} CDStruct_95ef61a7;

typedef struct {
    unsigned int domain:1;
} CDStruct_497d21fc;

typedef struct {
    unsigned int donationSource:1;
} CDStruct_a8edabe5;

typedef struct {
    unsigned int feedbackType:1;
} CDStruct_00b579d7;

typedef struct {
    unsigned int schemaVersion:1;
} CDStruct_278ffb8f;

typedef struct {
    unsigned int value:1;
} CDStruct_01ef6375;

typedef struct shared_ptr<std::vector<float>> {
    void *_field1;
    struct __shared_weak_count *_field2;
} shared_ptr_60ebf058;

