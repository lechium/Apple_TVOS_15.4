//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, UIScene;
@protocol OS_dispatch_source;

@interface HBUIUserInteractionManager : NSObject
{
    _Bool _active;	// 8 = 0x8
    struct os_unfair_lock_s _assertionsLock;	// 12 = 0xc
    UIScene *_scene;	// 16 = 0x10
    NSHashTable *_assertions;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_source;	// 32 = 0x20
    NSHashTable *_disabledWindows;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001edba
@property(retain, nonatomic) NSHashTable *disabledWindows; // @synthesize disabledWindows=_disabledWindows;
@property(readonly, nonatomic) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(readonly, nonatomic) struct os_unfair_lock_s assertionsLock; // @synthesize assertionsLock=_assertionsLock;
@property(readonly, nonatomic) NSHashTable *assertions; // @synthesize assertions=_assertions;
- (void)_setScene:(id)arg1;	// IMP=0x000000000001ed68
- (id)_scene;	// IMP=0x000000000001ed52
- (void)_disableUserInteraction;	// IMP=0x000000000001ed0e
- (void)_enableUserInteraction;	// IMP=0x000000000001ecca
- (void)_checkAssertions;	// IMP=0x000000000001ebc4
- (void)_setNeedsCheckAssertions;	// IMP=0x000000000001ebb1
- (void)_removeAssertion:(id)arg1 reason:(id)arg2;	// IMP=0x000000000001ea77
- (_Bool)_addAssertion:(id)arg1;	// IMP=0x000000000001e954
- (id)disableUserInteractionWithReason:(id)arg1 timeout:(double)arg2;	// IMP=0x000000000001e8ee
- (void)dealloc;	// IMP=0x000000000001e8b4
- (id)initWithScene:(id)arg1;	// IMP=0x000000000001e733

@end

