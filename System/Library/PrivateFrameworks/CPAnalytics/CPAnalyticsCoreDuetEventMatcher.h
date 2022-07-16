//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPAnalyticsEventMatcher, NSObject, NSString;

@interface CPAnalyticsCoreDuetEventMatcher
{
    CPAnalyticsEventMatcher *_eventMatcher;	// 8 = 0x8
    _Bool _matchNextEvent;	// 16 = 0x10
    NSString *_datasetName;	// 24 = 0x18
    NSString *_identifierPropertyName;	// 32 = 0x20
    NSString *_subsetPropertyName;	// 40 = 0x28
    NSObject *_subsetPropertyValue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000003a88
@property(readonly, nonatomic) _Bool matchNextEvent; // @synthesize matchNextEvent=_matchNextEvent;
@property(readonly, nonatomic) NSObject *subsetPropertyValue; // @synthesize subsetPropertyValue=_subsetPropertyValue;
@property(readonly, nonatomic) NSString *subsetPropertyName; // @synthesize subsetPropertyName=_subsetPropertyName;
@property(readonly, nonatomic) NSString *identifierPropertyName; // @synthesize identifierPropertyName=_identifierPropertyName;
@property(readonly, nonatomic) NSString *datasetName; // @synthesize datasetName=_datasetName;
- (_Bool)doesMatch:(id)arg1;	// IMP=0x0000000000003a17
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000000373b
- (id)init;	// IMP=0x0000000000003732

@end

