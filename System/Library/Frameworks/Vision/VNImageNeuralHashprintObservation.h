//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VN6Ac6Cyl5O5oK19HboyMBR;

@interface VNImageNeuralHashprintObservation
{
    VN6Ac6Cyl5O5oK19HboyMBR *_imageNeuralHashprint;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001016e7
- (void).cxx_destruct;	// IMP=0x00000000001016d4
@property(readonly) VN6Ac6Cyl5O5oK19HboyMBR *imageNeuralHashprint; // @synthesize imageNeuralHashprint=_imageNeuralHashprint;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010157a
- (unsigned long long)hash;	// IMP=0x00000000001014e1
- (id)vn_cloneObject;	// IMP=0x0000000000101457
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001013bb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000101208
- (id)initWithOriginatingRequestSpecifier:(id)arg1 imageNeuralHashprint:(id)arg2;	// IMP=0x000000000010112f

@end

