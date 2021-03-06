//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PKSettingsDeepLinkControllerDataSource, PKSettingsDeepLinkControllerDelegate;

@interface PKSettingsDeepLinkController : NSObject
{
    id <PKSettingsDeepLinkControllerDataSource> _dataSource;	// 8 = 0x8
    id <PKSettingsDeepLinkControllerDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002e2b2d
- (id)_percentEncodeReferrerIdentifier:(id)arg1;	// IMP=0x00000000002e2a7c
- (void)_presentTransactionDetailsForTransactionWithServiceIdentifier:(id)arg1 transactionSourceIdentifier:(id)arg2;	// IMP=0x00000000002e2280
- (void)_presentTransactionDetailsForTransactionWithIdentifier:(id)arg1;	// IMP=0x00000000002e1f1b
- (void)handleDeepLinkResourceDictionary:(id)arg1;	// IMP=0x00000000002dfc99
- (id)initWithDataSource:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000002dfc07
- (id)init;	// IMP=0x00000000002dfbf9

@end

