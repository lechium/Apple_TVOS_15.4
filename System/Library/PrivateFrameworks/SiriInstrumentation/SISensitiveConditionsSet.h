//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriInstrumentation/NSCopying-Protocol.h>

@interface SISensitiveConditionsSet : NSObject <NSCopying>
{
    unsigned long long _bitmask;	// 8 = 0x8
}

+ (id)fromConditionType:(unsigned long long)arg1;	// IMP=0x000000000033e903
- (unsigned long long)hash;	// IMP=0x000000000033e9cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000033e972
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000033e943
- (id)intersectionSetWith:(id)arg1;	// IMP=0x000000000033e8c8
- (id)differenceSetFrom:(id)arg1;	// IMP=0x000000000033e88a
- (id)unionSetWith:(id)arg1;	// IMP=0x000000000033e84f
- (_Bool)isEqualToConditionsSet:(id)arg1;	// IMP=0x000000000033e83e
- (_Bool)intersectsWith:(id)arg1;	// IMP=0x000000000033e82d
- (_Bool)isEmpty;	// IMP=0x000000000033e81f
- (_Bool)isConditionSet:(unsigned long long)arg1;	// IMP=0x000000000033e800
- (void)removeConditions:(id)arg1;	// IMP=0x000000000033e7ef
- (void)removeCondition:(unsigned long long)arg1;	// IMP=0x000000000033e7d9
- (void)addCondition:(unsigned long long)arg1;	// IMP=0x000000000033e7c3
- (id)initWithBitMask:(unsigned long long)arg1;	// IMP=0x000000000033e786
- (id)init;	// IMP=0x000000000033e772

@end

