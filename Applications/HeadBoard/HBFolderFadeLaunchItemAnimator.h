//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBApp, NSString, UIView;

@interface HBFolderFadeLaunchItemAnimator : NSObject
{
    HBApp *_transitioningApp;	// 8 = 0x8
    UIView *_transitioningView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004543c
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
- (void)animateTransition:(id)arg1;	// IMP=0x0010000000044fef
- (double)transitionDuration:(id)arg1;	// IMP=0x0010000000044fe1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

