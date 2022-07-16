//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMContainerIdentity, NSObject, NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithContainerBase
{
    MCMContainerIdentity *_containerIdentity;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000596f3
@property(readonly, nonatomic) MCMContainerIdentity *containerIdentity; // @synthesize containerIdentity=_containerIdentity;
@property(readonly, nonatomic) _Bool canBeHandledLocally;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x0010000000059568

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end
