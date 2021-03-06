//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <CoreHAP/HAPEncryptedSession-Protocol.h>
#import <CoreHAP/HMFLogging-Protocol.h>

@class HAPSecuritySessionEncryption, NSData, NSDate, NSDictionary, NSObject, NSString;
@protocol HAPSecuritySessionDelegate, HMFLocking, OS_dispatch_queue;

@interface HAPSecuritySession : HMFObject <HMFLogging, HAPEncryptedSession>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    unsigned long long _state;	// 16 = 0x10
    unsigned long long _resumeSessionID;	// 24 = 0x18
    NSData *_broadcastKey;	// 32 = 0x20
    NSDictionary *_additionalDerivedKeys;	// 40 = 0x28
    NSDate *_sessionStartTime;	// 48 = 0x30
    id <HAPSecuritySessionDelegate> _delegate;	// 56 = 0x38
    unsigned long long _role;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_queue;	// 72 = 0x48
    struct PairingSessionPrivate *_pairingSession;	// 80 = 0x50
    HAPSecuritySessionEncryption *_encryption;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x000000000005f268
- (void).cxx_destruct;	// IMP=0x000000000005dc6f
@property(retain, nonatomic) HAPSecuritySessionEncryption *encryption; // @synthesize encryption=_encryption;
@property(nonatomic) struct PairingSessionPrivate *pairingSession; // @synthesize pairingSession=_pairingSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long role; // @synthesize role=_role;
@property(readonly) __weak id <HAPSecuritySessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
- (id)decryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005d8c2
- (id)encryptData:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x000000000005d6f7
- (void)_closeWithError:(id)arg1;	// IMP=0x000000000005d58d
- (void)closeWithError:(id)arg1;	// IMP=0x000000000005d4dc
- (void)close;	// IMP=0x000000000005d46b
- (void)_notifyOpened;	// IMP=0x000000000005d3ce
- (void)_notifyOpening;	// IMP=0x000000000005d331
- (void)reallyOpen;	// IMP=0x000000000005d2c0
- (void)open;	// IMP=0x000000000005d101
- (void)_handleSetupExchangeComplete;	// IMP=0x000000000005c7c9
- (id)_broadcastInfo;	// IMP=0x000000000005c7a4
- (id)_outputInfo;	// IMP=0x000000000005c73b
- (id)_inputInfo;	// IMP=0x000000000005c6d2
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;	// IMP=0x000000000005c5f6
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;	// IMP=0x000000000005c51a
- (void)_initiateClientSessionSetupExchange;	// IMP=0x000000000005c42e
- (id)_handlePeerPairingIdentityRequestWithIdentifier:(id)arg1 status:(int *)arg2;	// IMP=0x000000000005c101
- (id)_handleLocalPairingIdentityRequestWithStatus:(int *)arg1;	// IMP=0x000000000005be10
- (_Bool)_initializeSetupSession:(unsigned long long)arg1;	// IMP=0x000000000005bb80
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, getter=isOpening) _Bool opening;
@property(readonly, getter=isOpen) _Bool open;
- (void)setResumeSessionID:(unsigned long long)arg1;	// IMP=0x000000000005b8e2
@property(readonly, nonatomic) unsigned long long resumeSessionID; // @synthesize resumeSessionID=_resumeSessionID;
- (void)setAdditionalDerivedKeys:(id)arg1;	// IMP=0x000000000005b720
@property(readonly) NSDictionary *additionalDerivedKeys; // @synthesize additionalDerivedKeys=_additionalDerivedKeys;
- (void)setBroadcastKey:(id)arg1;	// IMP=0x000000000005b529
@property(readonly) NSData *broadcastKey; // @synthesize broadcastKey=_broadcastKey;
@property unsigned long long state; // @synthesize state=_state;
- (void)dealloc;	// IMP=0x000000000005b1b9
- (id)initWithRole:(unsigned long long)arg1 resumeSessionID:(unsigned long long)arg2 delegate:(id)arg3;	// IMP=0x000000000005af92

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

