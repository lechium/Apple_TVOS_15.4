//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface AAStorableLoginContext : NSObject
{
    _Bool _beneficiaryLogin;	// 8 = 0x8
    NSString *_appleID;	// 16 = 0x10
    NSString *_altDSID;	// 24 = 0x18
    NSString *_DSID;	// 32 = 0x20
    NSString *_rawPassword;	// 40 = 0x28
    NSString *_continuationKey;	// 48 = 0x30
    NSString *_passwordResetKey;	// 56 = 0x38
    NSString *_cloudKitToken;	// 64 = 0x40
    NSString *_firstName;	// 72 = 0x48
    NSString *_middleName;	// 80 = 0x50
    NSString *_lastName;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000007cf63
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(nonatomic, getter=isBeneficiaryLogin) _Bool beneficiaryLogin; // @synthesize beneficiaryLogin=_beneficiaryLogin;
@property(copy, nonatomic) NSString *cloudKitToken; // @synthesize cloudKitToken=_cloudKitToken;
@property(copy, nonatomic) NSString *passwordResetKey; // @synthesize passwordResetKey=_passwordResetKey;
@property(copy, nonatomic) NSString *continuationKey; // @synthesize continuationKey=_continuationKey;
@property(copy, nonatomic) NSString *rawPassword; // @synthesize rawPassword=_rawPassword;
@property(copy, nonatomic) NSString *DSID; // @synthesize DSID=_DSID;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000000007cdbc

@end
