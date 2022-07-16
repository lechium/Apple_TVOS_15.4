//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UISegmentedControlCacheKey : NSObject <NSCopying>
{
    struct CGSize _size;	// 8 = 0x8
    double _cornerRadius;	// 24 = 0x18
    double _scale;	// 32 = 0x20
    unsigned long long _state;	// 40 = 0x28
    struct CGColor *_primaryColor;	// 48 = 0x30
}

- (void)dealloc;	// IMP=0x000000000052511b
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000525088
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000525021
- (unsigned long long)hash;	// IMP=0x0000000000524f35
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000524f2a
- (id)initWithCornerRadius:(double)arg1 capSize:(struct CGSize)arg2 scale:(double)arg3 state:(unsigned long long)arg4 primaryColor:(struct CGColor *)arg5;	// IMP=0x0000000000524e94
- (id)initWithSize:(int)arg1 scale:(double)arg2 primaryColor:(struct CGColor *)arg3 background:(_Bool)arg4;	// IMP=0x0000000000524e08

@end

