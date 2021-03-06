//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKBusinessChatContext-Protocol.h>

@class NSArray, NSString, PKAccount, PKFeatureApplication;

@interface PKBusinessChatInvitationContext : NSObject <PKBusinessChatContext>
{
    NSString *_businessChatIdentifier;	// 8 = 0x8
    PKAccount *_account;	// 16 = 0x10
    PKFeatureApplication *_invitation;	// 24 = 0x18
    NSArray *_pendingInvitations;	// 32 = 0x20
    NSArray *_featureApplications;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000583f9
- (id)bodyText;	// IMP=0x00000000000583dc
- (_Bool)requiresAuthorization;	// IMP=0x00000000000583d4
- (id)groupParameters;	// IMP=0x0000000000058332
- (id)intentParameters;	// IMP=0x0000000000057f5e
- (id)businessIdentifier;	// IMP=0x0000000000057f50
- (id)initWithBusinessChatIdentifier:(id)arg1 account:(id)arg2 invitation:(id)arg3 pendingInvitations:(id)arg4 featureApplications:(id)arg5;	// IMP=0x0000000000057dbd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

