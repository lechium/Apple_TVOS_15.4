//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INRequestPaymentIntentResponseExport-Protocol.h>

@class INPaymentRecord, NSString;

@interface INRequestPaymentIntentResponse <INRequestPaymentIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000029e048
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000029e028
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000029e008
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000029df90
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000029df88
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000029dec6
- (id)propertiesByName;	// IMP=0x000000000029deb4
- (id)_dictionaryRepresentation;	// IMP=0x000000000029dd61
@property(copy, nonatomic) INPaymentRecord *paymentRecord;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000029da73
- (long long)_intentResponseCode;	// IMP=0x000000000029da46
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000029da17
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000029d9e8
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000029d98a
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000029d95b
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000029d82a
- (id)init;	// IMP=0x000000000029d814

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

