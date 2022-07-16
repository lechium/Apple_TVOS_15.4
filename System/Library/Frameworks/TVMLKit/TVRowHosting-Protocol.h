//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/NSObject-Protocol.h>

@class NSArray;

@protocol TVRowHosting <NSObject>
- (NSArray *)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;

@optional
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
- (NSArray *)showcaseRowMetricsForExpectedWidth:(double)arg1;
@end
