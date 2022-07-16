//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCMMImageView, PXCMMPosterHeaderViewModel, PXCMMPosterHeaderViewSpec, PXGradientView, UIImageView, UILabel;

@interface PXCMMPosterHeaderView : UIView <PXChangeObserver>
{
    PXCMMPosterHeaderViewSpec *_spec;	// 8 = 0x8
    PXCMMImageView *_imageView;	// 16 = 0x10
    PXGradientView *_topGradientView;	// 24 = 0x18
    PXGradientView *_bottomGradientView;	// 32 = 0x20
    UILabel *_titleLabel;	// 40 = 0x28
    UILabel *_subtitleLabel;	// 48 = 0x30
    UILabel *_statusLabel;	// 56 = 0x38
    UIImageView *_statusCheckmark;	// 64 = 0x40
    PXCMMPosterHeaderViewModel *_viewModel;	// 72 = 0x48
    long long _presentationStyle;	// 80 = 0x50
}

+ (void)preheatSharedValuesForPresentationStyle:(long long)arg1;	// IMP=0x00000000002fe7c7
+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;	// IMP=0x00000000002fe6fa
- (void).cxx_destruct;	// IMP=0x00000000002fe572
@property(readonly, nonatomic) long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) PXCMMPosterHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000002fe43d
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000002fe42b
- (_Bool)test_showStatusCheckmark;	// IMP=0x00000000002fe3c0
- (id)test_statusString;	// IMP=0x00000000002fe3a3
- (id)test_subtitle;	// IMP=0x00000000002fe386
- (id)test_title;	// IMP=0x00000000002fe369
- (void)_updateFonts;	// IMP=0x00000000002fe22c
- (void)_updateStatusString;	// IMP=0x00000000002fe1be
- (void)_updateSubtitle;	// IMP=0x00000000002fe150
- (void)_updateTitle;	// IMP=0x00000000002fe0e2
- (void)_performLayoutWithSize:(struct CGSize)arg1;	// IMP=0x00000000002fd842
- (void)layoutSubviews;	// IMP=0x00000000002fd7db
- (id)initWithPresentationStyle:(long long)arg1;	// IMP=0x00000000002fd037
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002fcfb4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002fcf3a
- (id)init;	// IMP=0x00000000002fcec0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

