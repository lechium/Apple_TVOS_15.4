//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface REFileImage
{
    NSString *_path;	// 8 = 0x8
    double _scale;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000dba45
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000db976
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000db8a7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000db7b5
- (unsigned long long)hash;	// IMP=0x00000000000db762
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000db706
- (id)initWithPath:(id)arg1 scale:(double)arg2;	// IMP=0x00000000000db676

@end

