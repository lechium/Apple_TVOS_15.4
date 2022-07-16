//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ManagedConfiguration/MCPerAccountVPNPayloadProtocol-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface MCCardDAVAccountPayload <MCPerAccountVPNPayloadProtocol>
{
    NSString *_accountDescription;	// 80 = 0x50
    NSString *_hostname;	// 88 = 0x58
    NSString *_username;	// 96 = 0x60
    NSString *_password;	// 104 = 0x68
    NSString *_principalURL;	// 112 = 0x70
    _Bool _useSSL;	// 120 = 0x78
    int _port;	// 124 = 0x7c
    NSString *_accountPersistentUUID;	// 128 = 0x80
    NSString *_VPNUUID;	// 136 = 0x88
    NSString *_acAccountIdentifier;	// 144 = 0x90
    NSDictionary *_communicationServiceRules;	// 152 = 0x98
    NSNumber *_useSSLNum;	// 160 = 0xa0
    NSNumber *_portNum;	// 168 = 0xa8
}

+ (id)localizedPluralForm;	// IMP=0x0000000000054a74
+ (id)localizedSingularForm;	// IMP=0x0000000000054a61
+ (id)typeStrings;	// IMP=0x0000000000054a41
- (void).cxx_destruct;	// IMP=0x0000000000055f9a
@property(readonly, nonatomic) NSNumber *portNum; // @synthesize portNum=_portNum;
@property(readonly, nonatomic) NSNumber *useSSLNum; // @synthesize useSSLNum=_useSSLNum;
@property(readonly, nonatomic) NSDictionary *communicationServiceRules; // @synthesize communicationServiceRules=_communicationServiceRules;
@property(retain, nonatomic) NSString *acAccountIdentifier; // @synthesize acAccountIdentifier=_acAccountIdentifier;
@property(readonly, retain, nonatomic) NSString *VPNUUID; // @synthesize VPNUUID=_VPNUUID;
@property(copy, nonatomic) NSString *accountPersistentUUID; // @synthesize accountPersistentUUID=_accountPersistentUUID;
@property(readonly, nonatomic) int port; // @synthesize port=_port;
@property(readonly, nonatomic) _Bool useSSL; // @synthesize useSSL=_useSSL;
@property(readonly, retain, nonatomic) NSString *principalURL; // @synthesize principalURL=_principalURL;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(readonly, retain, nonatomic) NSString *accountDescription; // @synthesize accountDescription=_accountDescription;
- (_Bool)containsSensitiveUserInformation;	// IMP=0x0000000000055e14
- (id)payloadDescriptionKeyValueSections;	// IMP=0x00000000000558dc
- (id)subtitle2Description;	// IMP=0x000000000005584a
- (id)subtitle2Label;	// IMP=0x00000000000557c3
- (id)subtitle1Description;	// IMP=0x00000000000557b1
- (id)subtitle1Label;	// IMP=0x0000000000055758
- (id)restrictions;	// IMP=0x00000000000556f5
- (id)stubDictionary;	// IMP=0x00000000000554e2
- (id)verboseDescription;	// IMP=0x00000000000552e3
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000054a87
@property(readonly, retain, nonatomic) NSArray *contactsAccountIdentifiers;

// Remaining properties
@property(readonly, retain, nonatomic) NSArray *calendarAccountIdentifiers;
@property(readonly, retain, nonatomic) NSArray *mailAccountIdentifiers;

@end

