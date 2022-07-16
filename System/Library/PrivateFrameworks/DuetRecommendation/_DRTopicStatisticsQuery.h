//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDuet/_DKQuery.h>

#import <DuetRecommendation/_DKExecutableQuery-Protocol.h>

@class NSObject, NSPredicate, _DRTopicInterestSummary;
@protocol OS_dispatch_queue;

@interface _DRTopicStatisticsQuery : _DKQuery <_DKExecutableQuery>
{
    NSObject<OS_dispatch_queue> *_defaultQueue;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
    _DRTopicInterestSummary *_summary;	// 24 = 0x18
}

+ (id)sumExpression;	// IMP=0x0000000000004d6b
+ (id)countExpression;	// IMP=0x0000000000004c10
+ (id)topicStatisticsQueryWithFilter:(id)arg1;	// IMP=0x000000000000492a
+ (id)topicStatisticsQuery;	// IMP=0x0000000000004906
- (void).cxx_destruct;	// IMP=0x000000000000534a
@property(retain) _DRTopicInterestSummary *summary; // @synthesize summary=_summary;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004ecd
- (id)handleResults:(id)arg1 error:(id)arg2;	// IMP=0x0000000000004a93
- (void)clearSummary;	// IMP=0x0000000000004a4c
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000004973

@end

