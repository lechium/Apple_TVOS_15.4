//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetLabeledSettingIntentResponseExport-Protocol.h>

@class NSString;

@interface INSetLabeledSettingIntentResponse <INSetLabeledSettingIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000045d2d9
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000045d2c0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000045d2a0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000045d240
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000045d238
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000045d232
- (id)propertiesByName;	// IMP=0x000000000045d220
- (id)_dictionaryRepresentation;	// IMP=0x000000000045cf72
@property(copy, nonatomic) NSString *errorDetail;
@property(copy, nonatomic) NSString *updatedValue;
@property(copy, nonatomic) NSString *oldValue;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000045cab4
- (long long)_intentResponseCode;	// IMP=0x000000000045ca87
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000045ca58
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000045ca29
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000045c9cb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000045c99c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000045c7ff
- (id)init;	// IMP=0x000000000045c7e9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
