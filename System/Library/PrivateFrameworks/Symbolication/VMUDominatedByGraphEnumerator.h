//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VMUDominatorGraph;

@interface VMUDominatedByGraphEnumerator
{
    VMUDominatorGraph *_dominatorGraph;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000322b4
- (id)statusDisplayDescription;	// IMP=0x00000000000322a7
- (void)enumerateEdgesOfNode:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000003223f
- (id)initWithGraph:(id)arg1 dominatorGraph:(id)arg2;	// IMP=0x00000000000321d9

@end

