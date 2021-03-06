//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem
{
    NSString *_payloadLDAPSearchSettingDescription;	// 16 = 0x10
    NSString *_payloadLDAPSearchSettingSearchBase;	// 24 = 0x18
    NSString *_payloadLDAPSearchSettingScope;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg1;	// IMP=0x0000000000005fc8
+ (id)buildWithLDAPSearchSettingDescription:(id)arg1 withLDAPSearchSettingSearchBase:(id)arg2 withLDAPSearchSettingScope:(id)arg3;	// IMP=0x0000000000005f0a
+ (id)allowedPayloadKeys;	// IMP=0x0000000000005e51
- (void).cxx_destruct;	// IMP=0x0000000000006477
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingScope; // @synthesize payloadLDAPSearchSettingScope=_payloadLDAPSearchSettingScope;
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase; // @synthesize payloadLDAPSearchSettingSearchBase=_payloadLDAPSearchSettingSearchBase;
@property(copy, nonatomic) NSString *payloadLDAPSearchSettingDescription; // @synthesize payloadLDAPSearchSettingDescription=_payloadLDAPSearchSettingDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000635f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000006279
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000601e

@end

