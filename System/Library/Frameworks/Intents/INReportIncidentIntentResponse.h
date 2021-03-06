//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INReportIncidentIntentResponseExport-Protocol.h>

@class CLPlacemark, NSArray, NSString;

@interface INReportIncidentIntentResponse <INReportIncidentIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004b90a2
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004b908c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004b906c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000004b9008
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004b9000
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000004b8ee4
- (id)propertiesByName;	// IMP=0x00000000004b8ed2
- (id)_dictionaryRepresentation;	// IMP=0x00000000004b8c89
@property(copy, nonatomic) NSArray *supportedTypes;
@property(copy, nonatomic) CLPlacemark *location;
@property(nonatomic) unsigned long long transportTypes;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000004b864a
- (long long)_intentResponseCode;	// IMP=0x00000000004b861d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004b85ee
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004b85bf
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000004b8561
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004b8532
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004b8401
- (id)init;	// IMP=0x00000000004b83eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

