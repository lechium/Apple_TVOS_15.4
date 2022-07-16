//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class PXPeopleStatusView;
@protocol PXPeopleStatusViewDelegate;

@interface PXPeopleStatusViewController : UIViewController
{
    id <PXPeopleStatusViewDelegate> _delegate;	// 8 = 0x8
    PXPeopleStatusView *_statusView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a9de6
@property(retain, nonatomic) PXPeopleStatusView *statusView; // @synthesize statusView=_statusView;
@property(nonatomic) __weak id <PXPeopleStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_continuePressed:(id)arg1;	// IMP=0x00000000003a9d48
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000003a9cde
- (void)viewDidLoad;	// IMP=0x00000000003a995a

@end

