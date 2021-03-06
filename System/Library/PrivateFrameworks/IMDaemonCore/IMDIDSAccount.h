//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class IDSAccount;

@interface IMDIDSAccount
{
    IDSAccount *_idsAccount;	// 88 = 0x58
}

@property(readonly, retain, nonatomic) IDSAccount *idsAccount; // @synthesize idsAccount=_idsAccount;
- (_Bool)multiplePhoneNumbersTiedToAccount;	// IMP=0x00000000000cb73a
- (id)description;	// IMP=0x00000000000cb6da
- (_Bool)canMakeDowngradeRoutingChecks;	// IMP=0x00000000000cb6ac
- (id)accountDefaults;	// IMP=0x00000000000cb5f0
- (void)writeAccountDefaults:(id)arg1;	// IMP=0x00000000000cb20f
- (void)dealloc;	// IMP=0x00000000000cb1cd
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;	// IMP=0x00000000000cb141

@end

