//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface GKBrushList
{
    NSArray *_brushList;	// 16 = 0x10
}

+ (id)brushListWithBrushes:(id)arg1;	// IMP=0x00000000000073df
- (void).cxx_destruct;	// IMP=0x000000000000779a
@property(retain, nonatomic) NSArray *brushList; // @synthesize brushList=_brushList;
- (void)didDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;	// IMP=0x000000000000776f
- (void)willDrawRect:(struct CGRect)arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;	// IMP=0x0000000000007769
- (struct CGRect)drawRectForBrushAtIndex:(unsigned long long)arg1 fromRect:(struct CGRect)arg2 input:(id)arg3;	// IMP=0x0000000000007751
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x00000000000074b0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007439

@end

