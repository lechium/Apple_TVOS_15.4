//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface BMDSLArray
{
    NSArray *_values;	// 8 = 0x8
    NSString *_valueClassName;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005883
- (void).cxx_destruct;	// IMP=0x0000000000005df1
@property(copy, nonatomic) NSString *valueClassName; // @synthesize valueClassName=_valueClassName;
@property(readonly, copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000595f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000588b
- (id)upstreams;	// IMP=0x0000000000005876
- (id)initWithValues:(id)arg1 valueClassName:(id)arg2;	// IMP=0x0000000000005852
- (id)initWithName:(id)arg1 version:(unsigned int)arg2 values:(id)arg3 valueClassName:(id)arg4;	// IMP=0x000000000000571c
- (id)bpsPublisher;	// IMP=0x000000000000767d

@end

