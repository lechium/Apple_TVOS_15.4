//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INDeleteTasksIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INDeleteTasksIntentResponse <INDeleteTasksIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003ecf9f
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003ecf94
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003ecf74
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003ecf20
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ecf18
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003ecf12
- (id)propertiesByName;	// IMP=0x00000000003ecf00
- (id)_dictionaryRepresentation;	// IMP=0x00000000003ecd69
@property(copy, nonatomic) NSArray *deletedTasks;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003ecb3c
- (long long)_intentResponseCode;	// IMP=0x00000000003ecb0f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ecae0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003ecab1
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003eca53
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003eca24
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003ec8ac
- (id)init;	// IMP=0x00000000003ec896

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

