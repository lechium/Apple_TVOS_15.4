//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INFindDeviceAndPlaySoundIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INFindDeviceAndPlaySoundIntentResponse <INFindDeviceAndPlaySoundIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000419baf
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000419ba4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000419b84
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000419b30
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000419b28
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000419b22
- (id)propertiesByName;	// IMP=0x0000000000419b10
- (id)_dictionaryRepresentation;	// IMP=0x0000000000419979
@property(copy, nonatomic) NSArray *devicesFounds;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000041974c
- (long long)_intentResponseCode;	// IMP=0x000000000041971f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004196f0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004196c1
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000419663
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000419634
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004194be
- (id)init;	// IMP=0x00000000004194a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
