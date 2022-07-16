//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@protocol PBSystemOverlayContentDelegate;

@interface PBAirPlayContentPresentingViewController : UIViewController
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_childViewController;	// 24 = 0x18
}

+ (double)_transitionDuration;	// IMP=0x0020000000038fc0
- (void).cxx_destruct;	// IMP=0x0020000000039250
@property(readonly, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)_transitionWithAnimations:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000038ff0
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038b50
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000038590
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)initWithChildViewController:(id)arg1;	// IMP=0x0010000000038480

@end

