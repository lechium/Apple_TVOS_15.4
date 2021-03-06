//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetTimerAttributeIntentResponseExport-Protocol.h>

@class INTimer, NSString;

@interface INSetTimerAttributeIntentResponse <INSetTimerAttributeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003734b8
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000373498
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000373478
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000373404
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003733fc
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003733f6
- (id)propertiesByName;	// IMP=0x00000000003733e4
- (id)_dictionaryRepresentation;	// IMP=0x0000000000373228
@property(copy, nonatomic) INTimer *updatedTimer;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000372fa8
- (long long)_intentResponseCode;	// IMP=0x0000000000372f7b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000372f4c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000372f1d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000372ebf
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000372e90
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000372cf2
- (id)init;	// IMP=0x0000000000372cdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

