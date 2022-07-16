//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, TVSettingsIPEntryView, UILabel;
@protocol TVSettingsIPEntryViewControllerDelegate;

@interface TVSettingsIPEntryViewController : UIViewController
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    TVSettingsIPEntryView *_ipEntryView;	// 24 = 0x18
    NSString *_prompt;	// 32 = 0x20
    id <TVSettingsIPEntryViewControllerDelegate> _delegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000152df0
@property(nonatomic) __weak id <TVSettingsIPEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
- (id)_ipEntryView;	// IMP=0x0010000000152cc0
- (void)ipEntryViewDidFinishEditing:(id)arg1;	// IMP=0x0010000000152bf0
@property(copy, nonatomic) NSString *ipAddress;
- (void)setTitle:(id)arg1;	// IMP=0x00100000001529c0
- (id)preferredFocusEnvironments;	// IMP=0x00100000001528c0
- (_Bool)becomeFirstResponder;	// IMP=0x0010000000152880
- (void)viewDidLayoutSubviews;	// IMP=0x0010000000152390
- (void)loadView;	// IMP=0x0010000000151ee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

