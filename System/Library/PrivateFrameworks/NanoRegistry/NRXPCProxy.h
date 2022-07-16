//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NRNSXPCConnectionProtocol, NRXPCProxyDelegate;

@interface NRXPCProxy : NSObject
{
    id <NRXPCProxyDelegate> _delegate;	// 8 = 0x8
    unsigned int _entitlementBitmask;	// 16 = 0x10
    _Bool _invalidated;	// 20 = 0x14
    _Bool _monitorClientForSuspension;	// 21 = 0x15
    NSString *_appPath;	// 24 = 0x18
    id _target;	// 32 = 0x20
    id <NRNSXPCConnectionProtocol> _connection;	// 40 = 0x28
}

+ (_Bool)requireAnEntitlement;	// IMP=0x000000000003e389
+ (id)entitlements;	// IMP=0x000000000003e381
+ (id)clientRemoteObjectInterface;	// IMP=0x000000000003e379
+ (id)clientExportedInterface;	// IMP=0x000000000003e371
+ (id)serverRemoteObjectInterface;	// IMP=0x000000000003e369
+ (id)serverExportedInterface;	// IMP=0x000000000003e361
+ (id)machServiceName;	// IMP=0x000000000003e359
- (void).cxx_destruct;	// IMP=0x000000000003e561
@property(nonatomic) _Bool monitorClientForSuspension; // @synthesize monitorClientForSuspension=_monitorClientForSuspension;
@property(readonly, nonatomic) id <NRNSXPCConnectionProtocol> connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
@property(readonly, nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_invalidate;	// IMP=0x000000000003e46f
@property(readonly, nonatomic) id remoteObjectProxy;
- (_Bool)hasEntitlements;	// IMP=0x000000000003e44c
- (_Bool)hasEntitlement:(id)arg1;	// IMP=0x000000000003e3ed
@property(readonly, nonatomic) NSString *appPath; // @synthesize appPath=_appPath;
@property(readonly, nonatomic) int pid;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 xpcTarget:(id)arg3 entitlementBitmask:(unsigned int)arg4;	// IMP=0x000000000003e274

@end
