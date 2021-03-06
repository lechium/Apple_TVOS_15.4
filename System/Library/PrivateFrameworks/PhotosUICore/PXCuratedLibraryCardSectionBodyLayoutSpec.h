//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGGradient;

@interface PXCuratedLibraryCardSectionBodyLayoutSpec
{
    double _aspectRatio;	// 8 = 0x8
    double _horizontalMargin;	// 16 = 0x10
    PXGGradient *_skimmingHintGradient;	// 24 = 0x18
    double _distanceToNextLayout;	// 32 = 0x20
    CDStruct_2bd92d94 _cornerRadius;	// 40 = 0x28
    struct UIEdgeInsets _padding;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002f4203
@property(nonatomic) double distanceToNextLayout; // @synthesize distanceToNextLayout=_distanceToNextLayout;
@property(readonly, nonatomic) PXGGradient *skimmingHintGradient; // @synthesize skimmingHintGradient=_skimmingHintGradient;
@property(nonatomic) double horizontalMargin; // @synthesize horizontalMargin=_horizontalMargin;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) CDStruct_2bd92d94 cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000002f3f62

@end

