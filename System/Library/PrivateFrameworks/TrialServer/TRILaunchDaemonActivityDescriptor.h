//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString;

@interface TRILaunchDaemonActivityDescriptor : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _supportedTaskCapabilities;	// 16 = 0x10
}

+ (id)launchDaemonActivityDescriptorWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;	// IMP=0x0000000000007525
+ (id)clientHotfixWifiDescriptor;	// IMP=0x00000000000ac48d
+ (id)clientHotfixCellularAllowBatteryDescriptor;	// IMP=0x00000000000ac468
+ (id)clientTriggeredCellularDescriptor;	// IMP=0x00000000000ac443
+ (id)clientTriggeredWifiDescriptor;	// IMP=0x00000000000ac41e
+ (id)setupAssistantFetchDescriptor;	// IMP=0x00000000000ac3f9
+ (id)postUpgradeDescriptorRequireInexpensiveNetworking;	// IMP=0x00000000000ac3d4
+ (id)postUpgradeDescriptor;	// IMP=0x00000000000ac3af
+ (id)inexpensiveNetworkingDescriptor;	// IMP=0x00000000000ac38a
+ (id)recurrentRollbackDescriptor;	// IMP=0x00000000000ac365
+ (id)cellularDescriptor;	// IMP=0x00000000000ac340
+ (id)taskQueueDescriptor;	// IMP=0x00000000000ac31b
+ (id)retryFailuresDescriptor;	// IMP=0x00000000000ac2f6
- (void).cxx_destruct;	// IMP=0x000000000000781b
@property(readonly, nonatomic) unsigned long long supportedTaskCapabilities; // @synthesize supportedTaskCapabilities=_supportedTaskCapabilities;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)init;	// IMP=0x0000000000007801
- (id)description;	// IMP=0x0000000000007781
- (unsigned long long)hash;	// IMP=0x000000000000774f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000076e7
- (_Bool)isEqualToLaunchDaemonActivityDescriptor:(id)arg1;	// IMP=0x000000000000760e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007603
- (id)copyWithReplacementSupportedTaskCapabilities:(unsigned long long)arg1;	// IMP=0x00000000000075ce
- (id)copyWithReplacementName:(id)arg1;	// IMP=0x000000000000757d
- (id)initWithName:(id)arg1 supportedTaskCapabilities:(unsigned long long)arg2;	// IMP=0x0000000000007436

@end

