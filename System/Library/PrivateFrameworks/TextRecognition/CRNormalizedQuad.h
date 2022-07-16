//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>
#import <TextRecognition/CRQuad-Protocol.h>

@class CRImageSpaceQuad, NSString;

@interface CRNormalizedQuad : NSObject <CRCodable, CRQuad>
{
    CRImageSpaceQuad *_denormalizedQuad;	// 8 = 0x8
    struct CGSize _normalizationSize;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000062639
- (void).cxx_destruct;	// IMP=0x0000000000062a4a
@property(readonly) struct CGSize normalizationSize; // @synthesize normalizationSize=_normalizationSize;
@property(readonly, nonatomic) CRImageSpaceQuad *denormalizedQuad; // @synthesize denormalizedQuad=_denormalizedQuad;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000062971
- (id)initWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x0000000000062865
- (id)crCodableDataRepresentation;	// IMP=0x00000000000627b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000062703
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000062641
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006251a
@property(readonly, copy) NSString *description;
- (id)unionWithNormalizedQuad:(id)arg1 baselineAngle:(float)arg2;	// IMP=0x00000000000623b0
- (id)rotatedAroundNormalizedPoint:(struct CGPoint)arg1 angle:(float)arg2;	// IMP=0x0000000000062351
- (id)rotatedAroundDenormalizedPoint:(struct CGPoint)arg1 angle:(float)arg2;	// IMP=0x00000000000622a1
- (double)shortestDistanceFromNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x000000000006224c
- (double)shortestDistanceFromDenormalizedPoint:(struct CGPoint)arg1;	// IMP=0x00000000000621e8
- (_Bool)overlapsNormalizedQuad:(id)arg1;	// IMP=0x0000000000062192
- (_Bool)overlapsDenormalizedQuad:(id)arg1;	// IMP=0x000000000006211b
- (_Bool)containsNormalizedPoint:(struct CGPoint)arg1;	// IMP=0x00000000000620c6
- (_Bool)containsDenormalizedPoint:(struct CGPoint)arg1;	// IMP=0x0000000000062066
@property(readonly, nonatomic) struct CGRect boundingBox;
@property(readonly, nonatomic) struct CGPoint midPoint;
@property(readonly, nonatomic) struct CGPoint bottomLeft;
@property(readonly, nonatomic) struct CGPoint bottomRight;
@property(readonly, nonatomic) struct CGPoint topRight;
@property(readonly, nonatomic) struct CGPoint topLeft;
- (id)initWithDenormalizedQuad:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000061c89
- (id)initWithNormalizedBoundingBox:(struct CGRect)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000061bda
- (id)initWithNormalizedTopLeft:(struct CGPoint)arg1 topRight:(struct CGPoint)arg2 bottomRight:(struct CGPoint)arg3 bottomLeft:(struct CGPoint)arg4 size:(struct CGSize)arg5;	// IMP=0x0000000000061a98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
