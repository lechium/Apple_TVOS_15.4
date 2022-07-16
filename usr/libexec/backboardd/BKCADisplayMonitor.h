//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, NSArray, NSMutableDictionary, NSString;

@interface BKCADisplayMonitor : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    BSCompoundAssertion *_observerAssertion;	// 16 = 0x10
    NSMutableDictionary *_displayUUIDToImmutableCADisplay;	// 24 = 0x18
    _Bool _isInvalid;	// 32 = 0x20
    NSArray *_displays;	// 40 = 0x28
}

+ (id)new;	// IMP=0x0020000000053c94
- (void).cxx_destruct;	// IMP=0x0020000000053c2b
@property(readonly, copy, nonatomic) NSArray *displays; // @synthesize displays=_displays;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000005387d
@property(readonly, copy, nonatomic) NSArray *activeDisplays;
- (id)addObserver:(id)arg1;	// IMP=0x0010000000053715
- (id)immutableDisplayForUUID:(id)arg1;	// IMP=0x0010000000053654
- (void)invalidate;	// IMP=0x001000000005346f
- (id)initWithDisplays:(id)arg1;	// IMP=0x001000000005304d
- (void)dealloc;	// IMP=0x0010000000052eb1
- (id)init;	// IMP=0x0010000000052d83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
