//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AskPermission/NSCopying-Protocol.h>
#import <AskPermission/NSMutableCopying-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, OS_os_log;

@interface APLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;	// 8 = 0x8
    NSString *_subsystem;	// 16 = 0x10
    NSObject<OS_os_log> *_backingOSLogObject;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;	// 32 = 0x20
}

+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;	// IMP=0x0000000000003b2c
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;	// IMP=0x0000000000003b12
+ (id)sharedUIServiceConfig;	// IMP=0x00000000000030f2
+ (id)sharedPluginConfig;	// IMP=0x0000000000003018
+ (id)sharedSettingsConfig;	// IMP=0x0000000000002f3e
+ (id)sharedFrameworkConfig;	// IMP=0x0000000000002e64
+ (id)sharedExtensionConfig;	// IMP=0x0000000000002d8a
+ (id)sharedDaemonConfig;	// IMP=0x0000000000002cb0
+ (id)sharedConfig;	// IMP=0x0000000000002c01
- (void).cxx_destruct;	// IMP=0x0000000000003c6d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain, nonatomic) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003a17
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003948
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003760
- (unsigned long long)hash;	// IMP=0x00000000000036d3
- (id)description;	// IMP=0x00000000000035bf
@property(readonly, nonatomic) NSObject<OS_os_log> *OSLogObject;
- (id)init;	// IMP=0x0000000000002ba4

@end
