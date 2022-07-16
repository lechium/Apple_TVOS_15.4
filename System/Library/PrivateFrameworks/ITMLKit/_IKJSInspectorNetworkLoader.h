//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKNetworkRequestLoader-Protocol.h>

@class IKJSInspectorNetworkAgent, NSMutableDictionary, NSString, RWIProtocolNetworkDomainEventDispatcher;

@interface _IKJSInspectorNetworkLoader : NSObject <IKNetworkRequestLoader>
{
    NSString *_parentIdentifier;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    IKJSInspectorNetworkAgent *_agent;	// 24 = 0x18
    RWIProtocolNetworkDomainEventDispatcher *_dispatcher;	// 32 = 0x20
    NSMutableDictionary *_requestRecords;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000060931
@property(readonly, nonatomic) NSMutableDictionary *requestRecords; // @synthesize requestRecords=_requestRecords;
@property(readonly, nonatomic) __weak RWIProtocolNetworkDomainEventDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) __weak IKJSInspectorNetworkAgent *agent; // @synthesize agent=_agent;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSString *debugDescription;
- (double)currentTimeIntervalSince1970;	// IMP=0x000000000006070a
- (void)dispatchEventWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060505
- (id)_recordForResource:(long long)arg1 withInitiator:(long long)arg2 synchronousOperation:(_Bool)arg3;	// IMP=0x000000000006037e
- (id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;	// IMP=0x0000000000060369
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 agent:(id)arg3 dispatcher:(id)arg4;	// IMP=0x000000000006024a

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
