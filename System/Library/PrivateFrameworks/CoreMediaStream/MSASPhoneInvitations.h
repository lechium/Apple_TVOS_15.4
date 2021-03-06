//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/IDSServiceDelegate-Protocol.h>

@class IDSService, MSASAlbum, MSASStateMachine, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate>
{
    MSASStateMachine *_stateMachine;	// 8 = 0x8
    MSASAlbum *_album;	// 16 = 0x10
    IDSService *_idsService;	// 24 = 0x18
    NSMutableDictionary *_sendMessageIdentifierToPhone;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000002841
@property(retain, nonatomic) NSMutableDictionary *sendMessageIdentifierToPhone; // @synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property(retain, nonatomic) MSASAlbum *album; // @synthesize album=_album;
@property(retain, nonatomic) MSASStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000000247a
- (void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2;	// IMP=0x0000000000001c88
- (void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3;	// IMP=0x0000000000001b37
- (id)init;	// IMP=0x0000000000001a64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

