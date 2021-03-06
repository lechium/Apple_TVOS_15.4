//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore, geo_isolater;

@interface GEOUserAccountInfo : NSObject
{
    geo_isolater *_isolation;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
    _Bool _hasCheckedPrimaryAccount;	// 24 = 0x18
    ACAccount *_primaryICloudAccount;	// 32 = 0x20
    _Bool _hasCheckedPrimaryAuthKitAccount;	// 40 = 0x28
    ACAccount *_primaryAuthKitAccount;	// 48 = 0x30
}

+ (id)primaryICloudAccount;	// IMP=0x0000000000c16e1d
+ (_Bool)isCurrentICloudAccountUnderage;	// IMP=0x0000000000c16b42
+ (_Bool)hasValidICloudAccountForAddingRatingsAndPhotos;	// IMP=0x0000000000c16aff
+ (_Bool)isAccountInfoAvailable;	// IMP=0x0000000000c16aec
+ (id)sharedInstance;	// IMP=0x0000000000c16a2f
- (void).cxx_destruct;	// IMP=0x0000000000c172f9
- (void)_accountStoreDidChange:(id)arg1;	// IMP=0x0000000000c171f1
- (id)_primaryICloudAccountIsolated;	// IMP=0x0000000000c16fca
- (id)primaryICloudAccount;	// IMP=0x0000000000c16e6d
- (_Bool)isCurrentICloudAccountUnderage;	// IMP=0x0000000000c16b86
- (id)init;	// IMP=0x0000000000c16a84

@end

