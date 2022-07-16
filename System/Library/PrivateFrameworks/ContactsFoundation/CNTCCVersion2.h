//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNTCC-Protocol.h>
#import <ContactsFoundation/CNTCCSettings-Protocol.h>
#import <ContactsFoundation/CNTCCSimulation-Protocol.h>

@class NSNumber;
@protocol OS_tcc_message_options, OS_tcc_server, OS_tcc_service;

@interface CNTCCVersion2 : NSObject <CNTCC, CNTCCSettings, CNTCCSimulation>
{
    NSObject<OS_tcc_server> *_server;	// 8 = 0x8
    NSObject<OS_tcc_service> *_service;	// 16 = 0x10
    NSObject<OS_tcc_message_options> *_messageOptionsForSyncNoPrompt;	// 24 = 0x18
    NSObject<OS_tcc_message_options> *_messageOptionsForAsyncPrompt;	// 32 = 0x20
    NSNumber *_simulateStatus;	// 40 = 0x28
    NSNumber *_isUnitTestingCachedValue;	// 48 = 0x30
}

+ (id)os_log;	// IMP=0x000000000003b8b7
- (void).cxx_destruct;	// IMP=0x000000000003c751
@property(retain, nonatomic) NSNumber *isUnitTestingCachedValue; // @synthesize isUnitTestingCachedValue=_isUnitTestingCachedValue;
@property(retain, nonatomic) NSNumber *simulateStatus; // @synthesize simulateStatus=_simulateStatus;
@property(readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForAsyncPrompt; // @synthesize messageOptionsForAsyncPrompt=_messageOptionsForAsyncPrompt;
@property(readonly, nonatomic) NSObject<OS_tcc_message_options> *messageOptionsForSyncNoPrompt; // @synthesize messageOptionsForSyncNoPrompt=_messageOptionsForSyncNoPrompt;
@property(readonly, nonatomic) NSObject<OS_tcc_service> *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSObject<OS_tcc_server> *server; // @synthesize server=_server;
- (id)isUnitTestingImpl;	// IMP=0x000000000003c606
- (_Bool)isUnitTesting;	// IMP=0x000000000003c544
- (void)stopSimulation;	// IMP=0x000000000003c530
- (void)simulateStatus:(long long)arg1;	// IMP=0x000000000003c4dd
- (void)saveAuthorizationRecord:(id)arg1;	// IMP=0x000000000003c38f
- (id)authorizationRecordForBundleIdentifier:(id)arg1;	// IMP=0x000000000003c268
- (id)authorizationRecords;	// IMP=0x000000000003c0e0
- (void)requestAuthorizationWithCredential:(id)arg1 messageOptions:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000003bf1b
- (id)credentialForAuditToken:(id)arg1 assumedIdentity:(id)arg2;	// IMP=0x000000000003be40
- (void)requestAuthorization:(long long)arg1 auditToken:(id)arg2 assumedIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000003bcd7
- (_Bool)isAuthorizationRestricted;	// IMP=0x000000000003bc76
- (long long)checkAuthorizationStatusOfAuditToken:(id)arg1 assumedIdentity:(id)arg2;	// IMP=0x000000000003ba9c
- (long long)checkAuthorizationStatusOfAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000003ba2c
- (long long)checkAuthorizationStatusOfCurrentProcessUsingAssumedIdentity:(id)arg1;	// IMP=0x000000000003ba15
- (long long)checkAuthorizationStatusOfCurrentProcess;	// IMP=0x000000000003b9ff
- (id)init;	// IMP=0x000000000003b913

@end

