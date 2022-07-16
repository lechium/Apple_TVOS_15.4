//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAStockAddCompleted <SAServerBoundCommand>
{
}

+ (id)addCompletedWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000013b0f
+ (id)addCompleted;	// IMP=0x0000000000013afd
- (_Bool)requiresResponse;	// IMP=0x0000000000013b79
@property(copy, nonatomic) NSArray *stocks;
@property(copy, nonatomic) NSArray *results;
- (id)encodedClassName;	// IMP=0x0000000000013af0
- (id)groupIdentifier;	// IMP=0x0000000000013adc

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
