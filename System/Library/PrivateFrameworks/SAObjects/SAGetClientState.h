//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SAGetClientState
{
}

+ (id)getClientStateWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001148f
+ (id)getClientState;	// IMP=0x000000000001147d
- (_Bool)mutatingCommand;	// IMP=0x00000000000114df
- (_Bool)requiresResponse;	// IMP=0x00000000000114d7
@property(copy, nonatomic) NSArray *statesToGet;
- (id)encodedClassName;	// IMP=0x0000000000011470
- (id)groupIdentifier;	// IMP=0x000000000001145c

@end
