//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDNotificationRegistryRequest : HMFObject
{
    _Bool _enable;	// 8 = 0x8
    NSString *_userID;	// 16 = 0x10
    long long _retryCount;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000071785d
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy) NSString *userID; // @synthesize userID=_userID;
@property(readonly) _Bool enable; // @synthesize enable=_enable;
- (id)attributeDescriptions;	// IMP=0x0000000000717633
- (id)initWithEnable:(_Bool)arg1 userID:(id)arg2;	// IMP=0x00000000007175a7

@end

