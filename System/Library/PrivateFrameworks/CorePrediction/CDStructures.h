//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Named Structures

struct CPMLAlgorithm {
    CDUnknownFunctionPointerType *_field1;
    char _field2[32];
    void *_field3;
    struct CPMLCDB *_field4;
    struct CPMLDelegate *_field5;
    struct CPMLDelegateEngine *_field6;
    struct CPMLTunableData *_field7;
    struct CPMLIterator *_field8;
    struct CPMLSerialization *_field9;
};

struct CPMLCDB {
    struct CPMLStatistics *_field1;
    struct sqlite3 *_field2;
    struct sqlite3 *_field3;
    struct CPMLIterator *_field4;
    struct CPMLRemapper *_field5;
    struct CPMLTunableData *_field6;
};

struct CPMLDelegate {
    void *_field1;
    void *_field2;
};

struct CPMLDelegateEngine {
    void *_field1;
    void *_field2;
};

struct CPMLIterator;

struct CPMLRemapper;

struct CPMLSerialization {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    int _field3;
    int _field4;
    void *_field5;
    struct sqlite3 *_field6;
};

struct CPMLStatistics;

struct CPMLTunableData {
    int _field1;
    void *_field2;
    void *_field3;
};

struct sqlite3;

struct vector<int, std::allocator<int>> {
    int *__begin_;
    int *__end_;
    struct __compressed_pair<int *, std::allocator<int>> {
        int *__value_;
    } __end_cap_;
};
