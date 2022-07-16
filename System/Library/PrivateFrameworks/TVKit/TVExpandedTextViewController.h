//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVKit/UIScrollViewDelegate-Protocol.h>

@class CAGradientLayer, NSAttributedString, NSString, UILabel, UIScrollView, UIView;

@interface TVExpandedTextViewController : UIViewController <UIScrollViewDelegate>
{
    NSAttributedString *_text;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIView *_maskedContainerView;	// 24 = 0x18
    UILabel *_expandedTextLabel;	// 32 = 0x20
    CAGradientLayer *_textGradientMask;	// 40 = 0x28
    unsigned long long _gradientState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000017f2b
@property(nonatomic) unsigned long long gradientState; // @synthesize gradientState=_gradientState;
@property(retain, nonatomic) CAGradientLayer *textGradientMask; // @synthesize textGradientMask=_textGradientMask;
@property(retain, nonatomic) UILabel *expandedTextLabel; // @synthesize expandedTextLabel=_expandedTextLabel;
@property(retain, nonatomic) UIView *maskedContainerView; // @synthesize maskedContainerView=_maskedContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000017d0a
- (id)preferredFocusEnvironments;	// IMP=0x000000000001796f
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001746c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000017302
- (void)loadView;	// IMP=0x0000000000016e1e
- (id)init;	// IMP=0x0000000000016ddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

