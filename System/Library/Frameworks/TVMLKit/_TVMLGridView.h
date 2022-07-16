//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVMLKit/TVRowHosting_Collection-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface _TVMLGridView <TVRowHosting_Collection>
{
    _Bool _configureForListTemplate;	// 8 = 0x8
    UIView *_headerView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000537b
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) _Bool configureForListTemplate; // @synthesize configureForListTemplate=_configureForListTemplate;
- (id)rowMetricsForExpectedWidth:(double)arg1 withContentInset:(struct UIEdgeInsets)arg2 firstItemRowIndex:(long long *)arg3;	// IMP=0x0000000000004aa8
- (id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long *)arg2;	// IMP=0x0000000000004a36
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000004986

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool shouldBindRowsTogether;
@property(readonly) Class superclass;

@end

