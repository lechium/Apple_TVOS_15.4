//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, UIStackView;
@protocol GEOTextItemContainer;

__attribute__((visibility("hidden")))
@interface MKTextItemContainerViewController : UIViewController
{
    id <GEOTextItemContainer> _textItemContainer;	// 8 = 0x8
    NSArray *_textItemViews;	// 16 = 0x10
    UIStackView *_stackView;	// 24 = 0x18
    double _maxWidth;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e8bed
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(retain, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(copy, nonatomic) NSArray *textItemViews; // @synthesize textItemViews=_textItemViews;
@property(readonly, nonatomic) id <GEOTextItemContainer> textItemContainer; // @synthesize textItemContainer=_textItemContainer;
- (void)updateUIForTheme:(id)arg1;	// IMP=0x00000000000e89c1
- (void)infoCardThemeChanged;	// IMP=0x00000000000e8950
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000e8922
- (void)setupSubviewsWithMaxWidth:(double)arg1;	// IMP=0x00000000000e8452
- (void)viewDidLayoutSubviews;	// IMP=0x00000000000e83d6
- (double)currentMaxWidth;	// IMP=0x00000000000e8113
- (void)viewDidLoad;	// IMP=0x00000000000e7ba0
- (id)initWithTextItemContainer:(id)arg1;	// IMP=0x00000000000e7ada
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000e7ad2

@end

