//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LSPlugInKitProxy, NSExtension;
@protocol OS_dispatch_queue;

@interface UNSNotificationServiceExtension : NSObject
{
    NSExtension *_extension;	// 8 = 0x8
    double _serviceTime;	// 16 = 0x10
    double _graceTime;	// 24 = 0x18
}

+ (void)_disallowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;	// IMP=0x0000000000008c3e
+ (void)_allowAccessToNotificationCenterForServiceExtensionWithIdentifier:(id)arg1;	// IMP=0x0000000000008b07
+ (_Bool)isAccessToNotificationCenterAllowedForServiceExtensionWithIdentifier:(id)arg1;	// IMP=0x0000000000008a65
+ (id)_extensionIdentifiersToPerExtensionQueues;	// IMP=0x0000000000008a00
+ (id)_extensionIdentifiersCurrentlyAllowedAccessToNotificationCenter;	// IMP=0x000000000000899b
- (void).cxx_destruct;	// IMP=0x0000000000009e50
- (id)mutateContentForNotificationRequest:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000008fc5
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @dynamic queue;
@property(readonly, nonatomic) LSPlugInKitProxy *proxy; // @dynamic proxy;
@property(readonly, nonatomic) double serviceTime;
- (id)_initWithExtension:(id)arg1 serviceTime:(double)arg2 graceTime:(double)arg3;	// IMP=0x0000000000008d75

@end

