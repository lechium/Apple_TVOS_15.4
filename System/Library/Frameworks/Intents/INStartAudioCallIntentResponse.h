//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartAudioCallIntentResponseExport-Protocol.h>

@class NSString;

@interface INStartAudioCallIntentResponse <INStartAudioCallIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000015fa5b
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000015fa42
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000015fa22
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000015f9e4
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000015f9dc
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000015f9d6
- (id)propertiesByName;	// IMP=0x000000000015f9c4
- (id)_dictionaryRepresentation;	// IMP=0x000000000015f87e
@property(nonatomic) double timeToEstablishCall;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000015f5b4
- (long long)_intentResponseCode;	// IMP=0x000000000015f587
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015f558
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000015f529
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000015f4cb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000015f49c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000015f2fe
- (id)init;	// IMP=0x000000000015f2e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

