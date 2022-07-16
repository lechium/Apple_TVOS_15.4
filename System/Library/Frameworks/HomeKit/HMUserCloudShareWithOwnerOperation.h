//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class CKContainer, CKShare, HMUser, NSObject, NSString, NSUUID;
@protocol OS_os_log;

@interface HMUserCloudShareWithOwnerOperation : NSOperation <HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _allowWriteAccess;	// 16 = 0x10
    CDUnknownBlockType _completion;	// 24 = 0x18
    NSUUID *_operationID;	// 32 = 0x20
    HMUser *_currentUser;	// 40 = 0x28
    HMUser *_ownerUser;	// 48 = 0x30
    CKShare *_share;	// 56 = 0x38
    CKContainer *_container;	// 64 = 0x40
    CDUnknownBlockType _analyticsEventSender;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00000000001b8b7e
- (void).cxx_destruct;	// IMP=0x00000000001b69e3
@property(readonly) CDUnknownBlockType analyticsEventSender; // @synthesize analyticsEventSender=_analyticsEventSender;
@property(readonly, nonatomic) _Bool allowWriteAccess; // @synthesize allowWriteAccess=_allowWriteAccess;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(readonly, nonatomic) HMUser *ownerUser; // @synthesize ownerUser=_ownerUser;
@property(readonly, nonatomic) HMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) NSUUID *operationID; // @synthesize operationID=_operationID;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
- (id)logIdentifier;	// IMP=0x00000000001b68b8
- (void)main;	// IMP=0x00000000001b641c
- (void)sendShareToOwner:(id)arg1 from:(id)arg2 savedOwnerAsParticipant:(id)arg3 share:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001b60e4
- (void)removeOwnerAsParticipant:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5e81
- (void)saveShareAndObtainSavedOwner:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b5c30
- (void)fetchParticipantForLookupInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001b593c
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(_Bool)arg4 currentUser:(id)arg5 analyticsEventSender:(CDUnknownBlockType)arg6;	// IMP=0x00000000001b57b2
- (id)initWithShare:(id)arg1 container:(id)arg2 ownerUser:(id)arg3 allowWriteAccess:(_Bool)arg4 currentUser:(id)arg5;	// IMP=0x00000000001b5790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

