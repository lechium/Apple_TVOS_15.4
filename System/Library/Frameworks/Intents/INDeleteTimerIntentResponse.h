//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteTimerIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INDeleteTimerIntentResponse <INDeleteTimerIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003776b4
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000377694
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000377674
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000037760c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000377604
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003775fe
- (id)propertiesByName;	// IMP=0x00000000003775ec
- (id)_dictionaryRepresentation;	// IMP=0x000000000037743c
@property(copy, nonatomic) NSArray *deletedTimers;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003771d8
- (long long)_intentResponseCode;	// IMP=0x00000000003771ab
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000037717c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000037714d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003770ef
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003770c0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000376f2e
- (id)init;	// IMP=0x0000000000376f18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

