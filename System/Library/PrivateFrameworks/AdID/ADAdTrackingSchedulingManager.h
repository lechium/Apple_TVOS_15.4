//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADLoggingProfileMonitor, APSConnection;
@protocol NSObject;

@interface ADAdTrackingSchedulingManager : NSObject
{
    _Bool _isConfigRequestInFlight;	// 8 = 0x8
    id <NSObject> _storeFrontNotifyToken;	// 16 = 0x10
    id <NSObject> _accountChangedNotifyToken;	// 24 = 0x18
    APSConnection *_pushConnection;	// 32 = 0x20
    ADLoggingProfileMonitor *_loggingProfileMonitor;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x0000000000008fa9
- (void).cxx_destruct;	// IMP=0x000000000000b28c
@property(retain, nonatomic) ADLoggingProfileMonitor *loggingProfileMonitor; // @synthesize loggingProfileMonitor=_loggingProfileMonitor;
@property(nonatomic) _Bool isConfigRequestInFlight; // @synthesize isConfigRequestInFlight=_isConfigRequestInFlight;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
@property(retain, nonatomic) id <NSObject> accountChangedNotifyToken; // @synthesize accountChangedNotifyToken=_accountChangedNotifyToken;
@property(retain, nonatomic) id <NSObject> storeFrontNotifyToken; // @synthesize storeFrontNotifyToken=_storeFrontNotifyToken;
- (void)handleAccountChange;	// IMP=0x000000000000aeb2
- (id)currentBundleID;	// IMP=0x000000000000add1
- (void)forceExpiration;	// IMP=0x000000000000ad26
- (void)refreshConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a629
- (void)handleConfiguration;	// IMP=0x000000000000a4ab
- (_Bool)_shouldSaveConfig;	// IMP=0x000000000000a41d
- (long long)latestPersonalizedConsentVersion;	// IMP=0x000000000000a3d2
- (_Bool)isNewsOrStocksEnabledLocality;	// IMP=0x0000000000009ec6
- (id)retrieveNewsRecord:(id *)arg1;	// IMP=0x0000000000009e87
- (_Bool)isSearchAdsEnabled;	// IMP=0x0000000000009e3c
- (_Bool)isSearchOrSegmentEnabled;	// IMP=0x0000000000009cdd
- (_Bool)isAdEnabledLocality;	// IMP=0x0000000000009b9a
- (void)migratePersonalizedAdsFromLAT;	// IMP=0x0000000000009a00
- (void)migratePersonalizedAdsOnboarding;	// IMP=0x00000000000098a6
- (void)dealloc;	// IMP=0x00000000000097f2
- (id)init;	// IMP=0x0000000000008ffe

@end
