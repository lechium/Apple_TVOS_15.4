//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI27FilterOptionsViewController : UIViewController
{
    MISSING_TYPE *visibility;	// 8 = 0x8
    MISSING_TYPE *dataProvider;	// 16 = 0x10
    MISSING_TYPE *dependencies;	// 24 = 0x18
    MISSING_TYPE *eventHub;	// 32 = 0x20
    MISSING_TYPE *storefrontLocalizer;	// 48 = 0x30
    MISSING_TYPE *layout;	// 88 = 0x58
    MISSING_TYPE *titleLabel;	// 112 = 0x70
    MISSING_TYPE *subtitleLabel;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x0000000000215000
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000214fa0
- (void)textSizeChanged:(id)arg1;	// IMP=0x0000000000214f00
- (void)onCancel;	// IMP=0x0000000000214ed0
- (void)onDone;	// IMP=0x00000000002148f0
- (void)updateTitleView;	// IMP=0x00000000002141a0
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000213f00
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000213ea0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000213e60
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000213c80
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000213a00
- (void)viewDidLoad;	// IMP=0x0000000000213950
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000213370
@property(nonatomic, readonly) UILabel *subtitleLabel; // @synthesize subtitleLabel;

@end

