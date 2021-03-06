//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>
#import <TextRecognition/CRPolyline-Protocol.h>

@class CRImageSpacePolyline, NSArray, NSString;

@interface CRNormalizedPolyline : NSObject <CRCodable, CRPolyline>
{
    CRImageSpacePolyline *_denormalizedPolyline;	// 8 = 0x8
    struct CGPath *__pathRef;	// 16 = 0x10
    struct CGSize _normalizationSize;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000071589
- (void).cxx_destruct;	// IMP=0x0000000000072ad9
@property struct CGPath *_pathRef; // @synthesize _pathRef=__pathRef;
@property(retain) CRImageSpacePolyline *denormalizedPolyline; // @synthesize denormalizedPolyline=_denormalizedPolyline;
@property struct CGSize normalizationSize; // @synthesize normalizationSize=_normalizationSize;
- (id)initWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x00000000000728f9
- (id)crCodableDataRepresentation;	// IMP=0x0000000000072823
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007276b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000725fe
- (id)simplified;	// IMP=0x000000000007253f
- (void)appendPolyline:(id)arg1;	// IMP=0x000000000007246e
- (void)appendPoint:(struct CGPoint)arg1;	// IMP=0x00000000000723cd
- (void)enumeratePoints:(CDUnknownBlockType)arg1;	// IMP=0x00000000000722d7
@property(readonly) NSArray *pointValues;
@property(readonly) unsigned long long pointCount;
@property(readonly) const struct CGPath *path;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000071e74
- (id)polylineByAppendingPolyline:(id)arg1;	// IMP=0x0000000000071dae
- (id)polylineByAppendingPoint:(struct CGPoint)arg1;	// IMP=0x0000000000071d4a
- (id)initWithNormalizedPointValues:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0000000000071a84
- (id)initWithDenormalizedPolyline:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000000719d7
- (id)initWithPolyline:(id)arg1;	// IMP=0x00000000000718f5
- (id)init;	// IMP=0x00000000000718b9
- (id)initWithNormalizedPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2 size:(struct CGSize)arg3;	// IMP=0x0000000000071770
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007168a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000071591

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

