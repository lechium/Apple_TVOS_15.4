//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface INDailyRoutineRelevanceProvider
{
    long long _situation;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016cee5
@property(readonly, nonatomic) long long situation; // @synthesize situation=_situation;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000016ce70
- (unsigned long long)hash;	// IMP=0x000000000016ce5f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000016ce21
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016cdf7
- (id)initWithSituation:(long long)arg1;	// IMP=0x000000000016cd97

@end

