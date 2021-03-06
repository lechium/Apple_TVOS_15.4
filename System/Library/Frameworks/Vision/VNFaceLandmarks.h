//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Vision/NSCopying-Protocol.h>
#import <Vision/NSSecureCoding-Protocol.h>
#import <Vision/VNOriginatingRequestSpecifierProviding-Protocol.h>
#import <Vision/VNRequestRevisionProviding-Protocol.h>

@class NSData, VNRequestSpecifier;

@interface VNFaceLandmarks : NSObject <VNOriginatingRequestSpecifierProviding, NSCopying, NSSecureCoding, VNRequestRevisionProviding>
{
    float _confidence;	// 8 = 0x8
    unsigned long long _pointCount;	// 16 = 0x10
    NSData *_pointsData;	// 24 = 0x18
    struct _Geometry2D_rect2D_ _alignedBBox;	// 32 = 0x20
    struct CGRect _userFacingBBox;	// 48 = 0x30
    VNRequestSpecifier *_originatingRequestSpecifier;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000186cb1
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;	// IMP=0x0000000000186ca9
- (void).cxx_destruct;	// IMP=0x0000000000186c81
@property(readonly) VNRequestSpecifier *originatingRequestSpecifier; // @synthesize originatingRequestSpecifier=_originatingRequestSpecifier;
@property(readonly) struct CGRect userFacingBBox; // @synthesize userFacingBBox=_userFacingBBox;
@property(readonly) struct _Geometry2D_rect2D_ alignedBBox; // @synthesize alignedBBox=_alignedBBox;
@property(readonly, copy) NSData *pointsData; // @synthesize pointsData=_pointsData;
@property(readonly) unsigned long long pointCount; // @synthesize pointCount=_pointCount;
@property(readonly) float confidence; // @synthesize confidence=_confidence;
- (id)description;	// IMP=0x0000000000186b22
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001867ca
- (unsigned long long)hash;	// IMP=0x0000000000186644
- (id)initWithOriginatingRequestSpecifier:(id)arg1 pointsData:(id)arg2 pointCount:(unsigned long long)arg3 userFacingBBox:(struct CGRect)arg4 alignedBBox:(struct _Geometry2D_rect2D_)arg5 landmarkScore:(float)arg6;	// IMP=0x00000000001864c5
- (_Bool)isUserFacingBBoxEquivalentToAlignedBBox;	// IMP=0x0000000000186414
- (void *)_createPointArray:(const int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001863ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018624f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000185a87
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000185a7c
@property(readonly, nonatomic) unsigned long long requestRevision;

@end

