//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/_HMAccesorySettingDelegate-Protocol.h>

@class HMAccessorySettingGroup, NSString, NSUUID, _HMAccessorySetting;

@interface HMAccessorySetting <_HMAccesorySettingDelegate, HMFLogging>
{
    _HMAccessorySetting *_internal;	// 8 = 0x8
    HMAccessorySettingGroup *_group;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00000000002364d4
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000002364cc
+ (id)settingForInternal:(id)arg1;	// IMP=0x000000000023640f
- (void).cxx_destruct;	// IMP=0x0000000000236272
@property __weak HMAccessorySettingGroup *group; // @synthesize group=_group;
@property(readonly) _HMAccessorySetting *internal; // @synthesize internal=_internal;
- (id)logIdentifier;	// IMP=0x000000000023614a
- (id)keyPathForSetting:(id)arg1;	// IMP=0x0000000000236138
- (void)_settingDidUpdateValue:(id)arg1;	// IMP=0x0000000000235f83
- (void)_settingWillUpdateValue:(id)arg1;	// IMP=0x0000000000235ec2
- (void)settingDidUpdateReflected;	// IMP=0x0000000000235dfc
- (void)settingWillUpdateReflected;	// IMP=0x0000000000235df6
- (void)updateReflected:(_Bool)arg1;	// IMP=0x0000000000235c22
@property(readonly, getter=isReflected) _Bool reflected;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000235b58
- (id)value;	// IMP=0x0000000000235b08
@property(readonly) Class valueClass;
@property(readonly, copy) NSUUID *identifier;
@property(readonly, copy) NSString *keyPath;
@property(readonly, copy) NSString *description;
- (_Bool)isWritable;	// IMP=0x00000000002358a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000235565
@property(readonly) unsigned long long hash;
- (id)initWithInternal:(id)arg1;	// IMP=0x0000000000235386
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;	// IMP=0x00000000002352c5
- (id)init;	// IMP=0x000000000023521d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

