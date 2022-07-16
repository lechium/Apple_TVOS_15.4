//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface WFDatabaseResultTieredFetchRequestOperation
{
    NSArray *_fetchRequests;	// 8 = 0x8
    long long _resultsLimit;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000244e92
@property(readonly, nonatomic) long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) NSArray *fetchRequests; // @synthesize fetchRequests=_fetchRequests;
- (id)description;	// IMP=0x0000000000244da2
- (id)entity;	// IMP=0x0000000000244d28
- (long long)countWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000244b73
- (id)resultsWithContext:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000244874
- (id)initWithFetchRequests:(id)arg1 resultsLimit:(long long)arg2;	// IMP=0x00000000002447d5

@end

