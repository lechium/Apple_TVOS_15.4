//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMNoteFilter, NSNumber;

@interface EDAMBusinessQuery
{
    EDAMNoteFilter *_filter;	// 8 = 0x8
    NSNumber *_numExperts;	// 16 = 0x10
    NSNumber *_includeNotebooks;	// 24 = 0x18
    NSNumber *_includeNotesCounts;	// 32 = 0x20
}

+ (id)structFields;	// IMP=0x00000000001a8f54
+ (id)structName;	// IMP=0x00000000001a8f47
- (void).cxx_destruct;	// IMP=0x00000000001a918d
@property(retain, nonatomic) NSNumber *includeNotesCounts; // @synthesize includeNotesCounts=_includeNotesCounts;
@property(retain, nonatomic) NSNumber *includeNotebooks; // @synthesize includeNotebooks=_includeNotebooks;
@property(retain, nonatomic) NSNumber *numExperts; // @synthesize numExperts=_numExperts;
@property(retain, nonatomic) EDAMNoteFilter *filter; // @synthesize filter=_filter;

@end

