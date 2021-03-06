//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LocalAuthentication/NSSecureCoding-Protocol.h>

@class LAClient, NSData, NSNumber, NSString;
@protocol LAPrearmContextXPC, LAUIDelegate;

@interface LAContext : NSObject <NSSecureCoding>
{
    LAClient *_client;	// 8 = 0x8
    id <LAPrearmContextXPC> _prearmContext;	// 16 = 0x10
    unsigned int _instanceId;	// 24 = 0x18
    NSNumber *_maxBiometryFailures;	// 32 = 0x20
    NSData *_evaluatedPolicyDomainState;	// 40 = 0x28
    double _touchIDAuthenticationAllowableReuseDuration;	// 48 = 0x30
    NSString *_localizedReason;	// 56 = 0x38
    NSData *_externalizedContext;	// 64 = 0x40
    NSNumber *_touchIDAuthenticationRetryLimit;	// 72 = 0x48
}

+ (unsigned int)newCommandId;	// IMP=0x000000000000c978
+ (unsigned int)newInstanceId;	// IMP=0x000000000000c964
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006daf
+ (id)_optionsForEvent:(long long)arg1;	// IMP=0x00000000000064fb
+ (void)notifyEvent:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000614f
+ (void)notifyEvent:(long long)arg1;	// IMP=0x0000000000006134
- (void).cxx_destruct;	// IMP=0x000000000000cbc7
@property(readonly, nonatomic) unsigned int instanceId; // @synthesize instanceId=_instanceId;
@property(retain, nonatomic) NSNumber *touchIDAuthenticationRetryLimit; // @synthesize touchIDAuthenticationRetryLimit=_touchIDAuthenticationRetryLimit;
@property(retain, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property(copy, nonatomic) NSString *localizedReason; // @synthesize localizedReason=_localizedReason;
@property(nonatomic) double touchIDAuthenticationAllowableReuseDuration; // @synthesize touchIDAuthenticationAllowableReuseDuration=_touchIDAuthenticationAllowableReuseDuration;
@property(retain, nonatomic) NSData *evaluatedPolicyDomainState; // @synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState;
@property(retain, nonatomic) NSNumber *maxBiometryFailures; // @synthesize maxBiometryFailures=_maxBiometryFailures;
- (void)setOptionEventProcessing:(id)arg1;	// IMP=0x000000000000cb13
- (id)optionEventProcessing;	// IMP=0x000000000000cafc
@property(nonatomic) _Bool interactionNotAllowed;
- (void)setOptionCallerPID:(id)arg1;	// IMP=0x000000000000ca36
- (id)optionCallerPID;	// IMP=0x000000000000ca1f
- (void)setOptionCallerName:(id)arg1;	// IMP=0x000000000000ca05
- (id)optionCallerName;	// IMP=0x000000000000c9ee
- (void)setOptionTimeout:(id)arg1;	// IMP=0x000000000000c9d4
- (id)optionTimeout;	// IMP=0x000000000000c9bd
- (void)setOptionNotInteractive:(id)arg1;	// IMP=0x000000000000c9a3
- (id)optionNotInteractive;	// IMP=0x000000000000c98c
- (void)bootstrapServiceType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c94e
@property(nonatomic) __weak id <LAUIDelegate> uiDelegate;
- (id)uuid;	// IMP=0x000000000000c90c
@property(copy, nonatomic) NSString *localizedCancelTitle;
@property(copy, nonatomic) NSString *localizedFallbackTitle;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2 log:(long long)arg3;	// IMP=0x000000000000c4dd
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;	// IMP=0x000000000000c4c5
- (id)_serverPropertyValueForOption:(long long)arg1 log:(long long)arg2;	// IMP=0x000000000000c2b6
- (id)_serverPropertyValueForOption:(long long)arg1;	// IMP=0x000000000000c29f
- (_Bool)checkContextValidWithError:(id *)arg1;	// IMP=0x000000000000c229
- (void)setShowingCoachingHint:(_Bool)arg1 event:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bf3e
- (void)authMethodWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bc4f
- (void)resetWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b9d4
- (void)prearmTouchIDWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b722
- (_Bool)isCredentialSet:(long long)arg1;	// IMP=0x000000000000b388
- (id)credentialOfType:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000b0d8
- (void)credentialOfType:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000000adaa
- (void)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned int)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000000aa67
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000000a9d4
- (_Bool)_setCredential:(id)arg1 type:(long long)arg2 log:(long long)arg3 cid:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x000000000000a548
- (_Bool)setCredential:(id)arg1 type:(long long)arg2 error:(id *)arg3;	// IMP=0x000000000000a4c9
- (_Bool)setCredential:(id)arg1 type:(long long)arg2;	// IMP=0x000000000000a450
- (id)evaluateAccessControl:(struct __SecAccessControl *)arg1 aksOperation:(void *)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000000a222
- (id)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000009fc1
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009d73
- (void)_evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(id)arg2 options:(id)arg3 log:(long long)arg4 cid:(unsigned int)arg5 synchronous:(_Bool)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x0000000000009983
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 aksOperation:(void *)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x00000000000098d8
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000000980a
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000000009446
- (void)pauseProcessedEvent:(long long)arg1 pause:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000009177
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008ec5
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000000008bcf
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00000000000088c5
- (_Bool)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000085d3
- (id)evaluationMechanismsForAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000008384
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000008141
- (id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008032
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007e40
- (id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2;	// IMP=0x0000000000007d1e
- (id)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned int)arg4 error:(id *)arg5;	// IMP=0x0000000000007b17
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000007a7a
- (id)_hashWithBundleIdentifier:(id)arg1;	// IMP=0x0000000000007929
- (void)_evaluatePolicy:(long long)arg1 options:(id)arg2 log:(long long)arg3 cid:(unsigned int)arg4 synchronous:(_Bool)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000000000075d2
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000000007531
- (void)invalidate;	// IMP=0x00000000000072d6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006db7
- (unsigned long long)hash;	// IMP=0x0000000000006d67
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006c91
- (id)description;	// IMP=0x0000000000006ba5
- (void)dealloc;	// IMP=0x0000000000006adc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006831
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;	// IMP=0x00000000000067c9
- (id)initWithUIDelegate:(id)arg1;	// IMP=0x00000000000067b2
- (id)initWithExternalizedContext:(id)arg1 userSession:(unsigned int *)arg2;	// IMP=0x000000000000652b
- (id)initWithExternalizedContext:(id)arg1;	// IMP=0x0000000000006517
- (id)init;	// IMP=0x0000000000006503

@end

