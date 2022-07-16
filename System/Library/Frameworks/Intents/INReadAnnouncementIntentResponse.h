//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INReadAnnouncementIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INReadAnnouncementIntentResponse <INReadAnnouncementIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000477da7
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000477d9c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000477d7c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000477d28
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000477d20
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000477d1a
- (id)propertiesByName;	// IMP=0x0000000000477d08
- (id)_dictionaryRepresentation;	// IMP=0x0000000000477b71
@property(copy, nonatomic) NSArray *announcementRecords;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000477944
- (long long)_intentResponseCode;	// IMP=0x0000000000477917
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004778e8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004778b9
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000047785b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000047782c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004776b6
- (id)init;	// IMP=0x00000000004776a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

