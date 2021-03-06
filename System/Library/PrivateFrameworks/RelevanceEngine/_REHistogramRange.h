//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>
#import <RelevanceEngine/REComparable-Protocol.h>

@class NSString;

@interface _REHistogramRange : NSObject <NSCopying, REComparable>
{
    unsigned long long _min;	// 8 = 0x8
    unsigned long long _max;	// 16 = 0x10
    unsigned long long _mid;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long mid; // @synthesize mid=_mid;
@property(readonly, nonatomic) unsigned long long max; // @synthesize max=_max;
@property(readonly, nonatomic) unsigned long long min; // @synthesize min=_min;
- (long long)compare:(id)arg1;	// IMP=0x000000000003c427
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003c3da
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003c19a
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x000000000003c127
- (id)initWithMin:(unsigned long long)arg1 max:(unsigned long long)arg2;	// IMP=0x000000000003c06c
- (id)initWithValue:(unsigned long long)arg1 binningSize:(unsigned long long)arg2;	// IMP=0x000000000003be8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

