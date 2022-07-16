//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBuildingFootprintFeature, GEOVectorTile;

@interface GEOMapFeatureBuildingSection : NSObject
{
    CDStruct_c3b9c2ee *_coordinates;	// 8 = 0x8
    unsigned long long _coordinateCount;	// 16 = 0x10
    double _baseHeight;	// 24 = 0x18
    double _height;	// 32 = 0x20
    GEOBuildingFootprintFeature *_feature;	// 40 = 0x28
    unsigned long long _sectionIndex;	// 48 = 0x30
    GEOVectorTile *_tile;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000a0c766
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double baseHeight; // @synthesize baseHeight=_baseHeight;
@property(readonly, nonatomic) unsigned long long coordinateCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
- (void)dealloc;	// IMP=0x0000000000a0c3e8
- (id)initWithFeature:(id)arg1 sectionIndex:(unsigned long long)arg2;	// IMP=0x0000000000a0c0ff

@end

