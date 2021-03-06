//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateAlarmIntentResponseExport-Protocol.h>

@class INAlarm, NSString;

@interface INCreateAlarmIntentResponse <INCreateAlarmIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000049d087
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000049d07c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000049d05c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000049d008
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049d000
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000049cffa
- (id)propertiesByName;	// IMP=0x000000000049cfe8
- (id)_dictionaryRepresentation;	// IMP=0x000000000049cde8
@property(nonatomic) long long successCode;
@property(copy, nonatomic) INAlarm *createdAlarm;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000049ca54
- (long long)_intentResponseCode;	// IMP=0x000000000049ca27
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049c9f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000049c9c9
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000049c96b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049c93c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049c7c3
- (id)init;	// IMP=0x000000000049c7ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

