//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INResetTimerIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INResetTimerIntentResponse <INResetTimerIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000374cb0
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000374c90
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000374c70
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000374c08
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000374c00
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000374bfa
- (id)propertiesByName;	// IMP=0x0000000000374be8
- (id)_dictionaryRepresentation;	// IMP=0x0000000000374a38
@property(copy, nonatomic) NSArray *resetTimers;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003747d4
- (long long)_intentResponseCode;	// IMP=0x00000000003747a7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000374778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000374749
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003746eb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003746bc
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000374529
- (id)init;	// IMP=0x0000000000374513

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

