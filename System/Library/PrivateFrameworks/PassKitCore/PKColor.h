//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKColor : NSObject <NSSecureCoding, NSCopying>
{
    double _red;	// 8 = 0x8
    double _green;	// 16 = 0x10
    double _blue;	// 24 = 0x18
    double _alpha;	// 32 = 0x20
    struct CGColor *_colorRef;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000085d92
+ (id)colorFromString:(id)arg1;	// IMP=0x000000000008530c
+ (id)colorWithH:(double)arg1 S:(double)arg2 B:(double)arg3 A:(double)arg4;	// IMP=0x000000000008519d
+ (id)colorWithR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;	// IMP=0x00000000000850f7
- (struct CGColor *)_newCGColor;	// IMP=0x0000000000085f1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000085f14
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000085e69
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000085d9a
@property(readonly, nonatomic) unsigned long long hash;
@property(readonly, nonatomic) __weak NSString *string;
@property(readonly, nonatomic) struct CGColor *CGColor;
- (double)luminance;	// IMP=0x0000000000085bf5
- (void)dealloc;	// IMP=0x00000000000850b8

@end

