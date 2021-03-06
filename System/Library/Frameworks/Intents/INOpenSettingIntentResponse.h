//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INOpenSettingIntentResponseExport-Protocol.h>

@class NSString;

@interface INOpenSettingIntentResponse <INOpenSettingIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000047ca89
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000047ca70
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000047ca50
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000047c9f0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047c9e8
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000047c9e2
- (id)propertiesByName;	// IMP=0x000000000047c9d0
- (id)_dictionaryRepresentation;	// IMP=0x000000000047c79c
@property(copy, nonatomic) NSString *errorDetail;
@property(copy, nonatomic) NSString *punchoutUrl;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000047c410
- (long long)_intentResponseCode;	// IMP=0x000000000047c3e3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000047c3b4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000047c385
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000047c327
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000047c2f8
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000047c158
- (id)init;	// IMP=0x000000000047c142

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

