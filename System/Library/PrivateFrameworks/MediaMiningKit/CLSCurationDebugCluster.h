//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CLSCurationDebugCluster
{
    NSSet *_debugClusters;	// 40 = 0x28
    NSSet *_unclusteredDebugItems;	// 48 = 0x30
    NSString *_reason;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009c96b
@property(readonly) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSSet *unclusteredDebugItems; // @synthesize unclusteredDebugItems=_unclusteredDebugItems;
- (id)timestamp;	// IMP=0x000000000009c603
- (id)dictionaryRepresentation;	// IMP=0x000000000009be9b
- (void)resetWithReason:(id)arg1 agent:(id)arg2 stage:(id)arg3;	// IMP=0x000000000009bc9a
- (void)addDebugClusters:(id)arg1;	// IMP=0x000000000009ba4a
- (void)setDebugClusters:(id)arg1;	// IMP=0x000000000009b7eb
- (id)allDebugItems;	// IMP=0x000000000009b602
- (id)initWithDebugItems:(id)arg1 reason:(id)arg2;	// IMP=0x000000000009b554

@end

