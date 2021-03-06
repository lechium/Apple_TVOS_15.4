//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GEOMapFeatureTransitAccessPoint : NSObject
{
    void *_feature;	// 8 = 0x8
    CDStruct_2c43369c _coordinate;	// 16 = 0x10
    shared_ptr_07a3cc42 _retainedTile;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000011604ed
- (void).cxx_destruct;	// IMP=0x00000000011604df
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
@property(readonly, nonatomic) double radiusMeters;
@property(readonly, nonatomic) _Bool isExit;
@property(readonly, nonatomic) _Bool isEntrance;
- (void)dealloc;	// IMP=0x0000000001160468
- (id)initWithFeature:(void *)arg1;	// IMP=0x0000000001160de6
@property(readonly, nonatomic) void *feature;

@end

