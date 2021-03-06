//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKSync3PolicyCommonMethods-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface _DKSync3FeaturePolicy : NSObject <_DKSync3PolicyCommonMethods>
{
    _Bool _isSyncDisabled;	// 8 = 0x8
    _Bool _onlyMultiDevice;	// 9 = 0x9
    _Bool _onlySingleDevice;	// 10 = 0xa
    _Bool _requiresCharging;	// 11 = 0xb
    _Bool _pushTriggersSync;	// 12 = 0xc
    _Bool _additionsCountTowardTriggeredSyncBucket;	// 13 = 0xd
    _Bool _deletionsCountTowardTriggeredSyncBucket;	// 14 = 0xe
    _Bool _additionTriggersImmediateSync;	// 15 = 0xf
    _Bool _deletionTriggersImmediateSync;	// 16 = 0x10
    NSDictionary *_properties;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    NSString *_feature;	// 40 = 0x28
    NSArray *_streamNames;	// 48 = 0x30
    NSArray *_sources;	// 56 = 0x38
    NSArray *_destinations;	// 64 = 0x40
    NSString *_transport;	// 72 = 0x48
    unsigned long long _periodicSyncCadenceInMinutes;	// 80 = 0x50
    unsigned long long _oldestEventToSyncInDays;	// 88 = 0x58
    NSArray *_requiresCompanions;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000008789b
@property(retain, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
- (id)description;	// IMP=0x0000000000087366
- (id)init;	// IMP=0x0000000000086adc

@end

