//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface MetricsHandler : NSObject
{
    NSString *_os;	// 8 = 0x8
    NSString *_platform;	// 16 = 0x10
    NSNumber *_activeDSID;	// 24 = 0x18
    NSString *_baseLogKey;	// 32 = 0x20
    NSDictionary *_currentApps;	// 40 = 0x28
}

+ (id)serverTimeFromDate:(id)arg1;	// IMP=0x004000000016a13c
+ (id)stringForAppInstallType:(unsigned char)arg1;	// IMP=0x001000000016a109
- (void).cxx_destruct;	// IMP=0x002000000016a22a
@property(retain, nonatomic) NSDictionary *currentApps; // @synthesize currentApps=_currentApps;
@property(copy, nonatomic) NSString *baseLogKey; // @synthesize baseLogKey=_baseLogKey;
@property(copy, nonatomic) NSNumber *activeDSID; // @synthesize activeDSID=_activeDSID;
@property(readonly, nonatomic) NSString *topic;
@property(readonly, nonatomic) _Bool shouldCollectMetrics;
- (void)resetMetrics;	// IMP=0x001000000016a1c7
- (void)recordSupplementalAppMetricsEvents;	// IMP=0x001000000016a1c1
- (void)recordInstallEventsForBundleIDs:(id)arg1 installType:(unsigned char)arg2;	// IMP=0x001000000016a1bb
- (void)recordDeletedBundleIDs:(id)arg1;	// IMP=0x001000000016a1b5
- (void)postMetrics;	// IMP=0x001000000016a1af
@property(readonly, nonatomic) NSString *os;
@property(readonly, nonatomic) NSString *hardwarePlatform;
- (id)getAppEventsWithError:(id *)arg1;	// IMP=0x001000000016a18b
@property(readonly, nonatomic) NSString *logKey;
@property(readonly, nonatomic) NSString *deviceID;

@end

