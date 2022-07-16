//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, XCTDAccessibilitySessionToken, XCTDAccessibilitySystem;

@interface XCAXManager_iOS : NSObject
{
    _Bool _valid;	// 8 = 0x8
    id <XCTDAccessibilitySystem> _accessibilitySystem;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 32 = 0x20
    id <XCTDAccessibilitySessionToken> _accessibilitySessionToken;	// 40 = 0x28
    struct __AXUIElement *_systemWideElement;	// 48 = 0x30
    struct __AXObserver *_accessibilityObserver;	// 56 = 0x38
    NSMutableDictionary *_notificationHandlers;	// 64 = 0x40
    NSMutableDictionary *_userTestingNotificationHandlers;	// 72 = 0x48
}

+ (void)initialize;	// IMP=0x00200000000353eb
- (void).cxx_destruct;	// IMP=0x0020000000038e26
@property(retain) NSMutableDictionary *userTestingNotificationHandlers; // @synthesize userTestingNotificationHandlers=_userTestingNotificationHandlers;
@property(retain) NSMutableDictionary *notificationHandlers; // @synthesize notificationHandlers=_notificationHandlers;
@property struct __AXObserver *accessibilityObserver; // @synthesize accessibilityObserver=_accessibilityObserver;
@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(retain) id <XCTDAccessibilitySessionToken> accessibilitySessionToken; // @synthesize accessibilitySessionToken=_accessibilitySessionToken;
@property(retain) NSObject<OS_dispatch_queue> *calloutQueue; // @synthesize calloutQueue=_calloutQueue;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(retain) id <XCTDAccessibilitySystem> accessibilitySystem; // @synthesize accessibilitySystem=_accessibilitySystem;
- (int)setAXTimeout:(double)arg1;	// IMP=0x0010000000038bde
@property _Bool accelerometerEnabled;
- (_Bool)disableSystemAccelerometer:(id *)arg1;	// IMP=0x0010000000038b37
@property _Bool passiveListeningModeEnabled;
- (id)runAccessibilityAuditForApplication:(id)arg1 withConfiguration:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000038ad8
@property(readonly) long long systemUIOrientation;
- (void)performAccessibilityAction:(int)arg1 onElement:(id)arg2 withValue:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000003842f
- (void)notifyOnNextOccurrenceOfUserTestingEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000381f9
- (void)handleUserTestingNotification:(id)arg1;	// IMP=0x0010000000037df1
- (void)handleNotification:(int)arg1 fromElement:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000037932
- (id)unregisterForAccessibilityNotification:(int)arg1 withRegistrationToken:(id)arg2;	// IMP=0x00100000000375d1
- (id)registerForAccessibilityNotification:(int)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000037022
- (id)elementAtPoint:(struct CGPoint)arg1 error:(id *)arg2;	// IMP=0x0010000000036e84
- (id)parameterizedAttributeForElement:(id)arg1 attribute:(id)arg2 parameter:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000366cf
- (_Bool)setAttribute:(id)arg1 value:(id)arg2 element:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000362c5
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000036204
- (id)snapshotForElement:(id)arg1 attributes:(id)arg2 parameters:(id)arg3 timeoutControls:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000036098
- (void)_performWithRetries:(long long)arg1 untilAXServerFound:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000035f12
- (struct __AXUIElement *)_synchronized_systemWideElement;	// IMP=0x0010000000035e44
- (void)enableFauxCollectionViewCells;	// IMP=0x0010000000035e35
- (void)setLocalizableStringsDataGatheringEnabled:(_Bool)arg1;	// IMP=0x0010000000035e29
- (void)invalidate;	// IMP=0x0010000000035c7b
- (void)_dispatchSyncIfValidOrAssert:(CDUnknownBlockType)arg1;	// IMP=0x0010000000035acb
- (void)dealloc;	// IMP=0x0010000000035a19
- (_Bool)_finishConfiguringAccessibility:(id *)arg1;	// IMP=0x001000000003562d
- (id)initWithAccessibilitySystem:(id)arg1 timeout:(double)arg2 error:(id *)arg3;	// IMP=0x001000000003544f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
