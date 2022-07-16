//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INRetrieveParkingLocationIntentResponseExport-Protocol.h>

@class CLPlacemark, NSString;

@interface INRetrieveParkingLocationIntentResponse <INRetrieveParkingLocationIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000042fc67
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000042fc5c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000042fc3c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000042fbe8
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000042fbe0
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000042fbda
- (id)propertiesByName;	// IMP=0x000000000042fbc8
- (id)_dictionaryRepresentation;	// IMP=0x000000000042f9bd
@property(copy, nonatomic) NSString *parkingNote;
@property(copy, nonatomic) CLPlacemark *parkingLocation;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000042f638
- (long long)_intentResponseCode;	// IMP=0x000000000042f60b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000042f5dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000042f5ad
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000042f54f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042f520
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000042f3a9
- (id)init;	// IMP=0x000000000042f393

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
