//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextRecognition/CRCodable-Protocol.h>
#import <TextRecognition/CRPolyline-Protocol.h>

@class NSArray, NSString;

@interface CRImageSpacePolyline : NSObject <CRCodable, CRPolyline>
{
    void *__points;	// 8 = 0x8
    struct CGPath *__pathRef;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006fd00
@property struct CGPath *_pathRef; // @synthesize _pathRef=__pathRef;
@property void *_points; // @synthesize _points=__points;
- (id)initWithCRCodableDataRepresentation:(id)arg1;	// IMP=0x00000000000713f3
- (id)crCodableDataRepresentation;	// IMP=0x00000000000712d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000071298
- (id)simplified;	// IMP=0x000000000007109b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000070e6c
- (void)appendPolyline:(id)arg1;	// IMP=0x0000000000070b92
- (void)appendPoint:(struct CGPoint)arg1;	// IMP=0x0000000000070b2f
- (void)enumeratePoints:(CDUnknownBlockType)arg1;	// IMP=0x0000000000070b17
- (void)enumeratePointsWithTransformer:(CDUnknownBlockType)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000070a06
@property(readonly) NSArray *pointValues;
- (struct CGPath *)createPathWithTransformer:(CDUnknownBlockType)arg1;	// IMP=0x00000000000707a6
@property(readonly) unsigned long long pointCount;
@property(readonly) const struct CGPath *path;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000000704a2
- (id)polylineByAppendingPolyline:(id)arg1;	// IMP=0x0000000000070426
- (id)polylineByAppendingPoint:(struct CGPoint)arg1;	// IMP=0x00000000000703c2
- (id)initWithPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000070240
- (id)initWithPointValues:(id)arg1;	// IMP=0x0000000000070030
- (id)init;	// IMP=0x000000000007001b
- (id)initWithPolyline:(id)arg1;	// IMP=0x000000000006ffa5
- (id)initWithPoints:(void *)arg1;	// IMP=0x000000000006fee7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006fe01
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006fd08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

