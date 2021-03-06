//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSaveParkingLocationIntentResponseExport-Protocol.h>

@class CLPlacemark, NSString;

@interface INSaveParkingLocationIntentResponse <INSaveParkingLocationIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004745c3
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004745b8
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000474598
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000474544
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000047453c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000474536
- (id)propertiesByName;	// IMP=0x0000000000474524
- (id)_dictionaryRepresentation;	// IMP=0x0000000000474319
@property(copy, nonatomic) NSString *parkingNote;
@property(copy, nonatomic) CLPlacemark *parkingLocation;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000473f94
- (long long)_intentResponseCode;	// IMP=0x0000000000473f67
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000473f38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000473f09
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000473eab
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000473e7c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000473d05
- (id)init;	// IMP=0x0000000000473cef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

