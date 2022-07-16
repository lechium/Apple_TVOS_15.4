//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSData, NSDate;

@interface HMCacheEntry : HMFObject <NSSecureCoding>
{
    NSData *_data;	// 8 = 0x8
    NSDate *_lastModificationDate;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x000000000019fc4d
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000019fc45
- (void).cxx_destruct;	// IMP=0x000000000019fc14
@property(readonly, copy) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, copy) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 lastModificationDate:(id)arg2;	// IMP=0x000000000019fb21
@property(readonly) _Bool isExpired;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000019f884
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000019f7d6

@end

