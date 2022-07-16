//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SiriUI/SiriUIContentPlatterViewControllerContaining-Protocol.h>

@class NSString, SiriUIContentPlatterViewController;

@interface SiriUINavigationContentViewController : UIViewController <SiriUIContentPlatterViewControllerContaining>
{
    UIViewController *_contentViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000154cb
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000154b0
@property(readonly, nonatomic) SiriUIContentPlatterViewController *contentPlatterViewController;
- (id)_navigationContentView;	// IMP=0x0000000000015402
- (void)contentViewDidUpdateSize;	// IMP=0x0000000000015363
- (_Bool)hasContentAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000015150
@property(nonatomic, getter=isContentLayoutEnabled) _Bool contentLayoutEnabled;
- (id)title;	// IMP=0x0000000000014f1b
- (void)viewDidLoad;	// IMP=0x0000000000014e84
- (void)loadView;	// IMP=0x0000000000014e4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
