//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00000000001abac0
- (void).cxx_destruct;	// IMP=0x00000000001ac1ef
@property(readonly, nonatomic) ACAccountStore *accountStore;
- (id)_primaryAppleAccount;	// IMP=0x00000000001ac164
- (id)_aidaAccount;	// IMP=0x00000000001ac114
- (void)renewAppleAccountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001abd3c
@property(readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;

@end

