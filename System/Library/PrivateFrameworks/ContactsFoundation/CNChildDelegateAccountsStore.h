//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNDelegateAccountSink-Protocol.h>
#import <ContactsFoundation/CNDelegateAccountSource-Protocol.h>

@class ACAccount, ACAccountStore, NSString;

@interface CNChildDelegateAccountsStore : NSObject <CNDelegateAccountSource, CNDelegateAccountSink>
{
    ACAccount *_parentAccount;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

+ (void)configureChildAccount:(id)arg1 withSettingsFromDelegateInfo:(id)arg2 parent:(id)arg3;	// IMP=0x000000000004b28b
+ (id)os_log;	// IMP=0x000000000004a6c7
- (void).cxx_destruct;	// IMP=0x000000000004bb52
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(readonly, nonatomic) ACAccount *parentAccount; // @synthesize parentAccount=_parentAccount;
- (id)removeAccount:(id)arg1;	// IMP=0x000000000004b928
- (id)updateAccount:(id)arg1;	// IMP=0x000000000004b484
- (id)addChildWithDelegateInfo:(id)arg1;	// IMP=0x000000000004b10a
- (_Bool)updateAccounts:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a8e9
- (id)primaryAccount;	// IMP=0x000000000004a8cd
- (id)delegateAccounts;	// IMP=0x000000000004a86f
@property(readonly, copy) NSString *description;
- (id)initWithParentAccount:(id)arg1 accountStore:(id)arg2;	// IMP=0x000000000004a723

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

