//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, UIView;
@protocol SRSiriStackableContent;

@interface SRSiriViewStack : NSObject
{
    NSMutableOrderedSet *_mutableViews;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000004a72
@property(retain, nonatomic) NSMutableOrderedSet *mutableViews; // @synthesize mutableViews=_mutableViews;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000049f0
@property(readonly, nonatomic) UIView<SRSiriStackableContent> *mostRecentlyAddedView;
- (void)reset;	// IMP=0x001000000000493d
- (id)previousViewBeforeContentView:(id)arg1;	// IMP=0x00100000000048e4
- (id)viewAtIndex:(long long)arg1;	// IMP=0x0010000000004890
- (id)nextViewAfterContentView:(id)arg1;	// IMP=0x0010000000004837
- (_Bool)containsContentView:(id)arg1;	// IMP=0x0010000000004821
- (void)removeContentView:(id)arg1;	// IMP=0x001000000000479c
- (void)addContentView:(id)arg1;	// IMP=0x0010000000004719
@property(readonly, nonatomic) NSArray *contentViews;
- (void)setContentViews:(id)arg1;	// IMP=0x00100000000046a2
- (id)initWithContentViews:(id)arg1;	// IMP=0x0010000000004620

@end
