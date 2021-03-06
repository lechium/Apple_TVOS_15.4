//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSDate;

@interface _HKAuthorizationRecord : NSObject <NSCopying, NSSecureCoding>
{
    long long _status;	// 8 = 0x8
    long long _request;	// 16 = 0x10
    long long _mode;	// 24 = 0x18
    NSDate *_anchorLimitModifiedDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e48e2
+ (id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;	// IMP=0x00000000001e4430
- (void).cxx_destruct;	// IMP=0x00000000001e4cff
@property(readonly, copy, nonatomic) NSDate *anchorLimitModifiedDate; // @synthesize anchorLimitModifiedDate=_anchorLimitModifiedDate;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long request; // @synthesize request=_request;
@property(nonatomic) long long status; // @synthesize status=_status;
- (id)description;	// IMP=0x00000000001e4a67
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e49ce
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e48ea
- (id)recordWithSharingDisabled;	// IMP=0x00000000001e484b
- (id)recordWithReadingDisabled;	// IMP=0x00000000001e47b4
- (_Bool)isCompatibleStatus:(long long)arg1;	// IMP=0x00000000001e4738
- (_Bool)readingEnabled;	// IMP=0x00000000001e46f3
- (_Bool)sharingEnabled;	// IMP=0x00000000001e46ae
- (_Bool)deniedReading;	// IMP=0x00000000001e4678
- (_Bool)deniedSharing;	// IMP=0x00000000001e4644
- (_Bool)requestedReading;	// IMP=0x00000000001e462d
- (_Bool)requestedSharing;	// IMP=0x00000000001e4616
- (unsigned long long)hash;	// IMP=0x00000000001e45f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e4553
- (id)_deepCopy;	// IMP=0x00000000001e44a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e449c
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;	// IMP=0x00000000001e439c

@end

