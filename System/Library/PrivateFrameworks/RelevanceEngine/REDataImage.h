//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface REDataImage
{
    NSData *_data;	// 8 = 0x8
    double _scale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dbe61
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dbd92
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000dbcc3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dbb97
- (unsigned long long)hash;	// IMP=0x00000000000dbb44
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbae8
- (id)initWithData:(id)arg1 scale:(double)arg2;	// IMP=0x00000000000dba58

@end
