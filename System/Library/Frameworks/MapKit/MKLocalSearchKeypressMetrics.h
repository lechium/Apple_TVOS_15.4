//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchKeypressMetrics : NSObject
{
    NSString *_query;	// 8 = 0x8
    NSArray *_queryTokens;	// 16 = 0x10
    NSArray *_suggestionEntries;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002170d2
@property(readonly, nonatomic) NSArray *suggestionEntries; // @synthesize suggestionEntries=_suggestionEntries;
@property(readonly, copy, nonatomic) NSArray *queryTokens; // @synthesize queryTokens=_queryTokens;
@property(readonly, copy, nonatomic) NSString *query; // @synthesize query=_query;
- (void)submitWithStatus:(unsigned long long)arg1;	// IMP=0x0000000000217080
- (id)initWithQuery:(id)arg1 queryTokens:(id)arg2 suggestionEntries:(id)arg3;	// IMP=0x0000000000216fa1

@end

