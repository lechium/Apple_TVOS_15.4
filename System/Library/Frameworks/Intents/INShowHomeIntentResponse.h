//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShowHomeIntentResponseExport-Protocol.h>

@class NSString;

@interface INShowHomeIntentResponse <INShowHomeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003cf45b
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003cf450
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003cf430
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003cf3dc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003cf3d4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003cf3ce
- (id)propertiesByName;	// IMP=0x00000000003cf3bc
- (id)_dictionaryRepresentation;	// IMP=0x00000000003cf29d
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003cf1c8
- (long long)_intentResponseCode;	// IMP=0x00000000003cf19b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003cf16c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003cf13d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003cf0df
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003cf0b0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003cef3a
- (id)init;	// IMP=0x00000000003cef24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

