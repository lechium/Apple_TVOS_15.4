//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface VNFaceLandmarkRegion3D
{
    MISSING_TYPE **_points;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000185a1c
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000185a0f
@property const MISSING_TYPE **points; // @synthesize points=_points;
- (void)dealloc;	// IMP=0x00000000001859ac
- (MISSING_TYPE *)pointAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000185972
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018586a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000185495
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect)arg2 points:(MISSING_TYPE **)arg3 pointCount:(unsigned long long)arg4;	// IMP=0x0000000000185421
- (id)initWithOriginatingRequestSpecifier:(id)arg1 faceBoundingBox:(struct CGRect)arg2;	// IMP=0x00000000001853a7

@end

