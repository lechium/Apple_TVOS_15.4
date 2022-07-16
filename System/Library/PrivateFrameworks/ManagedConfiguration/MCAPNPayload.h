//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MCAPNPayload
{
    NSArray *_apnInfos;	// 80 = 0x50
    _Bool _wasInstalled;	// 88 = 0x58
}

+ (id)apnDomainName;	// IMP=0x000000000004416b
+ (id)localizedPluralForm;	// IMP=0x0000000000044158
+ (id)localizedSingularForm;	// IMP=0x0000000000044145
+ (id)typeStrings;	// IMP=0x0000000000044125
- (void).cxx_destruct;	// IMP=0x0000000000045ea7
@property(nonatomic) _Bool wasInstalled; // @synthesize wasInstalled=_wasInstalled;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x00000000000457d4
- (id)subtitle2Description;	// IMP=0x0000000000045747
- (id)subtitle2Label;	// IMP=0x0000000000045736
- (id)subtitle1Description;	// IMP=0x00000000000456a9
- (id)subtitle1Label;	// IMP=0x0000000000045698
- (id)verboseDescription;	// IMP=0x0000000000045619
- (id)stubDictionary;	// IMP=0x0000000000045497
- (id)_strippedAPNDefaults;	// IMP=0x00000000000452aa
- (id)apnDefaults;	// IMP=0x00000000000450b4
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000044c56
- (void)_finishInitializationWithContents:(id)arg1;	// IMP=0x00000000000446d7
- (_Bool)_checkForValidContents:(id)arg1 outError:(id *)arg2;	// IMP=0x00000000000441fc
- (id)_validationErrorType:(long long)arg1 forInvalidKey:(id)arg2;	// IMP=0x0000000000044178

@end

