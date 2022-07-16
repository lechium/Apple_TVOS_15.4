//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MPAVRouteConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    NSMutableArray *_pendingConnectionHandlers;	// 32 = 0x20
    CDUnknownBlockType _invalidationHandler;	// 40 = 0x28
    void *_externalDevice;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000136f26
@property(readonly, nonatomic) void *externalDevice; // @synthesize externalDevice=_externalDevice;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
- (void)_externalDeviceConnectionStateDidChangeNotification:(id)arg1;	// IMP=0x0000000000136dbe
- (void)_connectionStateDidChange:(unsigned int)arg1 error:(id)arg2;	// IMP=0x0000000000136c1f
- (void)sendMediaRemoteCommand:(unsigned int)arg1 withOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000136b28
- (void)sendCustomData:(id)arg1;	// IMP=0x0000000000136b13
- (void)reset;	// IMP=0x0000000000136ac8
@property(readonly, nonatomic, getter=isInvalidated) _Bool invalidated;
- (void)connectWithOptions:(unsigned long long)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000136972
- (void)connectWithUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136958
- (void)connectWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000136888
- (void)connectWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000136871
@property(readonly, nonatomic, getter=isConnecting) _Bool connecting;
@property(readonly, nonatomic, getter=isConnected) _Bool connected;
- (id)description;	// IMP=0x0000000000136778
- (void)dealloc;	// IMP=0x000000000013652b
- (id)initWithExternalDevice:(void *)arg1;	// IMP=0x00000000001363d1

@end
