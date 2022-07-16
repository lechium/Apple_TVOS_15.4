//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSObject, NSString;
@protocol OS_xpc_object;

@interface MCMXPCMessageWithConcreteContainersArrayBase
{
    NSArray *_concreteContainerIdentities;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000017746
@property(readonly, nonatomic) NSArray *concreteContainerIdentities; // @synthesize concreteContainerIdentities=_concreteContainerIdentities;
@property(readonly, nonatomic) _Bool canBeHandledLocally;
- (id)initWithXPCObject:(id)arg1 clientConnection:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long *)arg4;	// IMP=0x001000000001743c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int platform;
@property(readonly, nonatomic) struct container_client *proxy;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;

@end

