//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIMotionEffect, UIView;

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEngineClient : NSObject
{
    UIMotionEffect *_effect;	// 8 = 0x8
    UIView *_view;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a66528
- (id)description;	// IMP=0x0000000000a664ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a66452
- (unsigned long long)hash;	// IMP=0x0000000000a66413
- (id)initWithMotionEffect:(id)arg1 view:(id)arg2;	// IMP=0x0000000000a6636b

@end

