//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSLocale, NSString, NSTimeZone, TVCSTapToSetupHomeKitInfo;

@interface TVCSTapToSetupDeviceInfo : NSObject
{
    NSDictionary *_rawDeviceInfo;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSTimeZone *_timeZone;	// 24 = 0x18
    TVCSTapToSetupHomeKitInfo *_homeKitInfo;	// 32 = 0x20
    NSDictionary *_locationServicesAuthorizationInfo;	// 40 = 0x28
}

+ (id)_mediaSystemLookupDictionaryFromMediaSystemDictionaries:(id)arg1;	// IMP=0x000000000001e810
+ (id)_stringArrayFromDictionary:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001e510
+ (id)_sanitizedRawDeviceInfo:(id)arg1;	// IMP=0x000000000001d6e0
+ (id)new;	// IMP=0x000000000001c4e0
- (void).cxx_destruct;	// IMP=0x0000000000020d30
@property(retain, nonatomic) NSDictionary *locationServicesAuthorizationInfo; // @synthesize locationServicesAuthorizationInfo=_locationServicesAuthorizationInfo;
@property(retain, nonatomic) TVCSTapToSetupHomeKitInfo *homeKitInfo; // @synthesize homeKitInfo=_homeKitInfo;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, copy, nonatomic) NSDictionary *rawDeviceInfo; // @synthesize rawDeviceInfo=_rawDeviceInfo;
- (id)_homeCurrentUserIdentifersFromDictionary:(id)arg1;	// IMP=0x00000000000207f0
- (unsigned long long)_homePodVariantFromSFHomePodVariant:(int)arg1;	// IMP=0x00000000000206b0
- (id)_homeTheaterSpeakersFromAccessories:(id)arg1 mediaSystemLookupDictionary:(id)arg2;	// IMP=0x000000000001fe70
- (id)_accessoriesFromAccessoryDictionaries:(id)arg1;	// IMP=0x000000000001f830
- (id)_roomsFromRoomDictionaries:(id)arg1 mediaSystemLookupDictionary:(id)arg2;	// IMP=0x000000000001f270
- (id)_homesFromHomeDictionaries:(id)arg1;	// IMP=0x000000000001ece0
- (long long)_triStateForBoolWithKey:(id)arg1;	// IMP=0x000000000001e730
- (id)_stringArrayForKey:(id)arg1;	// IMP=0x000000000001e680
- (id)_descriptionForDebugging:(_Bool)arg1;	// IMP=0x000000000001dc00
- (id)_locationServicesAuthorizationLogString;	// IMP=0x000000000001d9d0
- (id)debugDescription;	// IMP=0x000000000001d6b0
- (id)description;	// IMP=0x000000000001d680
@property(readonly, nonatomic) NSData *videoSubscriberAccountData;
@property(readonly, nonatomic) NSString *siriLanaguage;
@property(readonly, nonatomic, getter=isTypeToSiriEnabled) long long typeToSiriEnabled;
@property(readonly, nonatomic, getter=isSiriDataSharingEnabled) long long siriDataSharingEnabled;
@property(readonly, nonatomic, getter=isSiriDictationEnabled) long long siriDictationEnabled;
@property(readonly, nonatomic, getter=isSiriEnabled) long long siriEnabled;
@property(readonly, nonatomic, getter=isTimeDeterminedAutomatically) long long timeDeterminedAutomatically;
@property(readonly, nonatomic, getter=isTimeZoneDeterminedAutomatically) long long timeZoneDeterminedAutomatically;
@property(readonly, nonatomic) NSString *region;
@property(readonly, nonatomic) NSArray *languageCodes;
@property(readonly, nonatomic) NSString *languageCode;
@property(readonly, nonatomic, getter=isLocationServicesEnabled) long long locationServicesEnabled;
@property(readonly, nonatomic, getter=isAppAnalyticSubmissionsAllowed) long long appAnalyticSubmissionsAllowed;
@property(readonly, nonatomic, getter=isDiagnosticSubmissionsAllowed) long long diagnosticSubmissionsAllowed;
@property(readonly, nonatomic) unsigned long long privacyFlowContentVersion;
@property(readonly, nonatomic) NSString *buildVersion;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, nonatomic) int deviceClass;
@property(readonly, copy, nonatomic) NSString *deviceName;
- (id)initWithRawDeviceInfo:(id)arg1;	// IMP=0x000000000001c550
- (id)init;	// IMP=0x000000000001c510

@end

