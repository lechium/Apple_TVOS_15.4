//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSString;

@interface DMFUser : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _hasDataToSync;	// 8 = 0x8
    _Bool _isCurrentUser;	// 9 = 0x9
    NSString *_username;	// 16 = 0x10
    unsigned long long _dataQuota;	// 24 = 0x18
    unsigned long long _dataUsed;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000003b4f0
- (void).cxx_destruct;	// IMP=0x000000000003bce1
@property(readonly, nonatomic) _Bool isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(readonly, nonatomic) _Bool hasDataToSync; // @synthesize hasDataToSync=_hasDataToSync;
@property(readonly, nonatomic) unsigned long long dataUsed; // @synthesize dataUsed=_dataUsed;
@property(readonly, nonatomic) unsigned long long dataQuota; // @synthesize dataQuota=_dataQuota;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;	// IMP=0x000000000003baf1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003b936
- (unsigned long long)hash;	// IMP=0x000000000003b88f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003b6e7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003b4f8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003b42e
- (id)initWithUsername:(id)arg1 dataQuota:(unsigned long long)arg2 dataUsed:(unsigned long long)arg3 hasDataToSync:(_Bool)arg4 isCurrentUser:(_Bool)arg5;	// IMP=0x000000000003b394

@end
