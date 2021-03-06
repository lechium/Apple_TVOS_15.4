//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSString, PXCapsuleButton, PXUpdater, UILabel, UIVisualEffectView;

@interface PXCMMPosterBannerView : UIView
{
    struct _NSRange _headlineBoldRange;	// 8 = 0x8
    PXCapsuleButton *_actionButton;	// 24 = 0x18
    NSString *_actionButtonTitle;	// 32 = 0x20
    CDUnknownBlockType _actionButtonAction;	// 40 = 0x28
    UILabel *_headlineLabel;	// 48 = 0x30
    UILabel *_subheadlineLabel;	// 56 = 0x38
    UIVisualEffectView *_visualEffectView;	// 64 = 0x40
    PXUpdater *_updater;	// 72 = 0x48
    _Bool _containsUnverifiedPersons;	// 80 = 0x50
    _Bool _loadingPeopleSuggestions;	// 81 = 0x51
    _Bool _addingPhotos;	// 82 = 0x52
    NSString *_headline;	// 88 = 0x58
    NSString *_subheadline;	// 96 = 0x60
    NSArray *_localizedNamesForHeadline;	// 104 = 0x68
}

+ (id)_subheadlineLabelFont;	// IMP=0x000000000012b5fb
+ (id)_headlineLabelBoldFont;	// IMP=0x000000000012b5d0
+ (id)_headlineLabelFont;	// IMP=0x000000000012b5a5
- (void).cxx_destruct;	// IMP=0x000000000012b4ec
@property(nonatomic, getter=isAddingPhotos) _Bool addingPhotos; // @synthesize addingPhotos=_addingPhotos;
@property(nonatomic, getter=isLoadingPeopleSuggestions) _Bool loadingPeopleSuggestions; // @synthesize loadingPeopleSuggestions=_loadingPeopleSuggestions;
@property(nonatomic) _Bool containsUnverifiedPersons; // @synthesize containsUnverifiedPersons=_containsUnverifiedPersons;
@property(copy, nonatomic) NSArray *localizedNamesForHeadline; // @synthesize localizedNamesForHeadline=_localizedNamesForHeadline;
@property(copy, nonatomic) NSString *subheadline; // @synthesize subheadline=_subheadline;
@property(copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
- (id)_attributedStringWithString:(id)arg1 boldRange:(struct _NSRange)arg2;	// IMP=0x000000000012b320
- (id)_headlineStringAttributes;	// IMP=0x000000000012b21d
- (id)_actionButtonWithTitle:(id)arg1 action:(SEL)arg2 enabled:(_Bool)arg3;	// IMP=0x000000000012b0d9
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;	// IMP=0x000000000012b04c
- (void)_actionButtonTapped:(id)arg1;	// IMP=0x000000000012afa5
- (void)_updateTitles;	// IMP=0x000000000012acd6
- (void)_updateActionButton;	// IMP=0x000000000012ab86
- (struct CGSize)_performLayoutInWidth:(double)arg1 updateSubviewFrames:(_Bool)arg2;	// IMP=0x000000000012a1e3
- (void)_updateLoadingPeopleSuggestions;	// IMP=0x000000000012a19d
- (void)tintColorDidChange;	// IMP=0x000000000012a11f
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000012a0a3
- (void)layoutSubviews;	// IMP=0x000000000012a03d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000012a029
- (void)setActionButtonWithTitle:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000129f55
- (void)setHeadline:(id)arg1 boldRange:(struct _NSRange)arg2;	// IMP=0x0000000000129d6f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000129b41

@end

