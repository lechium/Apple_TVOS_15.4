//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol _DKKnowledgeQuerying;

@interface ARPCorrelationTask : NSObject
{
    NSString *_file;	// 8 = 0x8
    id <_DKKnowledgeQuerying> _knowledgeStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000ce19
@property(readonly, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(readonly, copy, nonatomic) NSString *file; // @synthesize file=_file;
- (id)longFormVideoAppBundleIDs;	// IMP=0x000000000000ca76
- (void)execute;	// IMP=0x000000000000bed9
- (id)initWithCorrelationsFile:(id)arg1 knowledgeStore:(id)arg2;	// IMP=0x000000000000be35

@end

