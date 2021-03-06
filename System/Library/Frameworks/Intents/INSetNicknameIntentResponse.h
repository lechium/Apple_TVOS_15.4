//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetNicknameIntentResponseExport-Protocol.h>

@class INContactCard, NSString;

@interface INSetNicknameIntentResponse <INSetNicknameIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000042e2d9
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000042e2c0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000042e2a0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000042e240
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042e238
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000042e232
- (id)propertiesByName;	// IMP=0x000000000042e220
- (id)_dictionaryRepresentation;	// IMP=0x000000000042e047
@property(copy, nonatomic) INContactCard *meCard;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000042dd90
- (long long)_intentResponseCode;	// IMP=0x000000000042dd63
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042dd34
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042dd05
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000042dca7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042dc78
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042dabf
- (id)init;	// IMP=0x000000000042daa9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

