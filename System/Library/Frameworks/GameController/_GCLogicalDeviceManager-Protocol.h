//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameController/_GCDeviceManager-Protocol.h>

@class NSSet, _GCDeviceConfiguration;
@protocol GCLogicalDeviceRegistry, _GCLogicalDevice;

@protocol _GCLogicalDeviceManager <_GCDeviceManager>
@property __weak id <GCLogicalDeviceRegistry> deviceRegistry;
- (id <_GCLogicalDevice>)makeDeviceWithConfiguration:(_GCDeviceConfiguration *)arg1 dependencies:(NSSet *)arg2;

@optional
- (void)deactivateLogicalDevice:(id <_GCLogicalDevice>)arg1;
- (void)activateLogicalDevice:(id <_GCLogicalDevice>)arg1;
- (_Bool)canMakeDeviceWithConfiguration:(_GCDeviceConfiguration *)arg1 dependencies:(NSSet *)arg2;
@end

