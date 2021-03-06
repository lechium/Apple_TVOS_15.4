//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKContentProvider-Protocol.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface _DKKnowledgeContentProvider : NSObject <_DKContentProvider>
{
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000091ade
@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
- (void)executeQuery:(id)arg1 queue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000919c9
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009193e
- (id)initWithKnowledgeStore:(id)arg1;	// IMP=0x00000000000918d6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

