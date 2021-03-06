//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>
#import <UIKitCore/NSCopying-Protocol.h>

@class UIKBGeometry;

@interface UIKBShape : NSObject <NSCoding, NSCopying>
{
    UIKBGeometry *m_geometry;	// 8 = 0x8
    struct CGRect m_frame;	// 16 = 0x10
    struct CGRect m_paddedFrame;	// 48 = 0x30
    unsigned long long m_concaveCorner;	// 80 = 0x50
    struct CGSize m_concaveCornerOffset;	// 88 = 0x58
    unsigned long long m_uid;	// 104 = 0x68
    _Bool m_scaled;	// 112 = 0x70
    UIKBShape *m_originalShape;	// 120 = 0x78
}

+ (id)shapeByResizingShape:(id)arg1 byAmount:(struct CGSize)arg2;	// IMP=0x00000000008287f9
+ (id)shapeByCombining:(id)arg1 withShape:(id)arg2;	// IMP=0x0000000000828685
+ (id)shape;	// IMP=0x0000000000826d9e
@property(retain, nonatomic) UIKBShape *originalShape; // @synthesize originalShape=m_originalShape;
@property(nonatomic) _Bool scaled; // @synthesize scaled=m_scaled;
@property(readonly, nonatomic) unsigned long long uid; // @synthesize uid=m_uid;
@property(nonatomic) struct CGSize concaveCornerOffset; // @synthesize concaveCornerOffset=m_concaveCornerOffset;
@property(nonatomic) unsigned long long concaveCorner; // @synthesize concaveCorner=m_concaveCorner;
@property(nonatomic) struct CGRect paddedFrame; // @synthesize paddedFrame=m_paddedFrame;
@property(nonatomic) struct CGRect frame; // @synthesize frame=m_frame;
@property(retain, nonatomic) UIKBGeometry *geometry; // @synthesize geometry=m_geometry;
- (void)scaleIfNeeded:(double)arg1 onlyYAxis:(_Bool)arg2;	// IMP=0x00000000008284de
- (struct CGRect)_scaleRect:(struct CGRect)arg1 inYAxis:(_Bool)arg2;	// IMP=0x0000000000828325
- (void)scaleWidth:(double)arg1;	// IMP=0x00000000008282ff
- (void)addRectFrom:(id)arg1 mergeActionFactors:(id)arg2;	// IMP=0x0000000000827d80
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5 absoluteOriginFactors:(_Bool)arg6;	// IMP=0x0000000000827bdc
- (void)addRectFrom:(id)arg1 widthFraction:(double)arg2 heightFraction:(double)arg3 adjustOriginXFactor:(double)arg4 adjustOriginYFactor:(double)arg5;	// IMP=0x0000000000827bc5
- (void)addRectFrom:(id)arg1;	// IMP=0x0000000000827aea
- (id)description;	// IMP=0x000000000082795c
- (_Bool)shouldUseGeometry;	// IMP=0x00000000008278d8
- (_Bool)isEmpty;	// IMP=0x0000000000827816
- (void)setConcaveCornerSize:(struct CGSize)arg1;	// IMP=0x0000000000827806
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000082766b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082746e
- (unsigned long long)hash;	// IMP=0x000000000082741f
- (void)makeLikeOther:(id)arg1;	// IMP=0x0000000000827253
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000827155
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000826ffe
- (void)dealloc;	// IMP=0x0000000000826fb4
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3 concaveCorner:(unsigned long long)arg4 concaveCornerOffset:(struct CGSize)arg5;	// IMP=0x0000000000826eec
- (id)initWithGeometry:(id)arg1 frame:(struct CGRect)arg2 paddedFrame:(struct CGRect)arg3;	// IMP=0x0000000000826e38
- (id)init;	// IMP=0x0000000000826db8

@end

