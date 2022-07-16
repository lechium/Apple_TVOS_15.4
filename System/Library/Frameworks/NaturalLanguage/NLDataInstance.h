//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NLDataInstance : NSObject
{
}

- (id)subInstanceWithLocator:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;	// IMP=0x0000000000038f65
- (id)locatorsWithIndex:(unsigned long long)arg1 parameters:(struct _NLConstraintParameters)arg2 tagger:(id)arg3 tokenizer:(struct __CFStringTokenizer *)arg4;	// IMP=0x0000000000038f58
- (struct __CFDictionary *)instanceDictionary;	// IMP=0x0000000000038f50
- (id)formattedLineWithLabelMap:(id)arg1 vocabularyMap:(id)arg2;	// IMP=0x0000000000038f48
@property(readonly, copy) NSArray *labels;
@property(readonly, copy) NSString *label;
@property(readonly, copy) NSArray *tokens;
@property(readonly, copy) NSString *string;
- (id)initWithLine:(id)arg1 tokenizer:(struct __CFStringTokenizer *)arg2;	// IMP=0x0000000000038f1a
- (id)initWithString:(id)arg1 label:(id)arg2;	// IMP=0x0000000000038f0c

@end

