//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EKStats : NSObject
{
}

+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned int)arg4;	// IMP=0x0000000000049ea9
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned int)arg4;	// IMP=0x0000000000049ea3
+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;	// IMP=0x0000000000049e9d
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;	// IMP=0x0000000000049e97
+ (void)clearDistribution:(id)arg1 domain:(int)arg2;	// IMP=0x0000000000049e91
+ (void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;	// IMP=0x0000000000049e8b
+ (void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;	// IMP=0x0000000000049e85
+ (void)clearScalar:(id)arg1 domain:(int)arg2;	// IMP=0x0000000000049e7f
+ (_Bool)enabled;	// IMP=0x0000000000049e77
- (void)commit;	// IMP=0x0000000000049f22
- (void)pushToDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned int)arg3;	// IMP=0x0000000000049f1c
- (void)setDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned int)arg3;	// IMP=0x0000000000049f16
- (void)pushToDistribution:(id)arg1 value:(double)arg2;	// IMP=0x0000000000049f10
- (void)setDistribution:(id)arg1 value:(double)arg2;	// IMP=0x0000000000049f0a
- (void)clearDistribution:(id)arg1;	// IMP=0x0000000000049f04
- (void)addToScalar:(id)arg1 value:(long long)arg2;	// IMP=0x0000000000049efe
- (void)setScalar:(id)arg1 value:(long long)arg2;	// IMP=0x0000000000049ef8
- (void)clearScalar:(id)arg1;	// IMP=0x0000000000049ef2
- (id)initWithDomain:(int)arg1 significantDigits:(unsigned int)arg2;	// IMP=0x0000000000049ec3
- (id)initWithDomain:(int)arg1;	// IMP=0x0000000000049eaf

@end
