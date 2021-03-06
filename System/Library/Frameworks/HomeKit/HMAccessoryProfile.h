//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, NSArray, NSString, NSUUID, _HMAccessoryProfile;

@interface HMAccessoryProfile : NSObject <HMObjectMerge>
{
    _HMAccessoryProfile *_accessoryProfile;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000171a80
@property(readonly, nonatomic) _HMAccessoryProfile *accessoryProfile; // @synthesize accessoryProfile=_accessoryProfile;
- (void)refreshStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001718ab
- (id)assistantIdentifier;	// IMP=0x000000000017185b
- (void)recomputeAssistantIdentifier;	// IMP=0x000000000017181e
- (void)handleRuntimeStateUpdate:(id)arg1;	// IMP=0x00000000001717ac
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @dynamic profileUniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *uuid;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000171633
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x000000000017162b
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) __weak HMAccessory *accessory;
@property(readonly, nonatomic) NSArray *services;
- (id)initWithAccessoryProfile:(id)arg1;	// IMP=0x0000000000171464

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

