//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSSet, NSString, PKAppletSubcredential, PKAppletSubcredentialEntitlement;

@interface PKSharedCredentialGroup : NSObject <NSSecureCoding>
{
    _Bool _localGroup;	// 8 = 0x8
    PKAppletSubcredential *_credential;	// 16 = 0x10
    NSSet *_sharedCredentials;	// 24 = 0x18
    NSSet *_receipts;	// 32 = 0x20
    NSString *_recipientHandle;	// 40 = 0x28
    NSString *_recipientName;	// 48 = 0x30
    PKAppletSubcredentialEntitlement *_entitlement;	// 56 = 0x38
    long long _state;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000033d240
- (void).cxx_destruct;	// IMP=0x000000000033d4a9
@property(readonly, nonatomic, getter=isLocalGroup) _Bool localGroup; // @synthesize localGroup=_localGroup;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) PKAppletSubcredentialEntitlement *entitlement; // @synthesize entitlement=_entitlement;
@property(readonly, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(readonly, nonatomic) NSString *recipientHandle; // @synthesize recipientHandle=_recipientHandle;
@property(readonly, nonatomic) NSSet *receipts; // @synthesize receipts=_receipts;
@property(readonly, nonatomic) NSSet *sharedCredentials; // @synthesize sharedCredentials=_sharedCredentials;
@property(readonly, nonatomic) PKAppletSubcredential *credential; // @synthesize credential=_credential;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000033d2cb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000033d248
- (void)parseGroupItems;	// IMP=0x000000000033cd6c
- (id)initWithCredential:(id)arg1 sharedCredentials:(id)arg2 receipts:(id)arg3;	// IMP=0x000000000033ccb0

@end
