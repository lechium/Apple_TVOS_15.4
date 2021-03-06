//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFUnfairLock, HMUser;

@interface HMAccessControl : NSObject <NSSecureCoding>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMUser *_user;	// 16 = 0x10
    unsigned long long _cachedHash;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000020f3fd
- (void).cxx_destruct;	// IMP=0x000000000020f33d
@property(readonly, nonatomic) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000020f2ba
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000020f22d
@property __weak HMUser *user; // @synthesize user=_user;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000020eef4
- (unsigned long long)hash;	// IMP=0x000000000020ee96
- (id)initWithUser:(id)arg1;	// IMP=0x000000000020edef
- (id)init;	// IMP=0x000000000020ed47

@end

