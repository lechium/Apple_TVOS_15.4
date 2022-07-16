//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBAppSwitcherDataSource, PBAppSwitcherViewController;
@protocol PBSystemUIPresenting;

@interface PBAppSwitcherManager : NSObject
{
    _Bool _dismissing;	// 8 = 0x8
    id <PBSystemUIPresenting> _presentationDelegate;	// 16 = 0x10
    PBAppSwitcherViewController *_presentedViewController;	// 24 = 0x18
    PBAppSwitcherDataSource *_activeAppSwitcherDataSource;	// 32 = 0x20
}

+ (id)defaultManager;	// IMP=0x00400000000ebc90
- (void).cxx_destruct;	// IMP=0x00200000000ed3d0
@property(readonly, nonatomic, getter=isDismissing) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(readonly, nonatomic) PBAppSwitcherDataSource *activeAppSwitcherDataSource; // @synthesize activeAppSwitcherDataSource=_activeAppSwitcherDataSource;
@property(readonly, nonatomic) PBAppSwitcherViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
// Error: Property attributes should begin with the type ('T') attribute, property name: presentationDelegate
// Property attributes: (null)

- (_Bool)dismissAppSwitcherToBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000eca70
- (void)presentAppSwitcherWithFocusedBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ec060
- (void)invalidateSceneHosting;	// IMP=0x00100000000ec050
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (_Bool)shouldActivateForProcessWithIdentifier:(id)arg1;	// IMP=0x00100000000ebe90
- (id)_init;	// IMP=0x00100000000ebdc0
- (id)init;	// IMP=0x00100000000ebd90

@end
