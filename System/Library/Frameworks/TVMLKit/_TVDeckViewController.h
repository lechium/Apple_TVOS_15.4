//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVTabBarAdjusting-Protocol.h>

@class IKViewElement, NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVDeckViewController : UIViewController <TVTabBarAdjusting>
{
    _Bool _dissolving;	// 8 = 0x8
    CDUnknownBlockType _didDissolveBlock;	// 16 = 0x10
    IKViewElement *_deckElement;	// 24 = 0x18
    UIView *_pendingView;	// 32 = 0x20
    UIView *_currentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009eb3d
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIView *pendingView; // @synthesize pendingView=_pendingView;
@property(retain, nonatomic) IKViewElement *deckElement; // @synthesize deckElement=_deckElement;
@property(copy, nonatomic) CDUnknownBlockType didDissolveBlock; // @synthesize didDissolveBlock=_didDissolveBlock;
@property(nonatomic, getter=isDissolving) _Bool dissolving; // @synthesize dissolving=_dissolving;
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x000000000009ea8e
- (void)_applicationWillEnterForeground:(id)arg1;	// IMP=0x000000000009ea7c
- (void)_resumePreview;	// IMP=0x000000000009e8c8
- (void)_pausePreview;	// IMP=0x000000000009e714
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000009e62d
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009e546
- (void)viewDidLayoutSubviews;	// IMP=0x000000000009e328
- (void)updateWithDeckElement:(id)arg1;	// IMP=0x000000000009dbf0
- (void)_dissolveToPendingView;	// IMP=0x000000000009d877
- (void)_scrollingGridViewReady:(id)arg1;	// IMP=0x000000000009d7fb
- (void)_deckImageViewReady:(id)arg1;	// IMP=0x000000000009d6ec
- (_Bool)shouldAdjustForTabBarSafeAreaInsets;	// IMP=0x000000000009d63b
- (void)viewDidLoad;	// IMP=0x000000000009d5b2
- (void)dealloc;	// IMP=0x000000000009d53d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
