//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface PKDaemonClient : NSObject
{
    NSObject<OS_xpc_object> *_pkd;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_replyQueue;	// 16 = 0x10
    long long _protocolVersion;	// 24 = 0x18
}

+ (id)convertToXPC:(id)arg1 version:(unsigned long long)arg2;	// IMP=0x000000000001dae6
- (void).cxx_destruct;	// IMP=0x000000000001dbb2
@property long long protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain) NSObject<OS_dispatch_queue> *replyQueue; // @synthesize replyQueue=_replyQueue;
@property(retain) NSObject<OS_xpc_object> *pkd; // @synthesize pkd=_pkd;
- (id)convertFromXPC:(id)arg1;	// IMP=0x000000000001db08
- (void)set:(id)arg1 uuids:(id)arg2;	// IMP=0x000000000001d92e
- (void)set:(id)arg1 plugins:(id)arg2;	// IMP=0x000000000001d663
- (void)sendSynchronously:(_Bool)arg1 request:(id)arg2 retry:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001d07d
- (void)sendSynchronously:(_Bool)arg1 request:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d065
- (void)send:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001d04b
- (id)request:(const char *)arg1 paths:(id)arg2;	// IMP=0x000000000001cfc4
- (id)request:(const char *)arg1;	// IMP=0x000000000001cf60
- (void)copyReceipt:(CDUnknownBlockType)arg1;	// IMP=0x000000000001cee4
- (void)releaseHold:(id)arg1 flags:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001cdb8
- (void)holdPlugins:(id)arg1 extensionPointName:(id)arg2 platforms:(id)arg3 flags:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000001cad5
- (void)bulkSetPluginAnnotations:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001ca19
- (void)setPluginAnnotations:(id)arg1 annotations:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001c93a
- (void)matchPlugIns:(id)arg1 flags:(unsigned long long)arg2 uuid:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c7fa
- (void)findPlugInByPathURL:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c715
- (void)findPlugInByUUID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c636
- (void)accessPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c574
- (void)readyPlugIns:(id)arg1 synchronously:(_Bool)arg2 flags:(unsigned long long)arg3 environment:(id)arg4 languages:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x000000000001c385
- (void)bulkPlugins:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c2f4
- (void)removePlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c272
- (void)addPlugIns:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000001c1f0
- (id)errorInReply:(id)arg1;	// IMP=0x000000000001c095
- (id)initWithServiceName:(const char *)arg1 user:(unsigned int)arg2;	// IMP=0x000000000001be6a
- (id)initWithServiceName:(const char *)arg1;	// IMP=0x000000000001be56

@end

