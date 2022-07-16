//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID, VNPixelBufferObservation;

@interface VNDetectedObjectObservation
{
    struct CGRect _boundingBox;	// 80 = 0x50
    VNPixelBufferObservation *_globalSegmentationMask;	// 112 = 0x70
    NSUUID *_identifier;	// 120 = 0x78
}

+ (id)observationWithRequestRevision:(unsigned long long)arg1 boundingBox:(struct CGRect)arg2;	// IMP=0x0000000000138697
+ (id)observationWithBoundingBox:(struct CGRect)arg1;	// IMP=0x0000000000138683
+ (_Bool)boundingBoxIsCalculatedProperty;	// IMP=0x000000000013867b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000138673
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000138666
- (void).cxx_destruct;	// IMP=0x0000000000138635
@property(copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) VNPixelBufferObservation *globalSegmentationMask; // @synthesize globalSegmentationMask=_globalSegmentationMask;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4;	// IMP=0x000000000013854c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000138439
- (unsigned long long)hash;	// IMP=0x000000000013836e
- (id)description;	// IMP=0x000000000013826a
- (id)vn_cloneObject;	// IMP=0x00000000001381df
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001380cc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000137f49
- (id)initWithOriginatingRequestSpecifier:(id)arg1 boundingBox:(struct CGRect)arg2;	// IMP=0x0000000000137efa
- (id)initWithOriginatingRequestSpecifier:(id)arg1;	// IMP=0x0000000000137e8e

@end
