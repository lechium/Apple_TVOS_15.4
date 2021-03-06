//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOPDDisplayHeaderSubstitute, GEORelatedSearchSuggestion, NSString;

@interface GEODisplayHeaderSubstitute : NSObject
{
    GEOPDDisplayHeaderSubstitute *_displayHeaderSubstitute;	// 8 = 0x8
    GEORelatedSearchSuggestion *_relatedSearchSuggestion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000098d0a4
@property(retain, nonatomic) GEORelatedSearchSuggestion *relatedSearchSuggestion; // @synthesize relatedSearchSuggestion=_relatedSearchSuggestion;
@property(retain, nonatomic) GEOPDDisplayHeaderSubstitute *displayHeaderSubstitute; // @synthesize displayHeaderSubstitute=_displayHeaderSubstitute;
@property(readonly, nonatomic) NSString *interpretedQuery;
@property(readonly, nonatomic) int substituteType;
- (id)initWithPDDisplayHeaderSubstitute:(id)arg1;	// IMP=0x000000000098cef9

@end

