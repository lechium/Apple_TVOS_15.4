//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShareETAIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INShareETAIntentResponse <INShareETAIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000439e72
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000439e5c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000439e3c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000439ddc
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000439dd4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000439c9d
- (id)propertiesByName;	// IMP=0x0000000000439c8b
- (id)_dictionaryRepresentation;	// IMP=0x0000000000439ac2
@property(nonatomic) unsigned long long mediums;
@property(copy, nonatomic) NSArray *recipients;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000004395ae
- (long long)_intentResponseCode;	// IMP=0x0000000000439581
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000439552
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000439523
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000004394c5
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000439496
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000439365
- (id)init;	// IMP=0x000000000043934f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

