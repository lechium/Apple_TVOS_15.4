//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMNoteFilter, NSString;

@interface EDAMSearchSuggestionQuery
{
    NSString *_prefix;	// 8 = 0x8
    EDAMNoteFilter *_contextFilter;	// 16 = 0x10
}

+ (id)structFields;	// IMP=0x00000000001a8240
+ (id)structName;	// IMP=0x00000000001a8233
- (void).cxx_destruct;	// IMP=0x00000000001a83b4
@property(retain, nonatomic) EDAMNoteFilter *contextFilter; // @synthesize contextFilter=_contextFilter;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;

@end

