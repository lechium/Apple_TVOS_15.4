//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

@interface TVCarouselLayout
{
    _Bool _parallaxEnabled;	// 8 = 0x8
    _Bool _showsPageControl;	// 9 = 0x9
    double _interitemSpacing;	// 16 = 0x10
    long long _layoutType;	// 24 = 0x18
    unsigned long long _scrollMode;	// 32 = 0x20
    double _focusedEdgeExpansion;	// 40 = 0x28
    double _revealDistance;	// 48 = 0x30
    double _shearAngle;	// 56 = 0x38
    NSNumber *_pageControlMarginNumber;	// 64 = 0x40
    struct CGSize _cellSize;	// 72 = 0x48
    struct UIEdgeInsets _cellPadding;	// 88 = 0x58
}

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;	// IMP=0x000000000018362d
+ (long long)layoutTypeForElement:(id)arg1;	// IMP=0x000000000018359f
+ (unsigned long long)scrollModeForString:(id)arg1;	// IMP=0x0000000000183536
+ (long long)layoutTypeForString:(id)arg1;	// IMP=0x00000000001834ae
@property(nonatomic) NSNumber *pageControlMarginNumber; // @synthesize pageControlMarginNumber=_pageControlMarginNumber;
@property(nonatomic) _Bool showsPageControl; // @synthesize showsPageControl=_showsPageControl;
@property(nonatomic) double shearAngle; // @synthesize shearAngle=_shearAngle;
@property(nonatomic, getter=isParallaxEnabled) _Bool parallaxEnabled; // @synthesize parallaxEnabled=_parallaxEnabled;
@property(nonatomic) double revealDistance; // @synthesize revealDistance=_revealDistance;
@property(nonatomic) double focusedEdgeExpansion; // @synthesize focusedEdgeExpansion=_focusedEdgeExpansion;
@property(nonatomic) unsigned long long scrollMode; // @synthesize scrollMode=_scrollMode;
@property(nonatomic) struct UIEdgeInsets cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000183966

@end

