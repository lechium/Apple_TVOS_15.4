//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol XCAXManager, XCTDAccessibilitySystem, XCTDApplicationLauncher, XCTDSiriInterface, XCTDSystemConfiguration, XCTouchGesturePerforming;

@interface XCTDAutomationServicesProvider : NSObject
{
    _Bool _valid;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <XCTDApplicationLauncher> _applicationLauncher;	// 16 = 0x10
    id <XCAXManager> _axManager;	// 24 = 0x18
    id <XCTDSystemConfiguration> _systemConfiguration;	// 32 = 0x20
    id <XCTDAccessibilitySystem> _accessibilitySystem;	// 40 = 0x28
    id <XCTouchGesturePerforming> _touchGesturePerformer;	// 48 = 0x30
    id <XCTDSiriInterface> _siriInterface;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000298d8
@property struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property _Bool valid; // @synthesize valid=_valid;
@property(readonly) id <XCTDSiriInterface> siriInterface; // @synthesize siriInterface=_siriInterface;
@property(readonly) id <XCTouchGesturePerforming> touchGesturePerformer; // @synthesize touchGesturePerformer=_touchGesturePerformer;
@property(readonly) id <XCTDAccessibilitySystem> accessibilitySystem; // @synthesize accessibilitySystem=_accessibilitySystem;
@property(readonly) id <XCTDSystemConfiguration> systemConfiguration; // @synthesize systemConfiguration=_systemConfiguration;
@property(readonly) id <XCAXManager> axManager; // @synthesize axManager=_axManager;
@property(readonly) id <XCTDApplicationLauncher> applicationLauncher; // @synthesize applicationLauncher=_applicationLauncher;
- (id)initWithAccessibilitySystem:(id)arg1 timeout:(double)arg2 error:(id *)arg3;	// IMP=0x00100000000296f9
- (id)initWithApplicationLauncher:(id)arg1 siriInterface:(id)arg2 systemConfiguration:(id)arg3 axManager:(id)arg4 touchGesturePerformer:(id)arg5;	// IMP=0x00100000000295af
- (_Bool)loadAccessibilityWithTimeout:(double)arg1 error:(id *)arg2;	// IMP=0x0010000000029385
- (void)unloadAccessibility;	// IMP=0x001000000002922e
- (void)invalidate;	// IMP=0x0010000000029088
- (void)dealloc;	// IMP=0x0010000000028f5b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

