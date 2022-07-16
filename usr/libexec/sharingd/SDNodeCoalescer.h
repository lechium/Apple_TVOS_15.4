//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SDNodeCoalescer : NSObject
{
    NSArray *_availableNodes;	// 8 = 0x8
    NSArray *_coalescedNodes;	// 16 = 0x10
    NSMutableDictionary *;	// 24 = 0x18
    NSMutableDictionary *_contactIdentifierMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000c9e7a
@property(retain, nonatomic) NSMutableDictionary *contactIdentifierMap; // @synthesize contactIdentifierMap=_contactIdentifierMap;
@property(retain, nonatomic) NSMutableDictionary *originalNodes; // @synthesize originalNodes=_originalNodes;
@property(readonly) NSArray *coalescedNodes; // @synthesize coalescedNodes=_coalescedNodes;
@property(retain) NSArray *availableNodes; // @synthesize availableNodes=_availableNodes;
- (id)mappedContactIdentifierForContactIdentifier:(id)arg1;	// IMP=0x00100000000c9df7
- (id)setMappedContactIdentifier:(id)arg1 relatedContactIdentifiers:(id)arg2;	// IMP=0x00100000000c9ab0
- (id)coalescedNodesForNewAvailableNodes:(id)arg1;	// IMP=0x00100000000c8a63
- (id)init;	// IMP=0x00100000000c89ee

@end
