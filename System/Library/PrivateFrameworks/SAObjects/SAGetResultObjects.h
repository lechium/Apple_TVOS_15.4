//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SAGetResultObjects <SAServerBoundCommand>
{
}

+ (id)getResultObjectsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000015538
+ (id)getResultObjects;	// IMP=0x0000000000015526
- (_Bool)requiresResponse;	// IMP=0x0000000000015564
@property(copy, nonatomic) NSArray *objectIdentifiers;
- (id)encodedClassName;	// IMP=0x0000000000015519
- (id)groupIdentifier;	// IMP=0x0000000000015505

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

