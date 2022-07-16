//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INQueryHealthSampleIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INQueryHealthSampleIntentResponse <INQueryHealthSampleIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000015c75b
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000015c744
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000015c724
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000015c6c4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015c6bc
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000015c6b6
- (id)propertiesByName;	// IMP=0x000000000015c6a4
- (id)_dictionaryRepresentation;	// IMP=0x000000000015c501
@property(copy, nonatomic) NSArray *resultValues;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000015c2b4
- (long long)_intentResponseCode;	// IMP=0x000000000015c287
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015c258
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015c229
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000015c1cb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000015c19c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000015c016
- (id)init;	// IMP=0x000000000015c000

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
