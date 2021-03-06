//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPerAccountVPNPayloadProtocol-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCLDAPAccountPayload <MCPerAccountVPNPayloadProtocol>
{
    NSString *_accountDescription;	// 80 = 0x50
    NSString *_hostname;	// 88 = 0x58
    NSString *_username;	// 96 = 0x60
    NSString *_password;	// 104 = 0x68
    _Bool _useSSL;	// 112 = 0x70
    NSArray *_searchSettings;	// 120 = 0x78
    NSString *_accountPersistentUUID;	// 128 = 0x80
    NSString *_VPNUUID;	// 136 = 0x88
    NSString *_acAccountIdentifier;	// 144 = 0x90
    NSDictionary *_communicationServiceRules;	// 152 = 0x98
    NSNumber *_useSSLNum;	// 160 = 0xa0
}

+ (id)localizedPluralForm;	// IMP=0x0000000000053575
+ (id)localizedSingularForm;	// IMP=0x0000000000053562
+ (id)typeStrings;	// IMP=0x0000000000053542
- (void).cxx_destruct;	// IMP=0x0000000000054697
@property(readonly, nonatomic) NSNumber *useSSLNum; // @synthesize useSSLNum=_useSSLNum;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(retain, nonatomic) NSString *acAccountIdentifier; // @synthesize acAccountIdentifier=_acAccountIdentifier;
@property(readonly, retain, nonatomic) NSString *VPNUUID; // @synthesize VPNUUID=_VPNUUID;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, retain, nonatomic) NSArray *searchSettings; // @synthesize searchSettings=_searchSettings;
@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (_Bool)containsSensitiveUserInformation;	// IMP=0x000000000005452c
- (id)payloadDescriptionKeyValueSections;	// IMP=0x0000000000054135
- (id)subtitle2Description;	// IMP=0x00000000000540a3
- (id)subtitle2Label;	// IMP=0x000000000005401c
- (id)subtitle1Description;	// IMP=0x000000000005400a
- (id)subtitle1Label;	// IMP=0x0000000000053fb1
- (id)restrictions;	// IMP=0x0000000000053f4e
- (id)stubDictionary;	// IMP=0x0000000000053d82
- (id)verboseDescription;	// IMP=0x0000000000053bab
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000053588
@property(readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;

// Remaining properties
@property(readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property(readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;

@end

