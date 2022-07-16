//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartVideoCallIntentResponseExport-Protocol.h>

@class NSString;

@interface INStartVideoCallIntentResponse <INStartVideoCallIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001a719f
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000001a7186
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000001a7166
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000001a7128
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a7120
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000001a711a
- (id)propertiesByName;	// IMP=0x00000000001a7108
- (id)_dictionaryRepresentation;	// IMP=0x00000000001a6fc2
@property(nonatomic) double timeToEstablishCall;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000001a6cf8
- (long long)_intentResponseCode;	// IMP=0x00000000001a6ccb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a6c9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a6c6d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001a6c0f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001a6be0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001a6a42
- (id)init;	// IMP=0x00000000001a6a2c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

