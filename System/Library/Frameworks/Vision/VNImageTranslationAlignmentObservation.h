//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface VNImageTranslationAlignmentObservation
{
    struct CGAffineTransform _alignmentTransform;	// 96 = 0x60
}

+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x000000000013e4cf
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013e4c7
@property(nonatomic) struct CGAffineTransform alignmentTransform; // @synthesize alignmentTransform=_alignmentTransform;
- (id)description;	// IMP=0x000000000013e32a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013e1f0
- (unsigned long long)hash;	// IMP=0x000000000013e0cc
- (id)vn_cloneObject;	// IMP=0x000000000013e064
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013dfc9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013dee7
- (id)init;	// IMP=0x000000000013de72

@end
