//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebBackForwardListPrivate, WebHistoryItem;

@interface WebBackForwardList : NSObject
{
    WebBackForwardListPrivate *_private;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x000000000009eee0
- (id)itemAtIndex:(int)arg1;	// IMP=0x00000000000a01e0
@property(readonly, nonatomic) int forwardListCount;
@property(readonly, nonatomic) int backListCount;
- (unsigned long long)pageCacheSize;	// IMP=0x00000000000a0190
- (void)setPageCacheSize:(unsigned long long)arg1;	// IMP=0x00000000000a0160
- (id)description;	// IMP=0x000000000009ff20
@property(nonatomic) int capacity;
- (id)forwardListWithLimit:(int)arg1;	// IMP=0x000000000009fd20
- (id)backListWithLimit:(int)arg1;	// IMP=0x000000000009fb50
@property(readonly, nonatomic) WebHistoryItem *forwardItem;
@property(readonly, nonatomic) WebHistoryItem *currentItem;
@property(readonly, nonatomic) WebHistoryItem *backItem;
- (void)goToItem:(id)arg1;	// IMP=0x000000000009f880
- (void)goForward;	// IMP=0x000000000009f860
- (void)goBack;	// IMP=0x000000000009f830
- (_Bool)containsItem:(id)arg1;	// IMP=0x000000000009f730
- (void)setToMatchDictionaryRepresentation:(id)arg1;	// IMP=0x000000000009f480
- (id)dictionaryRepresentation;	// IMP=0x000000000009f2d0
- (void)removeItem:(id)arg1;	// IMP=0x000000000009f290
- (void)addItem:(id)arg1;	// IMP=0x000000000009f1b0
- (void)_close;	// IMP=0x000000000009f1a0
- (void)dealloc;	// IMP=0x000000000009efd0
- (id)init;	// IMP=0x000000000009eef0
- (id)initWithBackForwardList:(void *)arg1;	// IMP=0x000000000009ecd0

@end

