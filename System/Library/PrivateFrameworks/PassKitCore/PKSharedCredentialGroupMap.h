//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, PKAppletSubcredential;

@interface PKSharedCredentialGroupMap : NSObject
{
    NSMutableDictionary *_groupIdentifierToGroupNumber;	// 8 = 0x8
    NSMutableDictionary *_sharingSessionToGroupNumber;	// 16 = 0x10
    NSMutableDictionary *_recipientIdentifierToGroupNumber;	// 24 = 0x18
    NSMutableDictionary *_groupNumberToSharedCredentials;	// 32 = 0x20
    NSMutableDictionary *_groupNumberToInvitationReceipts;	// 40 = 0x28
    NSMutableArray *_notGroupedSharedCredentials;	// 48 = 0x30
    NSMutableArray *_notGroupedInvitationReceipts;	// 56 = 0x38
    long long _groupCount;	// 64 = 0x40
    PKAppletSubcredential *_credential;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000039652f
- (void)insertInvitationReceipt:(id)arg1 intoGroup:(id)arg2;	// IMP=0x0000000000396457
- (void)insertSharedCredential:(id)arg1 intoGroup:(id)arg2;	// IMP=0x000000000039637f
- (void)assignGroupNumber:(id)arg1 toGroupIdentifier:(id)arg2 sharingSessionIdentifier:(id)arg3 recipientIdentifier:(id)arg4;	// IMP=0x00000000003962ad
- (id)groupNumberWithGroupIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 recipientIdentifier:(id)arg3;	// IMP=0x00000000003961c6
- (id)groups;	// IMP=0x00000000003959b0
- (void)insertInvitationReceipt:(id)arg1;	// IMP=0x000000000039580e
- (void)insertSharedCredential:(id)arg1;	// IMP=0x000000000039566c
- (id)initWithCredential:(id)arg1;	// IMP=0x0000000000395328

@end
