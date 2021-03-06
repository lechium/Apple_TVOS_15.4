//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForContactIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INSearchForContactIntentResponse <INSearchForContactIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000042a4cd
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000042a4b4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000042a494
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000042a434
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042a42c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000042a35d
- (id)propertiesByName;	// IMP=0x000000000042a34b
- (id)_dictionaryRepresentation;	// IMP=0x000000000042a1f8
@property(copy, nonatomic) NSArray *matchedContacts;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000429eef
- (long long)_intentResponseCode;	// IMP=0x0000000000429ec2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000429e93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000429e64
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000429e06
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000429dd7
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000429ca6
- (id)init;	// IMP=0x0000000000429c90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

