//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSnoozeAlarmIntentResponseExport-Protocol.h>

@class NSString;

@interface INSnoozeAlarmIntentResponse <INSnoozeAlarmIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000049d633
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000049d628
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000049d608
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000049d5b4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049d5ac
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000049d5a6
- (id)propertiesByName;	// IMP=0x000000000049d594
- (id)_dictionaryRepresentation;	// IMP=0x000000000049d475
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000049d3a0
- (long long)_intentResponseCode;	// IMP=0x000000000049d373
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049d344
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000049d315
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000049d2b7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049d288
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049d112
- (id)init;	// IMP=0x000000000049d0fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

