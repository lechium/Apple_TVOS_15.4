//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol LAServiceManager;

@interface Daemon : NSObject
{
    NSMutableDictionary *_contextMaps;	// 8 = 0x8
    id <LAServiceManager> _serviceManager;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x00200000000065e1
- (void).cxx_destruct;	// IMP=0x0020000000007b5c
- (void)notifyEvent:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000079d3
- (void)prearmTouchIdWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000789b
- (void)bootstrapSessionServiceType:(id)arg1 serviceClientID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007885
- (id)_proxyWithContext:(id)arg1 callback:(id)arg2 request:(id)arg3;	// IMP=0x00100000000075a1
- (void)connectToContextWithUUID:(id)arg1 callback:(id)arg2 token:(id)arg3 senderAuditTokenData:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x001000000000724f
- (void)connectToExistingContext:(id)arg1 userId:(unsigned int)arg2 connection:(id)arg3 checkEntitlementBlock:(CDUnknownBlockType)arg4 callback:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000006fab
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006e02
- (void)connectToExistingContext:(id)arg1 callback:(id)arg2 processId:(int)arg3 userId:(unsigned int)arg4 auditSessionId:(int)arg5 auditToken:(CDStruct_4c969caf)arg6 cApiOrigin:(_Bool)arg7 checkEntitlementBlock:(CDUnknownBlockType)arg8 invalidationBlock:(CDUnknownBlockType)arg9 connectionHash:(unsigned long long)arg10 reply:(CDUnknownBlockType)arg11;	// IMP=0x00100000000066bb
- (id)init;	// IMP=0x0010000000006636

@end
