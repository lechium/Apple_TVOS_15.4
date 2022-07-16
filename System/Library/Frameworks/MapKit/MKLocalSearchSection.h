//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MKLocalSearchSection : NSObject
{
    _Bool _shouldInterleaveClientResults;	// 8 = 0x8
    _Bool _enforceServerResultsOrder;	// 9 = 0x9
    _Bool _enableMapsSuggestServerReranking;	// 10 = 0xa
    NSArray *_results;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000164b40
@property(readonly, nonatomic) _Bool enableMapsSuggestServerReranking; // @synthesize enableMapsSuggestServerReranking=_enableMapsSuggestServerReranking;
@property(readonly, nonatomic) _Bool enforceServerResultsOrder; // @synthesize enforceServerResultsOrder=_enforceServerResultsOrder;
@property(readonly, nonatomic) _Bool shouldInterleaveClientResults; // @synthesize shouldInterleaveClientResults=_shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *results; // @synthesize results=_results;
- (id)initWithResults:(id)arg1 title:(id)arg2 shouldInterleaveClientResults:(_Bool)arg3 enforceServerResultsOrder:(_Bool)arg4 enableMapsSuggestServerReranking:(_Bool)arg5;	// IMP=0x0000000000164a42

@end
