//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetRelationshipIntentResponseExport-Protocol.h>

@class INContactCard, NSString;

@interface INSetRelationshipIntentResponse <INSetRelationshipIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000042bef9
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000042bee0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000042bec0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000042be60
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042be58
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000042be52
- (id)propertiesByName;	// IMP=0x000000000042be40
- (id)_dictionaryRepresentation;	// IMP=0x000000000042bc67
@property(copy, nonatomic) INContactCard *meCard;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000042b9b0
- (long long)_intentResponseCode;	// IMP=0x000000000042b983
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042b954
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042b925
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000042b8c7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042b898
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042b6df
- (id)init;	// IMP=0x000000000042b6c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

