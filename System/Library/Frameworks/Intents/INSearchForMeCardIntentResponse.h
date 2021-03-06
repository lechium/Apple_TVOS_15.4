//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForMeCardIntentResponseExport-Protocol.h>

@class INContactCard, NSString;

@interface INSearchForMeCardIntentResponse <INSearchForMeCardIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004291f9
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004291e0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004291c0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000429160
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000429158
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000429152
- (id)propertiesByName;	// IMP=0x0000000000429140
- (id)_dictionaryRepresentation;	// IMP=0x0000000000428f84
@property(copy, nonatomic) INContactCard *meCard;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000428d04
- (long long)_intentResponseCode;	// IMP=0x0000000000428cd7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000428ca8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000428c79
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000428c1b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000428bec
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000428a4d
- (id)init;	// IMP=0x0000000000428a37

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

