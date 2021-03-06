//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString, NSUnitConverter;

@interface NSDimension <NSSecureCoding>
{
    unsigned long long _reserved;	// 16 = 0x10
    NSUnitConverter *_converter;	// 24 = 0x18
    NSString *_icuSubtype;	// 32 = 0x20
}

+ (id)icuType;	// IMP=0x000000000008175a
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000081752
+ (id)baseUnit;	// IMP=0x00000000000813a6
+ (id)_measurementWithNaturalScale:(id)arg1 system:(unsigned long long)arg2;	// IMP=0x000000000008139d
@property(readonly) NSString *icuSubtype; // @synthesize icuSubtype=_icuSubtype;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008166a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000814f8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000081457
- (id)dimension;	// IMP=0x000000000008144e
@property(readonly, copy) NSUnitConverter *converter; // @synthesize converter=_converter;
@property(readonly) unsigned long long specifier; // @synthesize specifier=_reserved;
- (void)dealloc;	// IMP=0x0000000000081338
- (id)initWithSpecifier:(unsigned long long)arg1 symbol:(id)arg2 converter:(id)arg3;	// IMP=0x00000000000812a2
- (id)initWithSymbol:(id)arg1 converter:(id)arg2;	// IMP=0x0000000000081283

@end

