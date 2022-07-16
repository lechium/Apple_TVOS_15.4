//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetRideStatusIntentResponseExport-Protocol.h>

@class INRideStatus, NSString;

@interface INGetRideStatusIntentResponse <INGetRideStatusIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000143c93
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000143c70
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000143c50
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000143be8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000143be0
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000143bda
- (id)propertiesByName;	// IMP=0x0000000000143bc8
- (id)_dictionaryRepresentation;	// IMP=0x0000000000143a18
@property(copy, nonatomic) INRideStatus *rideStatus;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000001437b4
- (long long)_intentResponseCode;	// IMP=0x0000000000143787
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000143758
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000143729
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001436cb
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000014369c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000014350a
- (id)init;	// IMP=0x00000000001434f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
