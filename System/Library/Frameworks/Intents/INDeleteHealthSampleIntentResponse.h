//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteHealthSampleIntentResponseExport-Protocol.h>

@class NSString;

@interface INDeleteHealthSampleIntentResponse <INDeleteHealthSampleIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001d7abb
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000001d7aa4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000001d7a84
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000001d7a24
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d7a1c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000001d7a16
- (id)propertiesByName;	// IMP=0x00000000001d7a04
- (id)_dictionaryRepresentation;	// IMP=0x00000000001d78d5
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000001d77e4
- (long long)_intentResponseCode;	// IMP=0x00000000001d77b7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d7788
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d7759
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001d76fb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001d76cc
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001d7547
- (id)init;	// IMP=0x00000000001d7531

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
