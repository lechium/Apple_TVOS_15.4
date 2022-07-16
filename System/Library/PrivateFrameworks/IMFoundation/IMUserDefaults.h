//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMFoundation/IMUserDefaults-Protocol.h>

@class NSString;

@interface IMUserDefaults : NSObject <IMUserDefaults>
{
}

+ (id)writePushPayloadsToDiskPath;	// IMP=0x000000000001525e
+ (_Bool)isWritePushPayloadsToDiskEnabled;	// IMP=0x0000000000015205
+ (_Bool)trustAnyCredential;	// IMP=0x00000000000151ac
+ (_Bool)isLiveDeliveryWarmUpEnabled;	// IMP=0x0000000000015153
+ (void)setEnableLiveDeliveryWarmUp:(_Bool)arg1;	// IMP=0x00000000000150f2
+ (id)phoneNumberValidationPreflightTestData;	// IMP=0x000000000001508d
+ (void)setPhoneNumberValidationPreflightTestData:(id)arg1;	// IMP=0x0000000000015014
+ (long long)phoneNumberValidationMode;	// IMP=0x0000000000014fbb
+ (void)setPhoneNumberValidationMode:(long long)arg1;	// IMP=0x0000000000014f5a
+ (_Bool)isEngramEnabled;	// IMP=0x0000000000014efc
+ (void)setEnableEngram:(_Bool)arg1;	// IMP=0x0000000000014e9b
+ (id)sharedDefaults;	// IMP=0x0000000000014e0a
- (id)copyValueForKey:(id)arg1 applicationID:(struct __CFString *)arg2 userName:(struct __CFString *)arg3 hostName:(struct __CFString *)arg4;	// IMP=0x0000000000015499
- (id)copyMultipleForCurrentKeys:(id)arg1 applicationID:(struct __CFString *)arg2 userName:(struct __CFString *)arg3 hostName:(struct __CFString *)arg4;	// IMP=0x0000000000015483
- (id)copyKeyListForApplicationID:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 hostName:(struct __CFString *)arg3;	// IMP=0x0000000000015470
- (void)synchronizeApplicationID:(struct __CFString *)arg1 userName:(struct __CFString *)arg2 hostName:(struct __CFString *)arg3;	// IMP=0x000000000001545d
- (void)setMultiple:(id)arg1 remove:(id)arg2 applicationID:(struct __CFString *)arg3 userName:(struct __CFString *)arg4 hostName:(struct __CFString *)arg5;	// IMP=0x0000000000015440
- (void)setValue:(void *)arg1 forKey:(id)arg2 applicationID:(struct __CFString *)arg3 userName:(struct __CFString *)arg4 hostName:(struct __CFString *)arg5;	// IMP=0x0000000000015423
- (id)copyValueForKey:(id)arg1 appID:(id)arg2;	// IMP=0x00000000000153fd
- (id)copyMultipleForCurrentKeys:(id)arg1 appID:(id)arg2;	// IMP=0x00000000000153d7
- (id)copyKeyListForAppID:(id)arg1;	// IMP=0x00000000000153b1
- (void)synchronizeAppID:(id)arg1;	// IMP=0x000000000001538b
- (void)setMultiple:(id)arg1 remove:(id)arg2 appID:(id)arg3;	// IMP=0x0000000000015358
- (void)setValue:(void *)arg1 forKey:(id)arg2 appID:(id)arg3;	// IMP=0x0000000000015325
- (void)setAppBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000015316
- (_Bool)appBoolForKey:(id)arg1;	// IMP=0x0000000000015309
- (void)removeAppValueForKey:(id)arg1;	// IMP=0x00000000000152fc
- (void)setAppValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000152ec
- (id)appValueForKey:(id)arg1;	// IMP=0x00000000000152df
- (void)setAppBool:(_Bool)arg1 byHostForKey:(id)arg2;	// IMP=0x00000000000152d0
- (_Bool)appBoolByHostForKey:(id)arg1;	// IMP=0x00000000000152c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

