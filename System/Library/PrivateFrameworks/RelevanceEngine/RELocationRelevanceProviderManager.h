//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RelevanceEngine/REPredictorObserver-Protocol.h>

@class NSString;

@interface RELocationRelevanceProviderManager <REPredictorObserver>
{
}

+ (id)_dependencyClasses;	// IMP=0x000000000006f43c
+ (id)_features;	// IMP=0x000000000006f3aa
+ (Class)_relevanceProviderClass;	// IMP=0x000000000006f399
- (void)predictorDidUpdate:(id)arg1;	// IMP=0x000000000006faae
- (void)pause;	// IMP=0x000000000006fa39
- (void)resume;	// IMP=0x000000000006f9c4
- (int)_queryRevokableStatusForProvider:(id)arg1;	// IMP=0x000000000006f7c1
- (id)_valueForProvider:(id)arg1 context:(id)arg2 feature:(id)arg3;	// IMP=0x000000000006f485
- (id)_valueForProvider:(id)arg1 feature:(id)arg2;	// IMP=0x000000000006f46e
- (id)_locationOfProvider:(id)arg1;	// IMP=0x000000000006f272

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

