//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLRegionsAgglomerativeClusteringDataCluster : NSObject
{
    NSArray *_vectors;	// 8 = 0x8
    double _latitude;	// 16 = 0x10
    double _longitude;	// 24 = 0x18
    double _radius;	// 32 = 0x20
    double _score;	// 40 = 0x28
}

+ (id)mergedClusterFrom:(id)arg1;	// IMP=0x00000000000d21fa
+ (id)dataClusterWithDataVector:(id)arg1;	// IMP=0x00000000000d21b1
- (void).cxx_destruct;	// IMP=0x00000000000d21a1
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double radius; // @synthesize radius=_radius;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly) NSArray *vectors; // @synthesize vectors=_vectors;
- (id)description;	// IMP=0x00000000000d20de
- (id)initWithDataVector:(id)arg1;	// IMP=0x00000000000d1e21

@end
