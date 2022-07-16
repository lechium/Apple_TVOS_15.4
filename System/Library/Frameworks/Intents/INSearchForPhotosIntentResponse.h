//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForPhotosIntentResponseExport-Protocol.h>

@class NSNumber, NSString;

@interface INSearchForPhotosIntentResponse <INSearchForPhotosIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000013fb9e
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000013fb87
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000013fb67
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000013fb2c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013fb24
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000013fb1e
- (id)propertiesByName;	// IMP=0x000000000013fb0c
- (id)_dictionaryRepresentation;	// IMP=0x000000000013f976
@property(copy, nonatomic) NSNumber *searchResultsCount;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000013f6fc
- (long long)_intentResponseCode;	// IMP=0x000000000013f6cf
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013f6a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013f671
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000013f613
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000013f5e4
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000013f46d
- (id)init;	// IMP=0x000000000013f457

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
