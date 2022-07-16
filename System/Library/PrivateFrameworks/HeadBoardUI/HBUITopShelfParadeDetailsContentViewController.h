//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <HeadBoardUI/HBUITopShelfParadeContentViewController-Protocol.h>
#import <HeadBoardUI/HBUITopShelfParadeItemObserver-Protocol.h>

@class NSString;
@protocol HBUITopShelfParadeAction, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeDetailsContentViewController : UIViewController <HBUITopShelfParadeItemObserver, HBUITopShelfParadeContentViewController>
{
    id <HBUITopShelfParadeItem> _paradeItem;	// 8 = 0x8
    id <HBUITopShelfParadeContentViewControllerDelegate> _delegate;	// 16 = 0x10
    id <HBUITopShelfParadeAction> _primaryAction;	// 24 = 0x18
    id <HBUITopShelfParadeAction> _secondaryAction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b252
@property(retain, nonatomic) id <HBUITopShelfParadeAction> secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) id <HBUITopShelfParadeAction> primaryAction; // @synthesize primaryAction=_primaryAction;
@property(nonatomic) __weak id <HBUITopShelfParadeContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
- (void)paradeItemSecondaryActionDidChange:(id)arg1;	// IMP=0x000000000002b030
- (void)paradeItemPrimaryActionDidChange:(id)arg1;	// IMP=0x000000000002ae96
- (void)_secondaryActionDidChange;	// IMP=0x00000000000299f5
- (void)_primaryActionDidChange;	// IMP=0x00000000000297d6
- (void)_notifyDelegateDidSelectAction:(id)arg1;	// IMP=0x0000000000029755
- (void)_secondaryActionButtonSelected;	// IMP=0x0000000000029738
- (void)_primaryActionButtonSelected;	// IMP=0x000000000002971b
- (id)_itemDetailsView;	// IMP=0x0000000000029709
- (void)viewDidLoad;	// IMP=0x0000000000029626
- (void)loadView;	// IMP=0x0000000000029565

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

