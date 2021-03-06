//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@class AssetRequestProperties, MISSING_TYPE;

@interface AssetRequest : NSMutableURLRequest
{
    AssetRequestProperties *_properties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000016aabd
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000016aa3e
- (MISSING_TYPE *)copyWithZone: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016aa2c
- (id)copyRequestProperties;	// IMP=0x001000000016aa0f
- (void)setAllowsExpensiveNetworkAccess:(_Bool)arg1;	// IMP=0x001000000016a9b9
- (void)setAllowsConstrainedNetworkAccess:(_Bool)arg1;	// IMP=0x001000000016a963
- (void)setAllowsCellularAccess:(_Bool)arg1;	// IMP=0x001000000016a90d
- (id)initWithURL:(id)arg1 cachePolicy:(unsigned long long)arg2 timeoutInterval:(double)arg3;	// IMP=0x001000000016a8b1
- (id)initWithURL:(id)arg1 properties:(id)arg2;	// IMP=0x001000000016a82b
- (id)initWithRequest:(id)arg1 properties:(id)arg2;	// IMP=0x001000000016a69a

@end

