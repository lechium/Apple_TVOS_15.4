//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PGGraphMeNode
{
}

+ (id)filter;	// IMP=0x0000000000330310
- (id)relationshipEdgesToPersonNode:(id)arg1 matchingQuery:(unsigned long long)arg2;	// IMP=0x00000000003306e1
- (void)enumeratePersonNodesWithRelationship:(unsigned long long)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000330668
- (id)_relationshipLabelForRelationship:(unsigned long long)arg1;	// IMP=0x00000000003305e5
- (void)_enumerateRelationshipWithLabel:(id)arg1 matchingQuery:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000033053c
- (_Bool)_status:(unsigned long long)arg1 fitsQuery:(unsigned long long)arg2;	// IMP=0x000000000033050d
- (void)_enumerateSocialGroupNodesForRelationshipLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000033046d
- (void)enumerateSocialGroupNodesWithRelationship:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000330364
- (id)label;	// IMP=0x0000000000330345

@end

