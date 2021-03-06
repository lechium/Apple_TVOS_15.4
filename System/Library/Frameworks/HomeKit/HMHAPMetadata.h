//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMProtoBufMerge-Protocol.h>

@class HMFUnfairLock, NSDictionary, NSNumber, NSString;

@interface HMHAPMetadata : NSObject <HMProtoBufMerge>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSNumber *_version;	// 16 = 0x10
    NSDictionary *_hapChrMap;	// 24 = 0x18
    NSDictionary *_hapSvcMap;	// 32 = 0x20
    NSDictionary *_hapCategoryMap;	// 40 = 0x28
}

+ (id)getSharedInstance;	// IMP=0x0000000000172dfc
- (void).cxx_destruct;	// IMP=0x0000000000172d3f
@property(retain, nonatomic) NSDictionary *hapCategoryMap; // @synthesize hapCategoryMap=_hapCategoryMap;
@property(retain, nonatomic) NSDictionary *hapSvcMap; // @synthesize hapSvcMap=_hapSvcMap;
@property(retain, nonatomic) NSDictionary *hapChrMap; // @synthesize hapChrMap=_hapChrMap;
- (_Bool)shouldNotCacheCharacteristicOfType:(id)arg1;	// IMP=0x0000000000172c90
- (_Bool)applyProtoBufData:(id)arg1;	// IMP=0x000000000017224b
- (id)categoryForCategoryType:(id)arg1;	// IMP=0x0000000000171fca
- (id)categoryForNumber:(id)arg1;	// IMP=0x0000000000171e7a
- (id)characteristicTypeDescription:(id)arg1;	// IMP=0x0000000000171dbe
- (id)serviceTypeDescription:(id)arg1;	// IMP=0x0000000000171d02
- (id)init;	// IMP=0x0000000000171c9c
@property(retain) NSNumber *version; // @synthesize version=_version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

