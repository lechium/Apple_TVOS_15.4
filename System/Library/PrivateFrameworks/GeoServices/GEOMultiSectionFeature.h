//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOFeature;

@interface GEOMultiSectionFeature : NSObject
{
    void *_multiSectionFeature;	// 8 = 0x8
    GEOFeature *_feature;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000359383
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) unsigned int speedLimitShieldId;
@property(readonly, nonatomic) unsigned short roadWidth;
@property(readonly, nonatomic) _Bool reverseDirectionDisplaySpeedLimitIsMPH;
@property(readonly, nonatomic) unsigned char reverseDirectionDisplaySpeedLimit;
@property(readonly, nonatomic) _Bool reverseDirectionDisplaySpeedIsLimited;
@property(readonly, nonatomic) _Bool displaySpeedLimitIsMPH;
@property(readonly, nonatomic) unsigned char displaySpeedLimit;
@property(readonly, nonatomic) _Bool displaySpeedIsLimited;
@property(readonly, nonatomic) unsigned char speedLimit;
@property(readonly, nonatomic) struct GeoCodecsAddressRange *addressRange;
@property(readonly, nonatomic) struct GeoCodecsLaneGeometry *laneGeometry;
- (union GeoCodecsVectorTileRect *)bounds;	// IMP=0x0000000000359221
@property(readonly, nonatomic) unsigned int lineCrossingCount;
@property(readonly, nonatomic) unsigned int lineCrossingIndex;
@property(readonly, nonatomic) unsigned long long roadPointCount;
@property(readonly, nonatomic) unsigned long long roadPointIndex;
@property(readonly, nonatomic) int travelDirection;
@property(readonly, nonatomic) int formOfWay;
@property(readonly, nonatomic) int roadClass;
@property(readonly, nonatomic) unsigned long long sectionCount;
@property(readonly, nonatomic) unsigned long long sectionOffset;
@property(readonly, nonatomic) GEOFeature *feature;
- (id)init:(void *)arg1 withVectorTile:(id)arg2;	// IMP=0x0000000000359050
@property(readonly, nonatomic) void *get;

@end

