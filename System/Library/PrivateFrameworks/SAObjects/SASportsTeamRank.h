//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSNumber, NSString;

@interface SASportsTeamRank <SAAceSerializable>
{
}

+ (id)teamRankWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000023944
+ (id)teamRank;	// IMP=0x0000000000023932
@property(copy, nonatomic) NSString *source;
@property(copy, nonatomic) NSNumber *primary;
@property(copy, nonatomic) NSNumber *position;
- (id)encodedClassName;	// IMP=0x0000000000023925
- (id)groupIdentifier;	// IMP=0x0000000000023911

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

