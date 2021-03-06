//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INCreateTimerIntentResponseExport-Protocol.h>

@class INTimer, NSString;

@interface INCreateTimerIntentResponse <INCreateTimerIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000375712
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003756fc
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003756dc
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000037567c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000375674
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003755bf
- (id)propertiesByName;	// IMP=0x00000000003755ad
- (id)_dictionaryRepresentation;	// IMP=0x000000000037545a
@property(copy, nonatomic) INTimer *createdTimer;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000375188
- (long long)_intentResponseCode;	// IMP=0x000000000037515b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000037512c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003750fd
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000037509f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000375070
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000374f3f
- (id)init;	// IMP=0x0000000000374f29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

