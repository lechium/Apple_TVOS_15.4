//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXStoryModel, PXStoryViewModeTransition, PXUpdater;
@protocol PXStoryViewModeTransitionsHelperDelegate;

@interface PXStoryViewModeTransitionsHelper : NSObject <PXChangeObserver>
{
    PXStoryModel *_model;	// 8 = 0x8
    id <PXStoryViewModeTransitionsHelperDelegate> _delegate;	// 16 = 0x10
    long long _presentedViewMode;	// 24 = 0x18
    PXStoryViewModeTransition *_currentViewModeTransition;	// 32 = 0x20
    PXStoryViewModeTransition *_pendingViewModeTransition;	// 40 = 0x28
    PXUpdater *_updater;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000017b5e6
@property(readonly, nonatomic) PXUpdater *updater; // @synthesize updater=_updater;
@property(retain, nonatomic) PXStoryViewModeTransition *pendingViewModeTransition; // @synthesize pendingViewModeTransition=_pendingViewModeTransition;
@property(retain, nonatomic) PXStoryViewModeTransition *currentViewModeTransition; // @synthesize currentViewModeTransition=_currentViewModeTransition;
@property(nonatomic) long long presentedViewMode; // @synthesize presentedViewMode=_presentedViewMode;
@property(nonatomic) __weak id <PXStoryViewModeTransitionsHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PXStoryModel *model; // @synthesize model=_model;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x000000000017b47f
- (void)_currentTransitionDidCancel;	// IMP=0x000000000017b383
- (void)_currentTransitionDidFinish;	// IMP=0x000000000017b29e
- (void)_startTransition:(id)arg1;	// IMP=0x000000000017b19c
- (_Bool)_isViewModeSupported:(long long)arg1;	// IMP=0x000000000017b17b
- (void)_updateTransitionCompletion;	// IMP=0x000000000017b104
- (void)_invalidateTransitionCompletion;	// IMP=0x000000000017b0c0
- (void)_updateTransition;	// IMP=0x000000000017acc6
- (void)_invalidateTransition;	// IMP=0x000000000017ac82
- (void)_configureTransition:(id)arg1;	// IMP=0x000000000017aba6
- (void)invalidatePresentingGeometry;	// IMP=0x000000000017ab2a
- (void)_setNeedsUpdate;	// IMP=0x000000000017aade
- (void)updateIfNeeded;	// IMP=0x000000000017aac8
- (id)initWithModel:(id)arg1;	// IMP=0x000000000017a9cf
- (id)init;	// IMP=0x000000000017a955

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
