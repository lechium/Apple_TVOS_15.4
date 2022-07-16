//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/NSCopying-Protocol.h>

@interface PVPersonDeduperProfile : NSObject <NSCopying>
{
    _Bool _shouldRelaxThreshold;	// 8 = 0x8
    double _strictMaximumDistance;	// 16 = 0x10
    double _normalMaximumDistance;	// 24 = 0x18
    double _fuzzyMaximumDistance;	// 32 = 0x20
    unsigned long long _faceProcessingVersion;	// 40 = 0x28
}

@property(nonatomic) unsigned long long faceProcessingVersion; // @synthesize faceProcessingVersion=_faceProcessingVersion;
@property(nonatomic) _Bool shouldRelaxThreshold; // @synthesize shouldRelaxThreshold=_shouldRelaxThreshold;
@property(nonatomic) double fuzzyMaximumDistance; // @synthesize fuzzyMaximumDistance=_fuzzyMaximumDistance;
@property(nonatomic) double normalMaximumDistance; // @synthesize normalMaximumDistance=_normalMaximumDistance;
@property(nonatomic) double strictMaximumDistance; // @synthesize strictMaximumDistance=_strictMaximumDistance;
@property(readonly, nonatomic) _Bool shouldAdjustThresholdOnAgeType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000634f
- (id)init;	// IMP=0x00000000000062f6

@end
