//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShareFocusStatusIntentResponseExport-Protocol.h>

@class NSString;

@interface INShareFocusStatusIntentResponse <INShareFocusStatusIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004d889f
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004d8894
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004d8874
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000004d8820
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004d8818
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000004d8812
- (id)propertiesByName;	// IMP=0x00000000004d8800
- (id)_dictionaryRepresentation;	// IMP=0x00000000004d86e1
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000004d860c
- (long long)_intentResponseCode;	// IMP=0x00000000004d85df
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004d85b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004d8581
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000004d8523
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004d84f4
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004d837e
- (id)init;	// IMP=0x00000000004d8368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
