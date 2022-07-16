//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVSystemMenuUI/TVSMModuleContentViewController-Protocol.h>

@class NSString, TVSMBaseLockupView, TVSMBaseView;
@protocol TVSMModuleContentViewControllerDelegate;

@interface TVSMBaseViewController : UIViewController <TVSMModuleContentViewController>
{
    id <TVSMModuleContentViewControllerDelegate> _delegate;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    TVSMBaseLockupView *_lockupView;	// 24 = 0x18
}

+ (Class)contentViewClass;	// IMP=0x0000000000015380
- (void).cxx_destruct;	// IMP=0x0000000000015550
@property(retain, nonatomic) TVSMBaseLockupView *lockupView; // @synthesize lockupView=_lockupView;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <TVSMModuleContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonPressed:(id)arg1;	// IMP=0x00000000000153b0
@property(readonly, nonatomic) TVSMBaseView *baseView;
- (void)loadView;	// IMP=0x0000000000015260
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000015170

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
