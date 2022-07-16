//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIPresentationController;

@interface _UIPresentationControllerVisualStyle : NSObject
{
    UIPresentationController *_presentationController;	// 8 = 0x8
}

@property(readonly, nonatomic) UIPresentationController *presentationController; // @synthesize presentationController=_presentationController;
- (void)runAlongsideTransitionFromPresentationController:(id)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000a15016
- (void)runAlongsideTransitionToPresentationController:(id)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000a15010
- (void)runAlongsidePresentation:(_Bool)arg1 transitionCoordinator:(id)arg2;	// IMP=0x0000000000a1500a
- (id)initWithPresentationController:(id)arg1;	// IMP=0x0000000000a14fcd

@end

