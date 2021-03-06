//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIRectangularBoundingPath
{
    struct CGRect _boundingRect;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000076dc33
@property(readonly, nonatomic) struct CGRect boundingRect; // @synthesize boundingRect=_boundingRect;
- (id)_imageRepresentation;	// IMP=0x000000000076e99b
- (id)description;	// IMP=0x000000000076e8d4
- (struct CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(double)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x000000000076e838
- (struct CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(struct CGRect)arg2 withSize:(struct CGSize)arg3 cornerRadii:(struct UIRectCornerRadii)arg4 minimumPadding:(double)arg5;	// IMP=0x000000000076e78c
- (struct CGRect)_largestInscribedRectInBoundingPathAndRect:(struct CGRect)arg1 withCenter:(struct CGPoint)arg2 aspectRatio:(double)arg3;	// IMP=0x000000000076e69f
- (struct CGRect)_inscribedRectInBoundingPathAndRect:(struct CGRect)arg1 byInsettingRect:(struct CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4;	// IMP=0x000000000076e5b2
- (_Bool)isNonRectangular;	// IMP=0x000000000076e5aa
- (void)setCoordinateSpace:(id)arg1;	// IMP=0x000000000076e524
- (_Bool)validateForCoordinateSpace;	// IMP=0x000000000076e4b1
- (_Bool)_validateBoundingRect:(struct CGRect)arg1 forCoordinateSpace:(id)arg2;	// IMP=0x000000000076e235
- (id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(struct UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4;	// IMP=0x000000000076e0ee
- (id)boundingPathForCoordinateSpace:(id)arg1;	// IMP=0x000000000076de37
- (id)initWithCoordinateSpace:(id)arg1 boundingRect:(struct CGRect)arg2;	// IMP=0x000000000076dd67
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000076dcc6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000076dc3b

@end

