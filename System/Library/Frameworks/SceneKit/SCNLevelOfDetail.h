//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class SCNGeometry;

@interface SCNLevelOfDetail : NSObject <NSCopying, NSSecureCoding>
{
    struct __C3DLOD *_lod;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    SCNGeometry *_geometry;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002f2d96
+ (id)levelOfDetailWithGeometry:(id)arg1 worldSpaceDistance:(double)arg2;	// IMP=0x00000000002f29f9
+ (id)levelOfDetailWithGeometry:(id)arg1 screenSpaceRadius:(double)arg2;	// IMP=0x00000000002f29aa
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002f2ca6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002f2c38
- (void)_didDecodeSCNLevelOfDetail:(id)arg1;	// IMP=0x00000000002f2bd0
- (void)_customEncodingOfSCNLevelOfDetail:(id)arg1;	// IMP=0x00000000002f2b78
- (id)description;	// IMP=0x00000000002f2b0f
@property(readonly) double worldSpaceDistance;
@property(readonly) double screenSpaceRadius;
- (id)copy;	// IMP=0x00000000002f2ac1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002f2a89
- (id)thresholdValue;	// IMP=0x00000000002f2a63
- (long long)thresholdMode;	// IMP=0x00000000002f2a59
@property(readonly) SCNGeometry *geometry;
- (const void *)__CFObject;	// IMP=0x00000000002f2a45
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 thresholdValue:(id)arg3;	// IMP=0x00000000002f292e
- (id)initWithGeometry:(id)arg1 thresholdMode:(long long)arg2 lod:(struct __C3DLOD *)arg3;	// IMP=0x00000000002f28cb
- (void)_setupWithGeometry:(id)arg1 thresholdMode:(long long)arg2 value:(double)arg3;	// IMP=0x00000000002f2861
- (void)dealloc;	// IMP=0x00000000002f2810

@end

