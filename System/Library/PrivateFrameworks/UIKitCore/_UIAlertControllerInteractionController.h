//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIForceInteractionController-Protocol.h>
#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>

@class NSString, UIAlertController;
@protocol UIViewControllerContextTransitioning;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerInteractionController <UIForceInteractionController, UIInteractionProgressObserver>
{
    UIAlertController *_alertController;	// 8 = 0x8
    id <UIViewControllerContextTransitioning> _context;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005502b
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> context; // @synthesize context=_context;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
- (void)interactionProgress:(id)arg1 didEnd:(_Bool)arg2;	// IMP=0x0000000000054fbf
- (void)interactionProgressDidUpdate:(id)arg1;	// IMP=0x0000000000054f76
- (void)startInteractiveTransition:(id)arg1;	// IMP=0x0000000000054e02

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

