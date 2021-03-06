//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUILabelBaselineProtocol-Protocol.h>
#import <VideosUI/VUIRentalExpirationLabelDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView <VUIRentalExpirationLabelDelegate, VUILabelBaselineProtocol>
{
    VUIMediaTagsViewLayout *_tagsViewLayout;	// 8 = 0x8
    NSDictionary *_viewsMap;	// 16 = 0x10
    NSArray *_groupedSubviews;	// 24 = 0x18
    double _totalSubviewsWidth;	// 32 = 0x20
    UIImage *_commonSenseLightImage;	// 40 = 0x28
    UIImage *_commonSenseDarkImage;	// 48 = 0x30
}

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 existingView:(id)arg3;	// IMP=0x00000000000f7195
- (void).cxx_destruct;	// IMP=0x00000000000fcb18
@property(retain, nonatomic) UIImage *commonSenseDarkImage; // @synthesize commonSenseDarkImage=_commonSenseDarkImage;
@property(retain, nonatomic) UIImage *commonSenseLightImage; // @synthesize commonSenseLightImage=_commonSenseLightImage;
@property(nonatomic) double totalSubviewsWidth; // @synthesize totalSubviewsWidth=_totalSubviewsWidth;
@property(retain, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(copy, nonatomic) NSDictionary *viewsMap; // @synthesize viewsMap=_viewsMap;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout; // @synthesize tagsViewLayout=_tagsViewLayout;
- (void)_removeGenreLabelAndSeparator;	// IMP=0x00000000000fc899
- (double)_totalSubviewsWidth;	// IMP=0x00000000000fbec2
- (void)_removeSeparatorsFromGroupsIfNeeded:(_Bool)arg1;	// IMP=0x00000000000fba62
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000000fba32
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000000fb65f
- (_Bool)_shouldPutTextOnSeparateLines;	// IMP=0x00000000000fb657
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;	// IMP=0x00000000000fb511
- (id)_newImageViewAsSubview:(_Bool)arg1;	// IMP=0x00000000000fb456
- (_Bool)_shouldApplyTintColor:(id)arg1 forImage:(id)arg2;	// IMP=0x00000000000fb367
- (id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000000fb289
- (id)_newLabelAsSubview:(id)arg1;	// IMP=0x00000000000fb1c1
- (id)_firstLabelSubview;	// IMP=0x00000000000fb060
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x00000000000fb04e
- (void)vui_traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000faf4c
- (void)updateWithMetadata:(id)arg1;	// IMP=0x00000000000f98a3
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000000f97fd
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000000f9778
- (double)vui_baselineOffsetFromBottom;	// IMP=0x00000000000f9726
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000000f942a
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x00000000000f90df
- (struct CGSize)_layoutSubviewsForSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000000f7484
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000000f7425
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;	// IMP=0x00000000000f72c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

