//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSTimeZone;

@interface REDateContentProvider
{
    NSDate *_date;	// 8 = 0x8
    unsigned long long _units;	// 16 = 0x10
    NSTimeZone *_timeZone;	// 24 = 0x18
}

+ (id)dateContentProviderWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;	// IMP=0x00000000000b8938
- (void).cxx_destruct;	// IMP=0x00000000000b8f30
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) unsigned long long units; // @synthesize units=_units;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b8de6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b8d1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b8beb
- (unsigned long long)hash;	// IMP=0x00000000000b8b93
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8b2d
- (id)attributedStringRepresentation;	// IMP=0x00000000000b8a87
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 timeZone:(id)arg3;	// IMP=0x00000000000b89b3

@end
