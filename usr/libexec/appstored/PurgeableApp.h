//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface PurgeableApp : NSObject
{
    NSString *_bundleID;	// 8 = 0x8
    NSNumber *_diskUsage;	// 16 = 0x10
    NSArray *_plugins;	// 24 = 0x18
    long long _order;	// 32 = 0x20
    long long _purgeableReason;	// 40 = 0x28
    NSString *_reason;	// 48 = 0x30
    NSNumber *_storeItemID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000004b8c5
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long purgeableReason; // @synthesize purgeableReason=_purgeableReason;
@property(nonatomic) long long order; // @synthesize order=_order;
@property(copy, nonatomic) NSArray *plugins; // @synthesize plugins=_plugins;
@property(copy, nonatomic) NSNumber *diskUsage; // @synthesize diskUsage=_diskUsage;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (id)description;	// IMP=0x001000000004b7eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004b714
- (id)asdApp;	// IMP=0x001000000004b5c0
- (id)initWithBundleID:(id)arg1;	// IMP=0x001000000004b566

@end

