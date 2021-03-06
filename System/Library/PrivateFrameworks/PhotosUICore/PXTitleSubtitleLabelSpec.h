//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXLabelSpec;

@interface PXTitleSubtitleLabelSpec
{
    PXLabelSpec *_titleLabelSpec;	// 8 = 0x8
    PXLabelSpec *_subtitleLabelSpec;	// 16 = 0x10
    double _interLabelSpacing;	// 24 = 0x18
    double _distanceBetweenTitleBaselineAndSubtitleBaseline;	// 32 = 0x20
    struct UIEdgeInsets _padding;	// 40 = 0x28
}

+ (id)px_headerTitleSubtitleLabelSpecForZoomLevel:(long long)arg1 featureSpec:(id)arg2;	// IMP=0x00000000005c6ebf
+ (id)_memoriesTitleSubtitleSpecForContext:(CDStruct_46c45068)arg1;	// IMP=0x000000000069f1ab
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 viewMode:(id)arg2 boundedByRect:(struct CGRect)arg3;	// IMP=0x000000000069f127
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 gadgetSpec:(id)arg2 boundedByRect:(struct CGRect)arg3;	// IMP=0x000000000069f0a3
+ (id)memoriesTitleSubtitleSpecForTileKind:(long long)arg1 featureSpec:(id)arg2 boundedByRect:(struct CGRect)arg3;	// IMP=0x000000000069f01f
+ (id)memoriesTitleSubtitleSpecForViewSpecDescriptor:(struct PXViewSpecDescriptor)arg1 featureSpec:(id)arg2;	// IMP=0x000000000069ef36
- (void).cxx_destruct;	// IMP=0x00000000002a6d6f
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double distanceBetweenTitleBaselineAndSubtitleBaseline; // @synthesize distanceBetweenTitleBaselineAndSubtitleBaseline=_distanceBetweenTitleBaselineAndSubtitleBaseline;
@property(nonatomic) double interLabelSpacing; // @synthesize interLabelSpacing=_interLabelSpacing;
@property(retain, nonatomic) PXLabelSpec *subtitleLabelSpec; // @synthesize subtitleLabelSpec=_subtitleLabelSpec;
@property(retain, nonatomic) PXLabelSpec *titleLabelSpec; // @synthesize titleLabelSpec=_titleLabelSpec;
@property(readonly, nonatomic) double maximumTitleSubtitleHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a6a25
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a67c7
- (unsigned long long)hash;	// IMP=0x00000000002a66d6

@end

