//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _CPButtonForFeedback;

@protocol _CPDynamicButtonVisibilityFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *visibleDynamicButton2s;
@property(copy, nonatomic) NSString *cardSectionIdentifier;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPButtonForFeedback *)visibleDynamicButton2sAtIndex:(unsigned long long)arg1;
- (unsigned long long)visibleDynamicButton2sCount;
- (void)addVisibleDynamicButton2s:(_CPButtonForFeedback *)arg1;
- (void)clearVisibleDynamicButton2s;
@end

