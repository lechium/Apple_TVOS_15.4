//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSDateInterval;

@interface RTLocationOfInterestEnumerationOptions <NSCopying, NSSecureCoding>
{
    _Bool _ascending;	// 8 = 0x8
    _Bool _wrappedVisit;	// 9 = 0x9
    unsigned long long _batchSize;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b4e3
- (void).cxx_destruct;	// IMP=0x000000000001b6c8
@property(readonly, nonatomic) _Bool wrappedVisit; // @synthesize wrappedVisit=_wrappedVisit;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(readonly, nonatomic) unsigned long long batchSize; // @synthesize batchSize=_batchSize;
@property(readonly, nonatomic) _Bool ascending; // @synthesize ascending=_ascending;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b5a6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b4eb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b471
- (unsigned long long)hash;	// IMP=0x000000000001b366
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b1fd
- (CDUnknownBlockType)processingBlock;	// IMP=0x000000000001af95
- (Class)enumeratedType;	// IMP=0x000000000001af84
- (id)initWithAscending:(_Bool)arg1 batchSize:(unsigned long long)arg2 dateInterval:(id)arg3 wrappedVisit:(_Bool)arg4;	// IMP=0x000000000001ae14
- (id)init;	// IMP=0x000000000001adf5

@end

