//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GKDynamicColumnSectionMetrics
{
    unsigned long long _columnsInPortrait;	// 176 = 0xb0
    unsigned long long _columnsInLandscape;	// 184 = 0xb8
}

+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;	// IMP=0x00000000000878cf
+ (id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(long long)arg3;	// IMP=0x0000000000087620
@property(nonatomic) unsigned long long columnsInLandscape; // @synthesize columnsInLandscape=_columnsInLandscape;
@property(nonatomic) unsigned long long columnsInPortrait; // @synthesize columnsInPortrait=_columnsInPortrait;
- (void)updateColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2;	// IMP=0x0000000000087b89
- (struct CGSize)itemSizeForCollectionView:(id)arg1;	// IMP=0x0000000000087a4a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000879cf
- (id)initWithIdiom:(long long)arg1;	// IMP=0x0000000000087970

@end
