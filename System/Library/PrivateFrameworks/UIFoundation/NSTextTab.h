//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoding-Protocol.h>
#import <UIFoundation/NSCopying-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface NSTextTab : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    struct {
        unsigned int alignment:4;
        unsigned int refCount:24;
        unsigned int unused:4;
    } _flags;	// 8 = 0x8
    double _location;	// 16 = 0x10
    id _reserved;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000080cfa
+ (id)columnTerminatorsForLocale:(id)arg1;	// IMP=0x0000000000080553
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080226
+ (void)initialize;	// IMP=0x000000000008009a
- (id)description;	// IMP=0x0000000000080c45
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000080b44
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000080a1b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008085a
- (unsigned long long)tabStopType;	// IMP=0x000000000008079b
@property(readonly, nonatomic) double location;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000080785
- (oneway void)release;	// IMP=0x00000000000806aa
- (void)dealloc;	// IMP=0x0000000000080672
@property(readonly, nonatomic) NSDictionary *options;
@property(readonly, nonatomic) long long alignment;
- (id)init;	// IMP=0x0000000000080535
- (id)initWithTextAlignment:(long long)arg1 location:(double)arg2 options:(id)arg3;	// IMP=0x0000000000080300
- (id)initWithType:(unsigned long long)arg1 location:(double)arg2;	// IMP=0x000000000008026a

@end
