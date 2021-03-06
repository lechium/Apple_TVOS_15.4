//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@interface TRIDiskUsage : NSObject <NSCopying>
{
    unsigned long long _naiveSum;	// 8 = 0x8
    unsigned long long _deduplicatedSum;	// 16 = 0x10
    unsigned long long _compressedSum;	// 24 = 0x18
}

+ (id)usageWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;	// IMP=0x000000000001226c
@property(readonly, nonatomic) unsigned long long compressedSum; // @synthesize compressedSum=_compressedSum;
@property(readonly, nonatomic) unsigned long long deduplicatedSum; // @synthesize deduplicatedSum=_deduplicatedSum;
@property(readonly, nonatomic) unsigned long long naiveSum; // @synthesize naiveSum=_naiveSum;
- (id)init;	// IMP=0x000000000001254f
- (id)description;	// IMP=0x000000000001247a
- (unsigned long long)hash;	// IMP=0x0000000000012454
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000123ec
- (_Bool)isEqualToUsage:(id)arg1;	// IMP=0x0000000000012365
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001235a
- (id)copyWithReplacementCompressedSum:(unsigned long long)arg1;	// IMP=0x0000000000012321
- (id)copyWithReplacementDeduplicatedSum:(unsigned long long)arg1;	// IMP=0x00000000000122e8
- (id)copyWithReplacementNaiveSum:(unsigned long long)arg1;	// IMP=0x00000000000122af
- (id)initWithNaiveSum:(unsigned long long)arg1 deduplicatedSum:(unsigned long long)arg2 compressedSum:(unsigned long long)arg3;	// IMP=0x0000000000012219

@end

