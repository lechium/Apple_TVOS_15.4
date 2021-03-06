//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/UIViewControllerAnimatedTransitioning-Protocol.h>

@class NSString, PXMessagesStackView, PXPhotosGridStackTransitionHelper, UIViewPropertyAnimator;

@interface PXMessagesStackPresentationAnimationController : NSObject <UIViewControllerAnimatedTransitioning>
{
    double _transitionDuration;	// 8 = 0x8
    PXPhotosGridStackTransitionHelper *_transitionHelper;	// 16 = 0x10
    UIViewPropertyAnimator *_propertyAnimator;	// 24 = 0x18
    PXMessagesStackView *_stackView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000008f2de6
@property(readonly, nonatomic) PXMessagesStackView *stackView; // @synthesize stackView=_stackView;
- (void)animateTransition:(id)arg1;	// IMP=0x00000000008f2b8c
- (id)interruptibleAnimatorForTransition:(id)arg1;	// IMP=0x00000000008f2b7e
- (double)transitionDuration:(id)arg1;	// IMP=0x00000000008f2b73
- (id)initWithStackView:(id)arg1;	// IMP=0x00000000008f29fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

