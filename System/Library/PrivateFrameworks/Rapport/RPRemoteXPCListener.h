//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface RPRemoteXPCListener : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    _Bool _invalidateCalled;	// 16 = 0x10
    _Bool _invalidateDone;	// 17 = 0x11
    CDUnknownBlockType _acceptHandler;	// 24 = 0x18
    CDUnknownBlockType _interruptionHandler;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
    NSString *_serviceName;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000051c02
@property(readonly, copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType acceptHandler; // @synthesize acceptHandler=_acceptHandler;
- (void)_invalidated;	// IMP=0x0000000000051ac0
- (void)_invalidate;	// IMP=0x0000000000051a48
- (void)invalidate;	// IMP=0x00000000000519e7
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000051971
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000518c9
- (id)init;	// IMP=0x0000000000051859

@end

