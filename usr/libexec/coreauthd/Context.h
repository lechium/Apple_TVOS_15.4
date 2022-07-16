//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ContextPlugin, NSData, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol OS_os_transaction;

@interface Context : NSObject
{
    NSMutableDictionary *_serverProperties;	// 8 = 0x8
    NSMutableArray *_allowedTransfers;	// 16 = 0x10
    int _processId;	// 24 = 0x18
    unsigned int _userId;	// 28 = 0x1c
    int _auditSessionId;	// 32 = 0x20
    unsigned int _instanceId;	// 36 = 0x24
    NSUUID *_uuid;	// 40 = 0x28
    ContextPlugin *_plugin;	// 48 = 0x30
    NSObject<OS_os_transaction> *_transaction;	// 56 = 0x38
}

+ (unsigned int)newInstanceId;	// IMP=0x0020000000008113
+ (void)managedContextWithExternalizedContext:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007bdf
- (void).cxx_destruct;	// IMP=0x0020000000009e3e
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(readonly, nonatomic) int auditSessionId; // @synthesize auditSessionId=_auditSessionId;
@property(readonly, nonatomic) unsigned int userId; // @synthesize userId=_userId;
@property(readonly, nonatomic) int processId; // @synthesize processId=_processId;
@property(readonly, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) ContextPlugin *plugin; // @synthesize plugin=_plugin;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)connectFromCaller:(id)arg1 token:(id)arg2 senderAuditTokenData:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000997a
- (void)tokenForTransferFromCaller:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000097a7
- (void)allowTransferFromCaller:(id)arg1 receiverAuditTokenData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000096ac
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000009696
- (void)contextWasExternalized:(id)arg1;	// IMP=0x001000000000961a
@property(readonly, nonatomic) NSData *externalizedContext;
- (void)externalizedContextWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000000949d
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 originator:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009359
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009353
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000091ec
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091e6
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00100000000091e0
- (void)retryEvent:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x001000000000908c
- (void);	// IMP=0x0010000000009076
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008eaf
- (void)setServerPropertyForOption:(long long)arg1 value:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000008ca5
- (void)serverPropertyForOption:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000008b89
- (id)_updateOptionsWithServerProperties:(id)arg1;	// IMP=0x00100000000089dc
- (void)checkCredentialSatisfied:(long long)arg1 policy:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000089c6
- (void)credentialOfType:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000089b0
- (void)setCredential:(id)arg1 type:(long long)arg2 options:(id)arg3 originator:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x00100000000088f3
- (void)isCredentialSet:(long long)arg1 originator:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000088dd
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x001000000000859a
- (void)evaluateACL:(id)arg1 operation:(id)arg2 options:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 request:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x00100000000083b3
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 uiDelegate:(id)arg3 originator:(id)arg4 request:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000008224
- (_Bool)_hasProtectedUiDelegate:(id)arg1 policy:(long long)arg2 options:(id)arg3;	// IMP=0x0010000000008218
- (_Bool)_hasProtectedOptions:(id)arg1;	// IMP=0x001000000000818d
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000008062
- (id)initWithPlugin:(id)arg1 processId:(int)arg2 userId:(unsigned int)arg3 auditSessionId:(int)arg4 externalizedContext:(id)arg5;	// IMP=0x0010000000007dfd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

