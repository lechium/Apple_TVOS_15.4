//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface ASDJobSchedulerResponse <NSCopying, NSSecureCoding>
{
    NSArray *_bucketNames;	// 8 = 0x8
    NSArray *_currentItems;	// 16 = 0x10
    NSArray *_hardFailureItems;	// 24 = 0x18
    long long _maxItemCount;	// 32 = 0x20
    NSArray *_nextItems;	// 40 = 0x28
    NSArray *_skippedItems;	// 48 = 0x30
    NSArray *_softFailureItems;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005c725
- (void).cxx_destruct;	// IMP=0x000000000005ccd6
@property(copy) NSArray *softFailureItems; // @synthesize softFailureItems=_softFailureItems;
@property(copy) NSArray *skippedItems; // @synthesize skippedItems=_skippedItems;
@property(copy) NSArray *nextItems; // @synthesize nextItems=_nextItems;
@property(nonatomic) long long maxItemCount; // @synthesize maxItemCount=_maxItemCount;
@property(copy) NSArray *hardFailureItems; // @synthesize hardFailureItems=_hardFailureItems;
@property(readonly) NSArray *currentItems; // @synthesize currentItems=_currentItems;
@property(copy) NSArray *bucketNames; // @synthesize bucketNames=_bucketNames;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005cad5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005c72d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005c5e5
- (id)initWithItems:(id)arg1;	// IMP=0x000000000005c577
- (id)init;	// IMP=0x000000000005c55e

@end
