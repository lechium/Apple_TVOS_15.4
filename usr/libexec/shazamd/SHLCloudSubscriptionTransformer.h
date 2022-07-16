//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKModifySubscriptionsOperation, SHLSyncSessionConfiguration;

__attribute__((visibility("hidden")))
@interface SHLCloudSubscriptionTransformer : NSObject
{
    SHLSyncSessionConfiguration *_configuration;	// 8 = 0x8
    CKModifySubscriptionsOperation *_modifySubscriptionsOperation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000026816
@property(retain, nonatomic) CKModifySubscriptionsOperation *modifySubscriptionsOperation; // @synthesize modifySubscriptionsOperation=_modifySubscriptionsOperation;
@property(readonly, nonatomic) SHLSyncSessionConfiguration *configuration; // @synthesize configuration=_configuration;
- (id)newSubscriptionForZoneID:(id)arg1;	// IMP=0x0010000000026734
- (id)cloudBackedOperationForZones:(id)arg1 container:(id)arg2;	// IMP=0x0010000000025d39
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0010000000025cb4

@end
