//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload
{
    NSMutableDictionary *_restrictions;	// 80 = 0x50
    NSString *_iCloudPassword;	// 88 = 0x58
}

+ (id)localizedPluralForm;	// IMP=0x0000000000066555
+ (id)localizedSingularForm;	// IMP=0x0000000000066542
+ (id)typeStrings;	// IMP=0x0000000000066522
- (void).cxx_destruct;	// IMP=0x000000000006d47b
@property(retain, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
- (id)filterForUserEnrollmentOutError:(id *)arg1;	// IMP=0x000000000006d0a0
- (id)installationWarnings;	// IMP=0x000000000006c908
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(_Bool)arg3;	// IMP=0x000000000006c7b5
- (id)localizedRestrictionStrings;	// IMP=0x000000000006ba5c
- (id)_defaultValueRestrictions;	// IMP=0x000000000006b3fb
- (id)_unionStrings;	// IMP=0x000000000006b2e3
- (id)_intersectionStrings;	// IMP=0x000000000006b1d0
- (id)_enforcedFeatureStrings;	// IMP=0x000000000006a9a9
- (id)_restrictedFeatureStrings;	// IMP=0x0000000000068dbb
- (id)stubDictionary;	// IMP=0x0000000000068661
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000666bf
- (id)_invalidFieldErrorWithFieldName:(id)arg1;	// IMP=0x000000000006663b
- (id)restrictions;	// IMP=0x0000000000066568

@end
