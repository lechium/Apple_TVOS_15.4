//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, HMDResidentMesh, NSDictionary, NSMutableDictionary, NSMutableSet;

@interface HMDResidentMeshMeshStorage : HMFObject
{
    _Bool _enabled;	// 8 = 0x8
    HMDResidentMesh *_owner;	// 16 = 0x10
    HMDDevice *_device;	// 24 = 0x18
    NSDictionary *_metrics;	// 32 = 0x20
    NSMutableSet *_accessoryUUIDs;	// 40 = 0x28
    unsigned long long _generationCount;	// 48 = 0x30
    NSMutableDictionary *_accessoryListWithLinkQuality;	// 56 = 0x38
    unsigned long long _nestedStatusRequests;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000653cbb
@property(nonatomic) unsigned long long nestedStatusRequests; // @synthesize nestedStatusRequests=_nestedStatusRequests;
@property(retain, nonatomic) NSMutableDictionary *accessoryListWithLinkQuality; // @synthesize accessoryListWithLinkQuality=_accessoryListWithLinkQuality;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(retain, nonatomic) NSMutableSet *accessoryUUIDs; // @synthesize accessoryUUIDs=_accessoryUUIDs;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property(nonatomic) __weak HMDResidentMesh *owner; // @synthesize owner=_owner;
- (void)_requestStatus;	// IMP=0x00000000006538e2
- (id)initWithDevice:(id)arg1 owner:(id)arg2;	// IMP=0x0000000000653790

@end

