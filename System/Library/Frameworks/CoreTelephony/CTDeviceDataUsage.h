//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSCopying-Protocol.h>
#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface CTDeviceDataUsage : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _periods;	// 8 = 0x8
    NSMutableDictionary *_apps;	// 16 = 0x10
    NSMutableDictionary *_uninstalledApps;	// 24 = 0x18
    NSMutableDictionary *_proxiedOnlyApps;	// 32 = 0x20
    NSMutableDictionary *_systemServices;	// 40 = 0x28
    NSArray *_wifiAssist;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c4a5d
- (void).cxx_destruct;	// IMP=0x00000000000c4b28
@property(retain) NSArray *wifiAssist; // @synthesize wifiAssist=_wifiAssist;
@property(retain) NSMutableDictionary *systemServices; // @synthesize systemServices=_systemServices;
@property(retain) NSMutableDictionary *proxiedOnlyApps; // @synthesize proxiedOnlyApps=_proxiedOnlyApps;
@property(retain) NSMutableDictionary *uninstalledApps; // @synthesize uninstalledApps=_uninstalledApps;
@property(retain) NSMutableDictionary *apps; // @synthesize apps=_apps;
@property unsigned long long periods; // @synthesize periods=_periods;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c45d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c4441
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4223
- (id)totalWifiAssistUsageForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c41a9
- (id)totalSystemServiceDataUsedForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c4145
- (id)totalProxiedOnlyAppDataUsedForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c40e1
- (id)totalUninstalledAppDataUsedForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c407d
- (id)totalAppDataUsedForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c4019
- (id)totalDataUsedForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c3d29
- (id)totalDataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;	// IMP=0x00000000000c3a7b
- (id)systemServiceDataUsageForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c3a17
- (id)proxiedOnlyAppDataUsageForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c39b3
- (id)uninstalledAppDataUsageForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c394f
- (id)appDataUsageForPeriod:(unsigned long long)arg1;	// IMP=0x00000000000c38eb
- (id)dataUsage:(id)arg1 forPeriod:(unsigned long long)arg2;	// IMP=0x00000000000c34b0
- (id)description;	// IMP=0x00000000000c3282

@end

