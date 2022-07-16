//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAWLWatchListSearchResults <SAServerBoundCommand>
{
}

+ (id)watchListSearchResultsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003b286
+ (id)watchListSearchResults;	// IMP=0x000000000003b274
- (_Bool)requiresResponse;	// IMP=0x000000000003b2ce
@property(copy, nonatomic) NSArray *matchedResults;
- (id)encodedClassName;	// IMP=0x000000000003b267
- (id)groupIdentifier;	// IMP=0x000000000003b253

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
