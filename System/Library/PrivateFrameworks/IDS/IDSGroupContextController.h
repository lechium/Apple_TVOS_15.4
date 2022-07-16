//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSGroupContextNotifyingObserverDelegate-Protocol.h>
#import <IDS/IDSTransactionLogTaskHandlerDelegate-Protocol.h>

@class CUTPromiseSeal, NSString;
@protocol IDSGroupContextControllerDelegate, OS_dispatch_queue;

@interface IDSGroupContextController : NSObject <IDSTransactionLogTaskHandlerDelegate, IDSGroupContextNotifyingObserverDelegate>
{
    id <IDSGroupContextControllerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CUTPromiseSeal *_seal;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000058079
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) CUTPromiseSeal *seal; // @synthesize seal=_seal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) id <IDSGroupContextControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_contentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000057e36
- (void)qGroupContextWithDeviceIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057a1e
- (void)qSetupSeal;	// IMP=0x0000000000057999
- (void)didReceiveRegistrationIdentityUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000578a0
- (void)didReceiveDecryptionFailureForGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057711
- (void)didUpdateGroup:(id)arg1 withNewGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005753f
- (void)didCacheGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000573b0
- (void)didCreateGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000057221
- (void)taskHandler:(id)arg1 accountInfoForAliases:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056f9c
- (void)persistedTokenForTaskHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000056f8a
- (void)taskHandler:(id)arg1 persistToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056ed7
- (void)taskHandler:(id)arg1 messagesFromToken:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056bd0
- (void)taskHandler:(id)arg1 participantsWithDestinations:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000056a26
- (void)taskHandler:(id)arg1 groupsWithGroupIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000562d1
- (void)scheduleTransactionLogTask:(id)arg1;	// IMP=0x0000000000056203
- (void)groupContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000056105
- (void)dealloc;	// IMP=0x0000000000056062
- (id)initWithServiceName:(id)arg1 queue:(id)arg2 delegate:(id)arg3;	// IMP=0x0000000000055f46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

