//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssertionServices/RBSAssertionObserving-Protocol.h>

@class NSMutableArray, NSString, RBSAssertion, RBSTarget;

@interface BKSAssertion : NSObject <RBSAssertionObserving>
{
    RBSAssertion *_internalAssertion;	// 8 = 0x8
    CDUnknownBlockType _acquisitionHandler;	// 16 = 0x10
    CDUnknownBlockType _invalidationHandler;	// 24 = 0x18
    RBSTarget *_target;	// 32 = 0x20
    NSMutableArray *_attributes;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    struct os_unfair_lock_s _lock;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000255b
- (unsigned long long)_bksErrorForRBSAssertionError:(unsigned long long)arg1;	// IMP=0x0000000000002547
- (void)_lock_setAttributes:(id)arg1;	// IMP=0x000000000000249c
- (id)_lock_attributes;	// IMP=0x000000000000246b
- (CDUnknownBlockType)_lock_acquisitionHandler;	// IMP=0x0000000000002408
- (void)_lock_setInternalAssertion:(id)arg1;	// IMP=0x000000000000231f
- (id)_lock_internalAssertion;	// IMP=0x00000000000022fe
- (void)_lock_setName:(id)arg1;	// IMP=0x00000000000022a3
- (id)_lock_name;	// IMP=0x0000000000002272
- (void)_lock_reaquireAssertion;	// IMP=0x00000000000021d7
- (void)_lock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000219a
- (void)_acquireAsynchronously;	// IMP=0x000000000000211c
- (CDUnknownBlockType)_acquisitionHandler;	// IMP=0x00000000000020d2
- (id)_internalAssertion;	// IMP=0x000000000000209b
- (void)_setAttributes:(id)arg1;	// IMP=0x0000000000002048
- (id)_attributes;	// IMP=0x000000000000200a
- (void)_setTarget:(id)arg1;	// IMP=0x0000000000001fc5
- (id)_target;	// IMP=0x0000000000001f8e
- (void)_invalidateSynchronously:(_Bool)arg1;	// IMP=0x0000000000001ef4
- (id)_initWithName:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001e34
- (void)assertion:(id)arg1 didInvalidateWithError:(id)arg2;	// IMP=0x0000000000001dd6
- (void)assertionWillInvalidate:(id)arg1;	// IMP=0x0000000000001dd0
- (void)invalidate;	// IMP=0x0000000000001dbc
- (_Bool)acquire;	// IMP=0x0000000000001c2d
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler;
@property(readonly, nonatomic) _Bool valid;
- (void)dealloc;	// IMP=0x0000000000001a47
- (id)init;	// IMP=0x00000000000019c0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

