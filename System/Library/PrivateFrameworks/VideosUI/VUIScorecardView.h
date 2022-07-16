//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, UIImage, VUIScoreboardLayout;
@protocol VUIScorecardViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIScorecardView : UIView
{
    _Bool _didCalculatedSize;	// 8 = 0x8
    _Bool _delegateRespondsToBackgroundImageForScorecardViewMaterial;	// 9 = 0x9
    _Bool _delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;	// 10 = 0xa
    id <VUIScorecardViewDelegate> _delegate;	// 16 = 0x10
    VUIScoreboardLayout *_scoreboardLayout;	// 24 = 0x18
    double _interitemSpacing;	// 32 = 0x20
    NSArray *_rowScoreValueSizes;	// 40 = 0x28
    NSArray *_columnWidths;	// 48 = 0x30
    NSArray *_rowHeights;	// 56 = 0x38
    UIImage *_darkMaterialImage;	// 64 = 0x40
    struct CGSize _scorecardSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000a342f
@property(nonatomic) _Bool delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex; // @synthesize delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex=_delegateRespondsToBackgroundBlendModeForScoreValueInRowAtIndex;
@property(nonatomic) _Bool delegateRespondsToBackgroundImageForScorecardViewMaterial; // @synthesize delegateRespondsToBackgroundImageForScorecardViewMaterial=_delegateRespondsToBackgroundImageForScorecardViewMaterial;
@property(retain, nonatomic) UIImage *darkMaterialImage; // @synthesize darkMaterialImage=_darkMaterialImage;
@property(retain, nonatomic) NSArray *rowHeights; // @synthesize rowHeights=_rowHeights;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(retain, nonatomic) NSArray *rowScoreValueSizes; // @synthesize rowScoreValueSizes=_rowScoreValueSizes;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) struct CGSize scorecardSize; // @synthesize scorecardSize=_scorecardSize;
@property(nonatomic) _Bool didCalculatedSize; // @synthesize didCalculatedSize=_didCalculatedSize;
@property(retain, nonatomic) VUIScoreboardLayout *scoreboardLayout; // @synthesize scoreboardLayout=_scoreboardLayout;
@property(nonatomic) __weak id <VUIScorecardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct CGSize)_calculateMetricsOfScorecard;	// IMP=0x00000000000a257f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000000a1d01
- (void)_calculateColumnSpacing;	// IMP=0x00000000000a1a56
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000a1a17
- (void)invalidateData;	// IMP=0x00000000000a19af

@end
