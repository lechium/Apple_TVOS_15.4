//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <VideosUI/TVCarouselViewDataSource-Protocol.h>
#import <VideosUI/TVCarouselViewDelegate-Protocol.h>

@class NSArray, NSString, UIButton, UILabel, UILayoutGuide, UIStackView, _TVCarouselView;

__attribute__((visibility("hidden")))
@interface VUIAccessView_tvOS : UIView <TVCarouselViewDataSource, TVCarouselViewDelegate>
{
    NSArray *_apps;	// 8 = 0x8
    UILayoutGuide *_contentGuide;	// 16 = 0x10
    UIStackView *_contentStack;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UIStackView *_logoStack;	// 40 = 0x28
    UILabel *_bodyLabel;	// 48 = 0x30
    UILabel *_secondaryBodyLabel;	// 56 = 0x38
    UIStackView *_seeAllButtonStack;	// 64 = 0x40
    UIStackView *_buttonStack;	// 72 = 0x48
    UIButton *_allowButton;	// 80 = 0x50
    UIButton *_disallowButton;	// 88 = 0x58
    UIButton *_nackButton;	// 96 = 0x60
    UIButton *_seeAllButton;	// 104 = 0x68
    _TVCarouselView *_carouselView;	// 112 = 0x70
    _Bool _didLayout;	// 120 = 0x78
}

+ (struct CGSize)iconSize;	// IMP=0x00000000000cf494
- (void).cxx_destruct;	// IMP=0x00000000000d16da
- (id)_buttonWithTitleForTV:(id)arg1 textStyle:(id)arg2;	// IMP=0x00000000000d1567
- (id)_buildButtonStack;	// IMP=0x00000000000d1154
- (id)_buildSeeAllButtonStack;	// IMP=0x00000000000d1082
- (id)_imageViewForIndex:(unsigned long long)arg1;	// IMP=0x00000000000d0e6e
- (id)_buildLogoStack;	// IMP=0x00000000000d0d1d
- (id)_buildCarousel;	// IMP=0x00000000000d0c21
- (id)carouselView:(id)arg1 cellForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000d0a8e
- (unsigned long long)numberOfItemsInCarouselView:(id)arg1;	// IMP=0x00000000000d0a71
- (void)layoutSubviews;	// IMP=0x00000000000cf93c
- (void)showNackScreen;	// IMP=0x00000000000cf639
- (void)setSecondaryBody:(id)arg1;	// IMP=0x00000000000cf5c6
- (void)setBody:(id)arg1;	// IMP=0x00000000000cf566
- (void)setTitle:(id)arg1;	// IMP=0x00000000000cf506
- (id)bodyScroll;	// IMP=0x00000000000cf4fe
- (id)nackButton;	// IMP=0x00000000000cf4e9
- (id)seeAllButton;	// IMP=0x00000000000cf4d4
- (id)disallowButton;	// IMP=0x00000000000cf4bf
- (id)allowButton;	// IMP=0x00000000000cf4aa
- (void)dealloc;	// IMP=0x00000000000cf44a
- (id)initWithApps:(id)arg1;	// IMP=0x00000000000cf2ab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

