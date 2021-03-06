//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBApp, HBFolderCell, NSString, UIView;

@interface HBFolderZoomResignItemTransitionAnimator : NSObject
{
    _Bool _resignTransitionToLeft;	// 8 = 0x8
    HBFolderCell *_folderCell;	// 16 = 0x10
    HBApp *_transitioningApp;	// 24 = 0x18
    UIView *_transitioningView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000046edd
@property(nonatomic) _Bool resignTransitionToLeft; // @synthesize resignTransitionToLeft=_resignTransitionToLeft;
@property(retain, nonatomic) UIView *transitioningView; // @synthesize transitioningView=_transitioningView;
@property(retain, nonatomic) HBApp *transitioningApp; // @synthesize transitioningApp=_transitioningApp;
@property(retain, nonatomic) HBFolderCell *folderCell; // @synthesize folderCell=_folderCell;
- (void)animateTransition:(id)arg1;	// IMP=0x001000000004697d
- (double)transitionDuration:(id)arg1;	// IMP=0x001000000004696f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

