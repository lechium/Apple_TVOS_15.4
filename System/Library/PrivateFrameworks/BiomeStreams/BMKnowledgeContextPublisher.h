//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSPublisher.h>

#import <BiomeStreams/BMLiveEventsPublisher-Protocol.h>

@class NSString, _DKEventQuery;
@protocol _CDUserContext, _DKKnowledgeQuerying;

@interface BMKnowledgeContextPublisher : BPSPublisher <BMLiveEventsPublisher>
{
    _Bool _includeLiveEvents;	// 8 = 0x8
    _DKEventQuery *_query;	// 16 = 0x10
    id <_DKKnowledgeQuerying> _store;	// 24 = 0x18
    id <_CDUserContext> _context;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000a1943
@property(nonatomic) _Bool includeLiveEvents; // @synthesize includeLiveEvents=_includeLiveEvents;
@property(retain, nonatomic) id <_CDUserContext> context; // @synthesize context=_context;
@property(retain, nonatomic) id <_DKKnowledgeQuerying> store; // @synthesize store=_store;
@property(retain, nonatomic) _DKEventQuery *query; // @synthesize query=_query;
- (id)withLiveEvents;	// IMP=0x00000000000a17f7
- (void)subscribe:(id)arg1;	// IMP=0x00000000000a15de
- (id)initWithQuery:(id)arg1 store:(id)arg2 context:(id)arg3 includeLiveEvents:(_Bool)arg4;	// IMP=0x00000000000a1506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

