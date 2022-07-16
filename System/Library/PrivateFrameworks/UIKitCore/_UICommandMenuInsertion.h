//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UICommandMenuInsertion
{
    NSArray *_fallbacks;	// 16 = 0x10
    NSArray *_insertsAtStart;	// 24 = 0x18
    NSArray *_insertsAtEnd;	// 32 = 0x20
    NSArray *_insertsBefore;	// 40 = 0x28
    NSArray *_insertsAfter;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e513ad
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;	// IMP=0x0000000000e512ba
- (void).cxx_destruct;	// IMP=0x0000000000e519ed
@property(readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;
@property(readonly, nonatomic) NSArray *insertsAtEnd; // @synthesize insertsAtEnd=_insertsAtEnd;
@property(readonly, nonatomic) NSArray *insertsAtStart; // @synthesize insertsAtStart=_insertsAtStart;
@property(readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e518a8
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000e5188f
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x0000000000e51878
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e51514
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;	// IMP=0x0000000000e513b5

// Remaining properties
@property(readonly, nonatomic) NSString *anchor; // @dynamic anchor;

@end
