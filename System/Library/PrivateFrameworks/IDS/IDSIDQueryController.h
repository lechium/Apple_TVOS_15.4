//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSInternalQueueController, _IDSIDQueryController;

@interface IDSIDQueryController : NSObject
{
    _IDSIDQueryController *_internal;	// 8 = 0x8
    IDSInternalQueueController *_queueController;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00000000000f0ba6
- (void).cxx_destruct;	// IMP=0x00000000000f5349
- (_Bool)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f51e6
- (_Bool)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f5083
- (_Bool)participantsForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f4f8d
- (id)_currentCachedRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f4c96
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f49a5
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4;	// IMP=0x00000000000f461f
- (id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f4604
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4;	// IMP=0x00000000000f4204
- (long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f41e9
- (id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f3e08
- (long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f39fd
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;	// IMP=0x00000000000f3901
- (_Bool)_flushQueryCacheForService:(id)arg1;	// IMP=0x00000000000f3733
- (_Bool)_warmupQueryCacheForService:(id)arg1;	// IMP=0x00000000000f3565
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f33d8
- (_Bool)_hasCacheForService:(id)arg1;	// IMP=0x00000000000f3292
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f326b
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f3244
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000f2fe5
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000f2d82
- (_Bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f2a95
- (_Bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f260d
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f2320
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 errorCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f1f89
- (_Bool)forceRefreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f1afa
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000f15b4
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000f13b3
- (void)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x00000000000f122b
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000f1123
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;	// IMP=0x00000000000f0fd3
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000f0f30
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000f0e3f
- (void)dealloc;	// IMP=0x00000000000f0dd9
- (id)init;	// IMP=0x00000000000f0bfb

@end
