//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <USDKit/USKIterator-Protocol.h>

@interface USKPropertyIterator : NSObject <USKIterator>
{
    struct vector<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty, std::allocator<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty>> _properties;	// 8 = 0x8
    struct __wrap_iter<pxrInternal_v0_20__pxrReserved__usdkit__::UsdProperty *> {
        struct UsdProperty *__i;
    } _it;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x0000000000468ccb
- (void).cxx_destruct;	// IMP=0x0000000000468cbd
- (id)nextObject;	// IMP=0x0000000000468b9a
- (id)initWithProperties:(const void *)arg1;	// IMP=0x0000000000468b07

@end

