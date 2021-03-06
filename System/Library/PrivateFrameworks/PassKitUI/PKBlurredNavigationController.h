//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

#import <PassKitUI/PKObservableContentContainer-Protocol.h>

@class NSHashTable, NSString, UIVisualEffectView;

@interface PKBlurredNavigationController : UINavigationController <PKObservableContentContainer>
{
    UIVisualEffectView *_backdropView;	// 8 = 0x8
    struct os_unfair_lock_s _observersLock;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000017f78a
- (id)_observers;	// IMP=0x000000000017f711
- (void)removeContentContainerObserver:(id)arg1;	// IMP=0x000000000017f6ab
- (void)addContentContainerObserver:(id)arg1;	// IMP=0x000000000017f645
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x000000000017f4b4
- (void)viewWillLayoutSubviews;	// IMP=0x000000000017f406
- (void)viewDidLoad;	// IMP=0x000000000017f313
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000017f298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize preferredContentSize;
@property(readonly) Class superclass;

@end

