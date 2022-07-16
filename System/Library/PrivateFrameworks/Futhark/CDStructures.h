//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct FKSession {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    unsigned int _field10;
    char _field11[128];
    struct vImage_Buffer _field12;
    struct vImage_Buffer _field13;
    CDStruct_183601bc *_field14;
    unsigned int _field15;
    unsigned int _field16;
    unsigned int _field17;
    unsigned int _field18;
    CDStruct_183601bc *_field19;
    unsigned short *_field20;
    int _field21;
    int _field22;
    struct concomp *_field23;
    int _field24;
    int _field25;
    int _field26;
    int _field27;
    int _field28;
    int _field29;
    struct sequence *_field30;
    int _field31;
    int _field32;
    int _field33;
    int _field34;
    unsigned char _field35;
    struct recognizer *_field36;
};

struct concomp;

struct recognizer {
    void *_field1;
    int _field2;
    struct {
        int _field1;
        void *_field2;
        CDStruct_cf098810 _field3;
        CDStruct_cf098810 _field4;
        CDStruct_cf098810 _field5;
    } _field3[5];
    void *_field4;
    int _field5;
};

struct sequence;

struct vImage_Buffer {
    void *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    void *_field1;
    void *_field2;
    unsigned long long _field3[4];
    unsigned long long _field4[4];
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    int _field15;
} CDStruct_cf098810;

typedef struct {
    int minScale;
    int maxScale;
} CDStruct_74dcf1ab;

typedef struct CDStruct_183601bc;

typedef struct {
    struct CGSize _field1;
    struct CGPoint _field2;
    int _field3;
} CDStruct_67c9bb48;

#pragma mark Typedef'd Unions

typedef union {
    int seqInd;
    int ccInd;
} CDUnion_a5814135;

