//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface INDateRelevanceProvider
{
    NSDate *_startDate;	// 8 = 0x8
    NSDate *_endDate;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000002acd32
- (void).cxx_destruct;	// IMP=0x00000000002acd01
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002acc23
- (unsigned long long)hash;	// IMP=0x00000000002acbd6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002acaf4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002aca79
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x00000000002ac9c8

@end

