//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppPromotionDatabaseStore;

@interface InAppPromotionManager : NSObject
{
    InAppPromotionDatabaseStore *_databaseStore;	// 8 = 0x8
}

+ (id)manager;	// IMP=0x0040000000255fca
- (void).cxx_destruct;	// IMP=0x0020000000256568
- (id)promotionInfoForProductIdentifiers:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000256327
- (_Bool)setPromotionInfo:(id)arg1 forBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000025612d
- (void)removePromotionInfoForBundleID:(id)arg1;	// IMP=0x0010000000256113
- (id)init;	// IMP=0x001000000025604f

@end

