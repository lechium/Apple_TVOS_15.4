//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface ASDPurgeableApp : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_bundleID;	// 8 = 0x8
    NSString *_purgeableReason;	// 16 = 0x10
    long long _purgeableType;	// 24 = 0x18
    long long _staticDiskUsage;	// 32 = 0x20
    NSNumber *_storeItemID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001af69
- (void).cxx_destruct;	// IMP=0x000000000001b241
@property(copy, nonatomic) NSNumber *storeItemID; // @synthesize storeItemID=_storeItemID;
@property(nonatomic) long long staticDiskUsage; // @synthesize staticDiskUsage=_staticDiskUsage;
@property(nonatomic) long long purgeableType; // @synthesize purgeableType=_purgeableType;
@property(copy, nonatomic) NSString *purgeableReason; // @synthesize purgeableReason=_purgeableReason;
@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b0a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001af71
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001aec2
- (id)diagnosticDescription;	// IMP=0x000000000001ad73
- (id)description;	// IMP=0x000000000001ad31

@end

