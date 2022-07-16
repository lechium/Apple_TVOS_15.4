//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXGLayout;

@interface PXGSplitLayout
{
    CDStruct_af00bf4e _updateFlags;	// 8 = 0x8
    CDStruct_af00bf4e _additionalUpdateFlags;	// 32 = 0x20
    _Bool _settingSublayouts;	// 56 = 0x38
    _Bool _isUpdatingSublayouts;	// 57 = 0x39
    _Bool _isPerformingAdditionalUpdate;	// 58 = 0x3a
    _Bool _floatingModesRespectSafeArea;	// 59 = 0x3b
    _Bool _shouldExcludeTopAndBottomPaddingFromReferenceSize;	// 60 = 0x3c
    _Bool _allowsRepeatedSublayoutsUpdates;	// 61 = 0x3d
    PXGLayout *_firstSublayout;	// 64 = 0x40
    PXGLayout *_secondSublayout;	// 72 = 0x48
    long long _mode;	// 80 = 0x50
    double _interlayoutSpacing;	// 88 = 0x58
    struct UIEdgeInsets _padding;	// 96 = 0x60
    struct UIEdgeInsets _presentedPadding;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000063b61
@property(readonly, nonatomic) _Bool allowsRepeatedSublayoutsUpdates; // @synthesize allowsRepeatedSublayoutsUpdates=_allowsRepeatedSublayoutsUpdates;
@property(readonly, nonatomic) struct UIEdgeInsets presentedPadding; // @synthesize presentedPadding=_presentedPadding;
@property(nonatomic) _Bool shouldExcludeTopAndBottomPaddingFromReferenceSize; // @synthesize shouldExcludeTopAndBottomPaddingFromReferenceSize=_shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) double interlayoutSpacing; // @synthesize interlayoutSpacing=_interlayoutSpacing;
@property(nonatomic) _Bool floatingModesRespectSafeArea; // @synthesize floatingModesRespectSafeArea=_floatingModesRespectSafeArea;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) PXGLayout *secondSublayout; // @synthesize secondSublayout=_secondSublayout;
@property(retain, nonatomic) PXGLayout *firstSublayout; // @synthesize firstSublayout=_firstSublayout;
- (void)willRemoveSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000000063a5b
- (void)didAddSublayout:(id)arg1 atIndex:(long long)arg2 flags:(unsigned long long)arg3;	// IMP=0x0000000000063a2c
- (void)didChangeSublayoutOrigins;	// IMP=0x000000000006390c
- (void)sublayoutDidChangeLastBaseline:(id)arg1;	// IMP=0x00000000000637d4
- (void)sublayoutDidChangeContentSize:(id)arg1;	// IMP=0x000000000006369c
- (void)sublayoutNeedsUpdate:(id)arg1;	// IMP=0x000000000006354f
- (void)userInterfaceDirectionDidChange;	// IMP=0x000000000006342f
- (void)scrollSpeedRegimeDidChange;	// IMP=0x000000000006330f
- (void)screenScaleDidChange;	// IMP=0x00000000000631ef
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000000630cf
- (void)visibleRectDidChange;	// IMP=0x0000000000062faf
- (void)referenceDepthDidChange;	// IMP=0x0000000000062e8f
- (void)referenceSizeDidChange;	// IMP=0x0000000000062d6f
- (void)viewEnvironmentDidChange;	// IMP=0x0000000000062c5c
- (void)_performUpdateSublayoutGeometries;	// IMP=0x00000000000622d1
- (void)_updateSublayoutGeometries;	// IMP=0x000000000006222e
- (void)didUpdate;	// IMP=0x0000000000062158
- (void)update;	// IMP=0x0000000000061df5
- (void)willUpdate;	// IMP=0x0000000000061d1a
- (long long)scrollableAxis;	// IMP=0x0000000000061ca5
- (void)removeSublayoutsInRange:(struct _NSRange)arg1;	// IMP=0x0000000000061734
@property(readonly, nonatomic) long long secondSublayoutIndex;
@property(readonly, nonatomic) long long firstSublayoutIndex;
- (void)_replaceSublayout:(id)arg1 withSublayout:(id)arg2 atIndex:(long long)arg3;	// IMP=0x0000000000061571

@end

