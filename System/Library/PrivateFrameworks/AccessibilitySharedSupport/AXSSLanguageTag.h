//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXSSDialectMap, NSMutableOrderedSet, NSString;

@interface AXSSLanguageTag : NSObject
{
    _Bool _createdFromNewline;	// 8 = 0x8
    NSString *_taggedString;	// 16 = 0x10
    long long _offsetToInitialLocation;	// 24 = 0x18
    NSString *_content;	// 32 = 0x20
    AXSSDialectMap *_dialect;	// 40 = 0x28
    NSMutableOrderedSet *_predictedSecondaryDialects;	// 48 = 0x30
    struct _NSRange _taggedRange;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001d093
@property(retain, nonatomic) NSMutableOrderedSet *predictedSecondaryDialects; // @synthesize predictedSecondaryDialects=_predictedSecondaryDialects;
@property(readonly, nonatomic) _Bool createdFromNewline; // @synthesize createdFromNewline=_createdFromNewline;
@property(readonly, nonatomic) AXSSDialectMap *dialect; // @synthesize dialect=_dialect;
@property(readonly, copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long offsetToInitialLocation; // @synthesize offsetToInitialLocation=_offsetToInitialLocation;
@property(readonly, copy, nonatomic) NSString *taggedString; // @synthesize taggedString=_taggedString;
@property(readonly, nonatomic) struct _NSRange taggedRange; // @synthesize taggedRange=_taggedRange;
- (void)addPredictedSecondaryDialects:(id)arg1;	// IMP=0x000000000001cf6d
- (id)description;	// IMP=0x000000000001ce8a
- (id)initWithDialect:(id)arg1 range:(struct _NSRange)arg2 content:(id)arg3 createdFromNewline:(_Bool)arg4;	// IMP=0x000000000001cd8a

@end

