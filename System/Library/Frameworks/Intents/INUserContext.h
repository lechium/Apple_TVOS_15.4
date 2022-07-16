//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class INUserContextStore;

@interface INUserContext : NSObject <NSSecureCoding>
{
    INUserContextStore *_store;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000119a00
+ (long long)_type;	// IMP=0x00000000001199f8
- (void).cxx_destruct;	// IMP=0x00000000001199e8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001199da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001199d4
- (void)_becomeCurrentNoHelper;	// IMP=0x000000000011994e
- (void)_setStore:(id)arg1;	// IMP=0x000000000011993d
- (id)_init;	// IMP=0x00000000001198d7
- (void)becomeCurrent;	// IMP=0x0000000000119851

@end

