//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NEVPNApp
{
    _Bool _noRestriction;	// 8 = 0x8
    _Bool _restrictDomains;	// 9 = 0x9
    NSArray *_appRules;	// 16 = 0x10
    NSArray *_excludedDomains;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001aced0
- (void).cxx_destruct;	// IMP=0x00000000001af7dc
@property(copy) NSArray *excludedDomains; // @synthesize excludedDomains=_excludedDomains;
@property _Bool restrictDomains; // @synthesize restrictDomains=_restrictDomains;
@property _Bool noRestriction; // @synthesize noRestriction=_noRestriction;
@property(copy) NSArray *appRules; // @synthesize appRules=_appRules;
- (void)updateAppRulesForUID:(unsigned int)arg1;	// IMP=0x00000000001af21b
- (_Bool)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;	// IMP=0x00000000001aebdc
- (id)copyUniqueSigningIdentifiers;	// IMP=0x00000000001ae93f
- (id)copyAppRuleIDs;	// IMP=0x00000000001ae763
- (_Bool)removeAppRuleByID:(id)arg1;	// IMP=0x00000000001ae61b
- (id)copyAppRuleBySigningIdentifier:(id)arg1;	// IMP=0x00000000001ae609
- (id)copyAppRuleByID:(id)arg1;	// IMP=0x00000000001ae3e2
- (id)copyLegacyDictionary;	// IMP=0x00000000001ae346
- (id)initFromLegacyDictionary:(id)arg1;	// IMP=0x00000000001ae001
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001adedd
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001ad2e8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ad199
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001ad0c5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001acf4e
- (id)init;	// IMP=0x00000000001aced8

@end
