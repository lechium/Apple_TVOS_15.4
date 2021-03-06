//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _WKRemoteObjectRegistry : NSObject
{
    struct unique_ptr<WebKit::RemoteObjectRegistry, std::default_delete<WebKit::RemoteObjectRegistry>> _remoteObjectRegistry;	// 8 = 0x8
    struct RetainPtr<NSMapTable> _remoteObjectProxies;	// 16 = 0x10
    struct HashMap<WTF::String, std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>, WTF::DefaultHash<WTF::String>, WTF::HashTraits<WTF::String>, WTF::HashTraits<std::pair<WTF::RetainPtr<id>, WTF::RetainPtr<_WKRemoteObjectInterface>>>, WTF::HashTableTraits> _exportedObjects;	// 24 = 0x18
    struct HashMap<unsigned long long, PendingReply, WTF::DefaultHash<unsigned long long>, WTF::HashTraits<unsigned long long>, WTF::HashTraits<PendingReply>, WTF::HashTableTraits> _pendingReplies;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x000000000011c8d0
- (void).cxx_destruct;	// IMP=0x000000000011c791
- (void)_releaseReplyWithID:(unsigned long long)arg1;	// IMP=0x000000000011c73e
- (void)_callReplyWithID:(unsigned long long)arg1 blockInvocation:(const void *)arg2;	// IMP=0x000000000011c550
- (void)_invokeMethod:(const void *)arg1;	// IMP=0x000000000011b8a9
@property(readonly, nonatomic) void *remoteObjectRegistry;
- (void)_sendInvocation:(id)arg1 interface:(id)arg2;	// IMP=0x000000000011b145
- (void)_invalidate;	// IMP=0x000000000011b124
- (id)_initWithWebPageProxy:(NakedRef_0c67ce5b)arg1;	// IMP=0x000000000011b0a4
- (id)_initWithWebPage:(NakedRef_f43bc9c8)arg1;	// IMP=0x000000000011b02f
- (id)remoteObjectProxyWithInterface:(id)arg1;	// IMP=0x000000000011aef2
- (void)unregisterExportedObject:(id)arg1 interface:(id)arg2;	// IMP=0x000000000011ace4
- (void)registerExportedObject:(id)arg1 interface:(id)arg2;	// IMP=0x000000000011aa3c

@end

