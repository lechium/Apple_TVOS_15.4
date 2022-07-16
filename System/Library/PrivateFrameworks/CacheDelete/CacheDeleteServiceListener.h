//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CacheDelete/CacheDeleteServiceProtocol-Protocol.h>

@class CacheDeleteServiceInfo, NSObject, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CacheDeleteServiceListener <CacheDeleteServiceProtocol>
{
    _Bool _legacyCallbacks;	// 8 = 0x8
    _Bool _anonymous;	// 9 = 0x9
    CacheDeleteServiceInfo *_serviceInfo;	// 16 = 0x10
    NSXPCListenerEndpoint *_endpoint;	// 24 = 0x18
    CDUnknownBlockType _purgeable;	// 32 = 0x20
    CDUnknownBlockType _purge;	// 40 = 0x28
    CDUnknownBlockType _periodic;	// 48 = 0x30
    CDUnknownBlockType _cancel;	// 56 = 0x38
    CDUnknownBlockType _notify;	// 64 = 0x40
    CDUnknownBlockType _callback;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

+ (id)cacheDeleteServiceListener:(id)arg1 options:(id)arg2;	// IMP=0x0000000000027008
- (void).cxx_destruct;	// IMP=0x0000000000028d0d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(copy, nonatomic) CDUnknownBlockType notify; // @synthesize notify=_notify;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType periodic; // @synthesize periodic=_periodic;
@property(copy, nonatomic) CDUnknownBlockType purge; // @synthesize purge=_purge;
@property(copy, nonatomic) CDUnknownBlockType purgeable; // @synthesize purgeable=_purgeable;
@property(readonly) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) CacheDeleteServiceInfo *serviceInfo; // @synthesize serviceInfo=_serviceInfo;
@property(readonly) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(readonly) _Bool legacyCallbacks; // @synthesize legacyCallbacks=_legacyCallbacks;
- (void)serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002893e
- (void)setNotifyCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000002886f
- (void)serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000284bb
- (void)servicePing:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028433
- (void)servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027ff4
- (void)serviceCancelPurge:(CDUnknownBlockType)arg1;	// IMP=0x0000000000027f31
- (void)servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027971
- (void)servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000002743c
- (void)setPurgeable:(CDUnknownBlockType)arg1 purge:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3 periodic:(CDUnknownBlockType)arg4 notify:(CDUnknownBlockType)arg5 callback:(CDUnknownBlockType)arg6 entitlements:(id)arg7;	// IMP=0x0000000000027094
- (id)initWithName:(id)arg1 options:(id)arg2;	// IMP=0x0000000000026bd1

@end
