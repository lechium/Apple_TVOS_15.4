//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNImageHomographicAlignmentObservation
{
    CDStruct_8e0628e6 _warpTransform;	// 96 = 0x60
}

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x000000000013ea33
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013ea2b
@property(nonatomic) CDStruct_8e0628e6 warpTransform; // @synthesize warpTransform=_warpTransform;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e8ae
- (unsigned long long)hash;	// IMP=0x000000000013e736
- (id)vn_cloneObject;	// IMP=0x000000000013e6ce
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013e633
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013e551
- (id)init;	// IMP=0x000000000013e4dc

@end

