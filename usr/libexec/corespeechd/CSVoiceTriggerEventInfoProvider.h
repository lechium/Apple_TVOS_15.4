//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerEventInfoProvider : NSObject
{
    NSMutableDictionary *_accessoryVoiceTriggerEvents;	// 8 = 0x8
    NSDictionary *_builtInVoiceTriggerEvent;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSDictionary *_rtsTriggerInfo;	// 32 = 0x20
    unsigned long long _triggerNotifiedMachTime;	// 40 = 0x28
}

+ (_Bool)isVoiceTriggerInfoAvailableLocally:(id)arg1;	// IMP=0x004000000008498d
+ (id)sharedInstance;	// IMP=0x00100000000841f6
- (void).cxx_destruct;	// IMP=0x0020000000084a79
@property(nonatomic) unsigned long long triggerNotifiedMachTime; // @synthesize triggerNotifiedMachTime=_triggerNotifiedMachTime;
@property(copy, nonatomic) NSDictionary *rtsTriggerInfo; // @synthesize rtsTriggerInfo=_rtsTriggerInfo;
- (_Bool)_isBuiltInDeviceFromDeviceId:(id)arg1;	// IMP=0x0010000000084a24
- (void)fetchVoiceTriggerInfoWithAudioContext:(id)arg1 triggerInfoProviding:(id)arg2 resultVoiceTriggerInfo:(id *)arg3 resultRTSTriggerInfo:(id *)arg4;	// IMP=0x001000000008442a
- (void)setVoiceTriggerInfo:(id)arg1 deviceId:(id)arg2;	// IMP=0x00100000000842d2
- (id)init;	// IMP=0x001000000008424b

@end

