//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSkipAnnouncementIntentResponseExport-Protocol.h>

@class NSString;

@interface INSkipAnnouncementIntentResponse <INSkipAnnouncementIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004aef0f
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004aef04
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004aeee4
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000004aee90
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004aee88
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000004aee82
- (id)propertiesByName;	// IMP=0x00000000004aee70
- (id)_dictionaryRepresentation;	// IMP=0x00000000004aed51
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000004aec7c
- (long long)_intentResponseCode;	// IMP=0x00000000004aec4f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004aec20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004aebf1
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000004aeb93
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004aeb64
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004ae9ee
- (id)init;	// IMP=0x00000000004ae9d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

