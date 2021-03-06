//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSnoozeTasksIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INSnoozeTasksIntentResponse <INSnoozeTasksIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003ebe03
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003ebdf8
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003ebdd8
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003ebd84
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ebd7c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003ebd76
- (id)propertiesByName;	// IMP=0x00000000003ebd64
- (id)_dictionaryRepresentation;	// IMP=0x00000000003ebbcd
@property(copy, nonatomic) NSArray *snoozedTasks;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003eb9a0
- (long long)_intentResponseCode;	// IMP=0x00000000003eb973
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003eb944
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003eb915
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003eb8b7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003eb888
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003eb70f
- (id)init;	// IMP=0x00000000003eb6f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

