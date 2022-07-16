//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, PKAccountUserPreferences;

@interface PKAccountWebServiceUpdateAccountUserPreferencesRequest
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSString *_accountUserAltDSID;	// 16 = 0x10
    PKAccountUserPreferences *_accountUserPreferences;	// 24 = 0x18
    unsigned long long _accountUserAccessLevel;	// 32 = 0x20
    NSURL *_baseURL;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000096753
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(nonatomic) unsigned long long accountUserAccessLevel; // @synthesize accountUserAccessLevel=_accountUserAccessLevel;
@property(retain, nonatomic) PKAccountUserPreferences *accountUserPreferences; // @synthesize accountUserPreferences=_accountUserPreferences;
@property(copy, nonatomic) NSString *accountUserAltDSID; // @synthesize accountUserAltDSID=_accountUserAltDSID;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x0000000000096245

@end
