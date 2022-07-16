//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EMFInvertedIndex, EMFQueryResultOverrideList;

@interface EMFQueryEvaluator : NSObject
{
    EMFInvertedIndex *_index;	// 8 = 0x8
    EMFQueryResultOverrideList *_overrideList;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000023eef
@property(retain, nonatomic) EMFQueryResultOverrideList *overrideList; // @synthesize overrideList=_overrideList;
@property(readonly, nonatomic) EMFInvertedIndex *index; // @synthesize index=_index;
- (id)_overriddenResultsForQuery:(id)arg1;	// IMP=0x0000000000023e9b
- (id)performQuery:(id)arg1;	// IMP=0x0000000000023dac
- (id)initWithIndex:(id)arg1 andOverrideList:(id)arg2;	// IMP=0x0000000000023d24
- (id)initWithIndex:(id)arg1;	// IMP=0x0000000000023d10

@end

