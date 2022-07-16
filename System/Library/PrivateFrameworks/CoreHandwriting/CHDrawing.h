//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHandwriting/NSCopying-Protocol.h>
#import <CoreHandwriting/NSSecureCoding-Protocol.h>

@interface CHDrawing : NSObject <NSCopying, NSSecureCoding>
{
    struct CHDrawingStrokes _drawing;	// 128 = 0x80
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000058f40
- (id).cxx_construct;	// IMP=0x000000000005c800
- (void).cxx_destruct;	// IMP=0x000000000005c7f0
@property(nonatomic) struct CHDrawingStrokes drawing; // @synthesize drawing=_drawing;
- (id)debugQuickLookObject;	// IMP=0x000000000005c170
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c0a0
- (double)averageCharacterHeightEstimation:(double)arg1 minChunkHeight:(double)arg2;	// IMP=0x000000000005ba00
- (struct CGRect)boundingBoxForDrawingSegmentFromCutPoint:(id)arg1 toCutPoint:(id)arg2;	// IMP=0x000000000005b610
- (void)appendSegment:(id)arg1 fromDrawing:(id)arg2;	// IMP=0x000000000005b3b0
- (void)setLineHeight:(double)arg1;	// IMP=0x000000000005b3a0
- (vector_7697e86b)strokeIndicesSortedByMinXCoordinate;	// IMP=0x000000000005b150
- (id)drawingSpatiallyResampled:(double)arg1 outputPointMap:(void *)arg2;	// IMP=0x000000000005afe0
- (id)drawingTransformedWithTranslation:(struct CGVector)arg1 scaleFactor:(double)arg2;	// IMP=0x000000000005ae80
- (id)drawingScaledByFactor:(double)arg1;	// IMP=0x000000000005ae60
- (id)sortedDrawingUsingMinXCoordinate;	// IMP=0x000000000005ad10
- (Matrix_273a43f8)orientationRepresentationForSampling:(unsigned long long)arg1 convolutionWidth:(unsigned long long)arg2;	// IMP=0x000000000005ace0
- (Matrix_273a43f8)bitmapRepresentationForSize:(struct CGSize)arg1;	// IMP=0x000000000005acc0
- (id)jsonStringRepresentation;	// IMP=0x000000000005a970
- (id)xyRepresentation;	// IMP=0x000000000005a800
- (unsigned long long)hash;	// IMP=0x000000000005a780
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005a700
- (_Bool)isEqualToDrawing:(id)arg1;	// IMP=0x000000000005a560
- (struct _NSRange)matchingStrokePrefixRangeForDrawing:(id)arg1;	// IMP=0x000000000005a410
- (_Bool)isPrefixForDrawing:(id)arg1;	// IMP=0x000000000005a260
- (void)clear;	// IMP=0x000000000005a250
- (void)endStroke;	// IMP=0x000000000005a220
- (void)addPoint:(struct CGPoint)arg1;	// IMP=0x000000000005a210
- (float)distanceBetweenFirstAndLastPoint;	// IMP=0x000000000005a130
- (float)cumulativePointToPointDistance;	// IMP=0x000000000005a000
- (struct CGRect)bounds;	// IMP=0x0000000000059fb0
- (struct CGRect)strokeBoundsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000059f90
- (struct CGRect)boundsForStrokeIndex:(unsigned long long)arg1;	// IMP=0x0000000000059ef0
- (struct CGRect)boundsForStrokeIndexes:(id)arg1;	// IMP=0x0000000000059d30
- (struct CGPoint)centroidForStrokeIndexes:(id)arg1;	// IMP=0x0000000000059970
- (id)drawingWithStrokesFromIndexSet:(id)arg1;	// IMP=0x0000000000059500
- (id)indexesOfStrokesSmallerThanSize:(struct CGSize)arg1;	// IMP=0x00000000000593b0
- (unsigned long long)strokeCount;	// IMP=0x0000000000059370
- (struct CGPoint)pointForStrokeIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;	// IMP=0x0000000000059340
- (unsigned long long)pointCountForStrokeIndex:(unsigned long long)arg1;	// IMP=0x0000000000059310
- (unsigned long long)pointCount;	// IMP=0x0000000000059240
- (id)description;	// IMP=0x0000000000058f50
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000058ca0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000058520
- (id)initWithContentsOfJSONDictionary:(id)arg1;	// IMP=0x0000000000057ef0
- (id)initWithContentsOfXYString:(id)arg1;	// IMP=0x0000000000057ac0
- (id)initWithContentsOfFile:(id)arg1;	// IMP=0x0000000000057a00

@end
