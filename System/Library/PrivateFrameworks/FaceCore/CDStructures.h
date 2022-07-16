//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

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

struct FaceCoreAPI {
    CDUnknownFunctionPointerType *_field1;
    struct FaceCoreAPIInternal *_field2;
    struct FaceCoreContext *_field3;
    void *_field4;
};

struct FaceCoreAPIInternal;

struct FaceCoreContext;

struct coord {
    int _field1;
    int _field2;
};

struct face {
    int _field1;
    struct coord _field2;
    struct coord _field3;
    struct coord _field4;
    struct coord _field5;
    float _field6;
    int _field7;
    int _field8;
    struct vector<double, std::allocator<double>> _field9;
    int _field10;
    struct vector<vision::lib::coord, std::allocator<vision::lib::coord>> _field11;
    int _field12;
    _Bool _field13;
    _Bool _field14;
    float _field15;
    float _field16;
    _Bool _field17;
    float _field18;
    _Bool _field19;
    float _field20;
    struct naturalSmileData *_field21;
};

struct image {
    char *_field1;
    int _field2;
    int _field3;
};

struct naturalSmileData;

struct vector<double, std::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::allocator<double>> {
        double *_field1;
    } _field3;
};

struct vector<vision::lib::coord, std::allocator<vision::lib::coord>> {
    struct coord *_field1;
    struct coord *_field2;
    struct __compressed_pair<vision::lib::coord *, std::allocator<vision::lib::coord>> {
        struct coord *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct CGPoint center;
    struct CGRect bounds;
} CDStruct_ac082cae;

