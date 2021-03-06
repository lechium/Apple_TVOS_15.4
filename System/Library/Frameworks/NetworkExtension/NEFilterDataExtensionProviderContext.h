//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NetworkExtension/NEAppInfoCacheLookupDelegate-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEFilterDataExtensionProviderProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSXPCListenerEndpoint;
@protocol OS_dispatch_source, OS_xpc_object;

@interface NEFilterDataExtensionProviderContext <NEAppInfoCacheLookupDelegate, NEFilterDataExtensionProviderProtocol, NEFilterDataExtensionProviderHostProtocol>
{
    _Bool _controlProviderExists;	// 16 = 0x10
    NSDictionary *_remediationMap;	// 24 = 0x18
    NSDictionary *_URLAppendStringMap;	// 32 = 0x20
    NSObject<OS_xpc_object> *_clientListener;	// 40 = 0x28
    NSXPCListenerEndpoint *_listenerEndpoint;	// 48 = 0x30
    NSMutableDictionary *_browserFlows;	// 56 = 0x38
    NSMutableDictionary *_socketFlows;	// 64 = 0x40
    NSMutableDictionary *_channelFlows;	// 72 = 0x48
    NSMutableArray *_socketExceptions;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_source;	// 88 = 0x58
    NSMutableArray *_pendingConnections;	// 96 = 0x60
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000052394
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000052328
- (void).cxx_destruct;	// IMP=0x000000000005a700
@property(retain, nonatomic) NSMutableArray *pendingConnections; // @synthesize pendingConnections=_pendingConnections;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *socketExceptions; // @synthesize socketExceptions=_socketExceptions;
@property(retain, nonatomic) NSMutableDictionary *channelFlows; // @synthesize channelFlows=_channelFlows;
@property(retain, nonatomic) NSMutableDictionary *socketFlows; // @synthesize socketFlows=_socketFlows;
@property(retain, nonatomic) NSMutableDictionary *browserFlows; // @synthesize browserFlows=_browserFlows;
@property(retain, nonatomic) NSXPCListenerEndpoint *listenerEndpoint; // @synthesize listenerEndpoint=_listenerEndpoint;
@property(retain, nonatomic) NSObject<OS_xpc_object> *clientListener; // @synthesize clientListener=_clientListener;
@property(nonatomic) _Bool controlProviderExists; // @synthesize controlProviderExists=_controlProviderExists;
@property(retain, nonatomic) NSDictionary *URLAppendStringMap; // @synthesize URLAppendStringMap=_URLAppendStringMap;
@property(retain, nonatomic) NSDictionary *remediationMap; // @synthesize remediationMap=_remediationMap;
- (void)handleChannelMessageStatsReport:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a237
- (void)handleChannelMessageFlowFinish:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000059e5c
- (void)handleChannelMessageMoreData:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000598fc
- (void)handleNewChannelFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005918c
- (void)closeChannelFlow:(id)arg1;	// IMP=0x00000000000590da
- (void)handleSocketSourceEventWithSocket:(int)arg1;	// IMP=0x000000000005822f
- (_Bool)blessClient:(id)arg1;	// IMP=0x0000000000057ffb
- (void)closeSocketFlow:(id)arg1 socketID:(unsigned long long)arg2;	// IMP=0x0000000000057f75
- (void)handleRemediationMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057a5b
- (void)handleDataCompleteMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000576eb
- (void)handleAddDataMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000057121
- (void)handleNewFlowMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000568f3
- (void)closeBrowserFilterFlow:(id)arg1;	// IMP=0x0000000000056854
- (void)closeFlow:(id)arg1;	// IMP=0x000000000005676c
- (void)fetchAppInfoForPID:(int)arg1 UUID:(id)arg2 bundleID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000056561
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 event:(long long)arg3;	// IMP=0x0000000000056372
- (void)reportFlowStats:(id)arg1;	// IMP=0x000000000005628d
- (void)reportFlowClosed:(id)arg1;	// IMP=0x0000000000056190
- (void)reportFlow:(id)arg1 forVerdict:(id)arg2 absoluteVerdict:(id)arg3;	// IMP=0x0000000000056075
- (void)report:(id)arg1;	// IMP=0x0000000000055ffd
- (void)fetchCurrentRulesForFlow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000055e4c
- (void)handleDataCompleteForFlow:(id)arg1 direction:(long long)arg2 reply:(id)arg3 controlSocket:(int)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000055a6c
- (void)handleData:(id)arg1 offset:(unsigned long long)arg2 forFlow:(id)arg3 direction:(long long)arg4 reply:(id)arg5 controlSocket:(int)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000055641
- (void)handleNewFlow:(id)arg1 reply:(id)arg2 controlSocket:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000551aa
- (id)adjustDataToFilter:(id)arg1 startOffset:(unsigned long long *)arg2 flow:(id)arg3 direction:(long long)arg4;	// IMP=0x0000000000054f5f
- (void)purgeData:(int)arg1 size:(int)arg2 buf:(char *)arg3 bufSize:(int)arg4;	// IMP=0x0000000000054e55
- (void)setupSocketContentFilterWithControlSocket:(int)arg1;	// IMP=0x0000000000054daa
- (void)teardownSocketSource;	// IMP=0x0000000000054d37
- (void)setupSocketSourceWithControlSocket:(int)arg1;	// IMP=0x0000000000054b07
- (void)acceptNewClientConnection:(id)arg1;	// IMP=0x00000000000548c5
- (void)closePendingConnections;	// IMP=0x0000000000054712
- (void)tearDownConnection:(id)arg1;	// IMP=0x0000000000054320
- (void)handleClientMessage:(id)arg1 filloutReply:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054079
- (void)updateFlow:(id)arg1 withVerdict:(id)arg2 forDirection:(long long)arg3;	// IMP=0x00000000000538db
- (void)resumeFlow:(id)arg1 withVerdict:(id)arg2;	// IMP=0x000000000005334d
- (id)findFlowWithFlow:(id)arg1;	// IMP=0x0000000000053176
- (void)applySettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000530f0
- (void)sendSocketContentFilterRequest;	// IMP=0x00000000000530b3
- (void)sendBrowserContentFilterServerRequest;	// IMP=0x0000000000053076
- (void)provideURLAppendStringMap:(id)arg1;	// IMP=0x0000000000052fa9
- (void)provideRemediationMap:(id)arg1;	// IMP=0x0000000000052eb6
- (void)handleRulesChanged;	// IMP=0x0000000000052e79
- (void)fetchProviderConnectionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000052c24
- (void)providerControlSocketFileHandle:(id)arg1;	// IMP=0x0000000000052bea
- (void)stopWithReason:(int)arg1;	// IMP=0x00000000000527b9
- (void)startFilterWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005241e
- (Class)requiredProviderSuperClass;	// IMP=0x000000000005240d
- (id)extensionPoint;	// IMP=0x0000000000052400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

