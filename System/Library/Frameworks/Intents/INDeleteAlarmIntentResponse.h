//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteAlarmIntentResponseExport-Protocol.h>

@class NSString;

@interface INDeleteAlarmIntentResponse <INDeleteAlarmIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000491313
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000491308
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004912e8
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000491294
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049128c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000491286
- (id)propertiesByName;	// IMP=0x0000000000491274
- (id)_dictionaryRepresentation;	// IMP=0x0000000000491155
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000491080
- (long long)_intentResponseCode;	// IMP=0x0000000000491053
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000491024
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000490ff5
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000490f97
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000490f68
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000490df2
- (id)init;	// IMP=0x0000000000490ddc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
