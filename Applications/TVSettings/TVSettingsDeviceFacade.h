//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVSettingsDeviceFacade : NSObject
{
    NSString *_currentLocale;	// 8 = 0x8
    _Bool _automaticTimeZoneSelectionEnabled;	// 16 = 0x10
    _Bool _iCloudSharedPhotosEnabled;	// 17 = 0x11
    _Bool _myPhotoStreamEnabled;	// 18 = 0x12
    _Bool _iCloudPhotoLibraryEnabled;	// 19 = 0x13
    NSArray *_availableNames;	// 24 = 0x18
    NSString *_timeZoneCityName;	// 32 = 0x20
    double _sleepTimeout;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversOfCurrentLocale;	// IMP=0x0040000000042ae0
+ (id)sharedInstance;	// IMP=0x00100000000423a0
- (void).cxx_destruct;	// IMP=0x0020000000044290
@property(nonatomic) _Bool iCloudPhotoLibraryEnabled; // @synthesize iCloudPhotoLibraryEnabled=_iCloudPhotoLibraryEnabled;
@property(nonatomic) _Bool myPhotoStreamEnabled; // @synthesize myPhotoStreamEnabled=_myPhotoStreamEnabled;
@property(nonatomic) _Bool iCloudSharedPhotosEnabled; // @synthesize iCloudSharedPhotosEnabled=_iCloudSharedPhotosEnabled;
@property(nonatomic) double sleepTimeout; // @synthesize sleepTimeout=_sleepTimeout;
@property(copy, nonatomic) NSString *timeZoneCityName; // @synthesize timeZoneCityName=_timeZoneCityName;
@property(nonatomic, getter=isAutomaticTimeZoneSelectionEnabled) _Bool automaticTimeZoneSelectionEnabled; // @synthesize automaticTimeZoneSelectionEnabled=_automaticTimeZoneSelectionEnabled;
@property(copy, nonatomic) NSArray *availableNames; // @synthesize availableNames=_availableNames;
@property(nonatomic) _Bool updateSoftwareAutomatically;
@property(readonly, nonatomic) _Bool shouldAllowAppOTA;
@property(readonly, nonatomic, getter=isSleepDisabledByProfile) _Bool sleepDisabledByProfile;
- (void)_updateSleepTimeoutValue;	// IMP=0x0010000000043ca0
- (id)cityNameForCityID:(id)arg1;	// IMP=0x0010000000043b90
@property(copy, nonatomic) NSString *timeZoneCityID;
- (void)_updateAutomaticTimeZoneEnabled:(_Bool)arg1;	// IMP=0x0010000000043770
@property(nonatomic) long long preferredKeyboardType;
@property(readonly, copy, nonatomic) NSArray *availableLocales;
- (void)_updateCurrentLocale;	// IMP=0x00100000000434b0
@property(copy, nonatomic) NSString *currentLocale;
@property(copy, nonatomic) NSString *systemLanguage;
@property(nonatomic) _Bool shouldSendAppAnalytics;
@property(readonly, nonatomic) _Bool isSendAppAnalyticsLockedDown;
@property(nonatomic) _Bool shouldSendDataToApple;
@property(readonly, nonatomic) _Bool isSendDataToAppleLockedDown;
@property(readonly, copy, nonatomic) NSString *threadID;
- (id)internetConfigurationSummary;	// IMP=0x0010000000042f60
@property(readonly, copy, nonatomic) NSString *HDMIFirmwareVersion;
@property(readonly, copy, nonatomic) NSString *systemSoftwareVersion;
@property(readonly, copy, nonatomic) NSString *serialNumber;
@property(readonly, copy, nonatomic) NSString *marketingNumber;
@property(readonly, copy, nonatomic) NSString *modelDescription;
@property(readonly, nonatomic, getter=isNameModificationAllowed) _Bool nameModificationAllowed;
@property(copy, nonatomic) NSString *name;
- (id)init;	// IMP=0x0010000000042660

@end

