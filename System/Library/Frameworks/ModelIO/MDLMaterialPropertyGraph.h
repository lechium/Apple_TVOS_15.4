//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray;

@interface MDLMaterialPropertyGraph
{
    NSArray *_nodes;	// 48 = 0x30
    NSArray *_connections;	// 56 = 0x38
    NSMutableArray *_finalNodes;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002e3189
@property(readonly, nonatomic) NSArray *connections; // @synthesize connections=_connections;
@property(readonly, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)evaluate;	// IMP=0x00000000002e2e5d
- (id)initWithNodes:(id)arg1 connections:(id)arg2;	// IMP=0x00000000002e1f43

@end
