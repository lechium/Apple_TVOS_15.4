//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SACreateVOXList <SAServerBoundCommand>
{
}

+ (id)createVOXListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000039e3f
+ (id)createVOXList;	// IMP=0x0000000000039e2d
- (_Bool)requiresResponse;	// IMP=0x0000000000039eed
@property(nonatomic) long long pageSize;
@property(copy, nonatomic) NSArray *items;
@property(copy, nonatomic) NSArray *introductions;
@property(copy, nonatomic) NSString *domainName;
- (id)encodedClassName;	// IMP=0x0000000000039e20
- (id)groupIdentifier;	// IMP=0x0000000000039e0c

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

