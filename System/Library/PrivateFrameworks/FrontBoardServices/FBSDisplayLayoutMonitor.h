//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSInvalidatable-Protocol.h>

@class BSServiceConnectionEndpoint, FBSDisplayLayout, NSMapTable, NSString, _FBSDisplayLayoutServiceAssertion;

@interface FBSDisplayLayoutMonitor : NSObject <BSInvalidatable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;	// 16 = 0x10
    _Bool _lock_invalidated;	// 24 = 0x18
    BSServiceConnectionEndpoint *_deprecated_endpoint;	// 32 = 0x20
    CDUnknownBlockType _lock_deprecated_handler;	// 40 = 0x28
    NSMapTable *_lock_deprecated_observerAssertions;	// 48 = 0x30
    BOOL _deprecated_qos;	// 56 = 0x38
    long long _deprecated_displayType;	// 64 = 0x40
    _Bool _deprecated_singleton;	// 72 = 0x48
    _Bool _deprecated_mutable;	// 73 = 0x49
}

+ (id)sharedMonitorForDisplayType:(long long)arg1;	// IMP=0x000000000002df9c
+ (id)_endpointForDisplayType:(long long)arg1;	// IMP=0x000000000002dddc
+ (id)interface;	// IMP=0x000000000002dcd6
+ (id)mainDisplayInstanceIdentifier;	// IMP=0x000000000002dcc9
+ (id)serviceIdentifier;	// IMP=0x000000000002dcbc
+ (id)monitorWithConfiguration:(id)arg1;	// IMP=0x000000000002d916
- (void).cxx_destruct;	// IMP=0x000000000002efde
- (unsigned long long)qualityOfService;	// IMP=0x000000000002ee5e
- (void)removeObserver:(id)arg1;	// IMP=0x000000000002ec47
- (void)addObserver:(id)arg1;	// IMP=0x000000000002e7ea
- (void)setHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002e50a
- (CDUnknownBlockType)handler;	// IMP=0x000000000002e35e
- (long long)displayType;	// IMP=0x000000000002e354
- (id)initWithDisplayType:(long long)arg1 qualityOfService:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e160
- (id)initWithDisplayType:(long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002e146
- (id)initWithDisplayType:(long long)arg1;	// IMP=0x000000000002e132
- (void)invalidate;	// IMP=0x000000000002db12
@property(readonly, nonatomic) FBSDisplayLayout *currentLayout;
- (void)dealloc;	// IMP=0x000000000002d671
- (id)_initWithConfiguration:(id)arg1 singleton:(_Bool)arg2 needsDefaultPriority:(_Bool)arg3 mutable:(_Bool)arg4 displayType:(long long)arg5 mutableHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000002d2b9
- (id)init;	// IMP=0x000000000002d18b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

