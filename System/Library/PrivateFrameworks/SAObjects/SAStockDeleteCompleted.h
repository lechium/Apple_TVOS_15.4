//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAStockDeleteCompleted <SAServerBoundCommand>
{
}

+ (id)deleteCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001c548
+ (id)deleteCompleted;	// IMP=0x000000000001c536
- (_Bool)requiresResponse;	// IMP=0x000000000001c5b2
@property(copy, nonatomic) NSArray *stocks;
@property(copy, nonatomic) NSArray *results;
- (id)encodedClassName;	// IMP=0x000000000001c529
- (id)groupIdentifier;	// IMP=0x000000000001c515

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
