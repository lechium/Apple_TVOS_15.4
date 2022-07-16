//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSaveHealthSampleIntentResponseExport-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INSaveHealthSampleIntentResponse <INSaveHealthSampleIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000078dc1
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000078da8
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000078d88
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000078d28
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000078d20
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000078d1a
- (id)propertiesByName;	// IMP=0x0000000000078d08
- (id)_dictionaryRepresentation;	// IMP=0x0000000000078840
@property(copy, nonatomic) NSString *punchoutUrl;
@property(copy, nonatomic) NSArray *valuesUserProvidedUnits;
@property(copy, nonatomic) NSString *userProvidedUnit;
@property(copy, nonatomic) NSArray *valuesDefaultUnits;
@property(copy, nonatomic) NSString *defaultUnit;
@property(copy, nonatomic) INDateComponentsRange *recordDate;
@property(copy, nonatomic) NSArray *sampleUuids;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000077db0
- (long long)_intentResponseCode;	// IMP=0x0000000000077d83
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000077d54
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000077d25
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000077cc7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000077c98
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000077afa
- (id)init;	// IMP=0x0000000000077ae4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
