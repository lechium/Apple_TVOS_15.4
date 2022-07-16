//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WorkflowKit/WFActionRemoteUserInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol WFActionRemoteUserInterface;

@interface WFRemoteActionUserInterface : NSObject <WFActionRemoteUserInterface>
{
    NSString *_userInterfaceType;	// 8 = 0x8
    CDUnknownBlockType _onInterfaceInterruption;	// 16 = 0x10
    id <WFActionRemoteUserInterface> _remoteUserInterface;	// 24 = 0x18
    NSXPCConnection *_connection;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001b2825
@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) id <WFActionRemoteUserInterface> remoteUserInterface; // @synthesize remoteUserInterface=_remoteUserInterface;
@property(copy, nonatomic) CDUnknownBlockType onInterfaceInterruption; // @synthesize onInterfaceInterruption=_onInterfaceInterruption;
@property(readonly, nonatomic) NSString *userInterfaceType; // @synthesize userInterfaceType=_userInterfaceType;
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x00000000001b2776
- (_Bool)conformsToProtocol:(id)arg1;	// IMP=0x00000000001b26ff
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x00000000001b26a0
- (id)initWithUserInterfaceType:(id)arg1 listenerEndpoint:(id)arg2 interface:(id)arg3;	// IMP=0x00000000001b2356

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
