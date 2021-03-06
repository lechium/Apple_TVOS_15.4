//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INScanVisualCodeIntentResponseExport-Protocol.h>

@class NSString;

@interface INScanVisualCodeIntentResponse <INScanVisualCodeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000023fdf6
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000023fddf
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000023fdbf
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000023fd84
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000023fd7c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000023fd76
- (id)propertiesByName;	// IMP=0x000000000023fd64
- (id)_dictionaryRepresentation;	// IMP=0x000000000023fc45
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000023fb70
- (long long)_intentResponseCode;	// IMP=0x000000000023fb43
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000023fb14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000023fae5
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000023fa87
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000023fa58
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000023f8e2
- (id)init;	// IMP=0x000000000023f8cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

