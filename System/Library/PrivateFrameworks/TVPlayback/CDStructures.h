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

struct FairPlayHWInfo_ {
    unsigned int _field1;
    unsigned char _field2[20];
};

struct TVPMusicNowPlayingCollectionViewCellPlaceholder {
    long long type;
    long long userInterfaceStyle;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

#pragma mark Typedef'd Structures

typedef struct {
    double start;
    double end;
} CDStruct_88b945db;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    CDStruct_1b6d18a9 _field1;
    CDStruct_1b6d18a9 _field2;
} CDStruct_5c5366e1;

