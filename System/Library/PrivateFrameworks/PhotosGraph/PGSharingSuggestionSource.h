//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PGSharingSuggestionSource : NSObject
{
}

- (id)suggestedResultsForInput:(id)arg1 withOptions:(id)arg2;	// IMP=0x00000000001cfd8e
- (_Bool)canRunWithInput:(id)arg1;	// IMP=0x00000000001cfd86
- (_Bool)canRunWithOptions:(id)arg1;	// IMP=0x00000000001cfd7e
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) NSString *details;
@property(readonly, nonatomic) NSString *name;
- (id)suggestionResultsWithPersons:(id)arg1;	// IMP=0x00000000001cfba4
- (id)suggestionResultWithPerson:(id)arg1 weight:(double)arg2;	// IMP=0x00000000001cfaf3
- (id)suggestionResultWithPerson:(id)arg1;	// IMP=0x00000000001cfade
- (id)sourceDescription;	// IMP=0x00000000001cfa63
- (id)description;	// IMP=0x00000000001cf9a3

@end

