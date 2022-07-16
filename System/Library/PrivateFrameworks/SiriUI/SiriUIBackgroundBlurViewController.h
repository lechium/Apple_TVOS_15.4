//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SiriUIBackgroundBlurView;
@protocol SiriUIBackgroundBlurViewControllerDelegate;

@interface SiriUIBackgroundBlurViewController : UIViewController
{
    _Bool _backgroundBlurIsVisible;	// 8 = 0x8
    SiriUIBackgroundBlurView *_backgroundBlurView;	// 16 = 0x10
    long long _backgroundBlurVisibleReason;	// 24 = 0x18
    id <SiriUIBackgroundBlurViewControllerDelegate> _backgroundBlurViewControllerDelegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ac77
@property(nonatomic) __weak id <SiriUIBackgroundBlurViewControllerDelegate> backgroundBlurViewControllerDelegate; // @synthesize backgroundBlurViewControllerDelegate=_backgroundBlurViewControllerDelegate;
@property(nonatomic) long long backgroundBlurVisibleReason; // @synthesize backgroundBlurVisibleReason=_backgroundBlurVisibleReason;
@property(nonatomic) _Bool backgroundBlurIsVisible; // @synthesize backgroundBlurIsVisible=_backgroundBlurIsVisible;
@property(retain, nonatomic) SiriUIBackgroundBlurView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000001abe9
- (void)requestBackgroundBlurVisible:(_Bool)arg1 forReason:(long long)arg2;	// IMP=0x000000000001a4de
- (void)viewDidLoad;	// IMP=0x000000000001a395
- (id)init;	// IMP=0x000000000001a381
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000001a315

@end

