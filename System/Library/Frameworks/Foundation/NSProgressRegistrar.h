//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSProgressRegistrar-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>

@class NSFileAccessNode, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSProgressRegistrar : NSObject <NSXPCListenerDelegate, NSProgressRegistrar>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_publishersByID;	// 16 = 0x10
    NSMutableDictionary *_publisherTransactionsByID;	// 24 = 0x18
    NSMutableDictionary *_subscribersByID;	// 32 = 0x20
    NSMutableDictionary *_subscriberTransactionsByID;	// 40 = 0x28
    NSFileAccessNode *_rootFileAccessNode;	// 48 = 0x30
    NSMutableSet *_pendingFileSubscriberIDs;	// 56 = 0x38
}

- (oneway void)removeSubscriberForID:(id)arg1;	// IMP=0x00000000000048a0
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 fileURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000004038
- (void)_getRemoteProcessWithAuditToken:(CDStruct_4c969caf)arg1 canReadItemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003b7a
- (oneway void)addSubscriber:(id)arg1 forID:(id)arg2 appBundleID:(id)arg3 category:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000037b5
- (oneway void)removePublisherForID:(id)arg1;	// IMP=0x00000000000035c8
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;	// IMP=0x00000000000032c2
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;	// IMP=0x0000000000002fe0
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 acknowledgementAppBundleIDs:(id)arg3 category:(id)arg4 fileURL:(id)arg5 initialValues:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000002990
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000025b9
- (void)dealloc;	// IMP=0x0000000000002522
- (id)initWithQueue:(id)arg1 rootFileAccessNode:(id)arg2;	// IMP=0x000000000000244c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

