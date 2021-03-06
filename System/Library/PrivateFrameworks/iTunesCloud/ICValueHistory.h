//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_items;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e3c75
- (void).cxx_destruct;	// IMP=0x00000000000e3a2c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e3a09
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e3921
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e38a6
- (unsigned long long)hash;	// IMP=0x00000000000e3890
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e3828
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e3766
- (void)removeAllValues;	// IMP=0x00000000000e374c
- (id)lastValueAndTimestamp:(unsigned long long *)arg1;	// IMP=0x00000000000e36cb
- (id)lastValue;	// IMP=0x00000000000e3677
- (id)firstValueBeforeOrEqualToTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e3597
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e34b7
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e33d9
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e3345
@property(readonly, nonatomic) long long count;
- (void)addValuesFromHistory:(id)arg1;	// IMP=0x00000000000e32dd
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000e3153

@end

