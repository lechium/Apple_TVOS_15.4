//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INActivateCarSignalIntentResponseExport-Protocol.h>

@class NSString;

@interface INActivateCarSignalIntentResponse <INActivateCarSignalIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000000f203
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000000f1f8
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000000f1d8
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000000f184
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000f17c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000000f126
- (id)propertiesByName;	// IMP=0x000000000000f114
- (id)_dictionaryRepresentation;	// IMP=0x000000000000ef75
@property(nonatomic) unsigned long long signals;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000000ecf8
- (long long)_intentResponseCode;	// IMP=0x000000000000eccb
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ec9c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000ec6d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000000ec0f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000ebe0
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000000ea6a
- (id)init;	// IMP=0x000000000000ea54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

