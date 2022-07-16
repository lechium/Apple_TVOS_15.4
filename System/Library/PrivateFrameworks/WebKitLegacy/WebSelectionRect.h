//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKitLegacy/NSCopying-Protocol.h>

@interface WebSelectionRect : NSObject <NSCopying>
{
    struct CGRect m_rect;	// 8 = 0x8
    int m_writingDirection;	// 40 = 0x28
    _Bool m_isLineBreak;	// 44 = 0x2c
    _Bool m_isFirstOnLine;	// 45 = 0x2d
    _Bool m_isLastOnLine;	// 46 = 0x2e
    _Bool m_containsStart;	// 47 = 0x2f
    _Bool m_containsEnd;	// 48 = 0x30
    _Bool m_isInFixedPosition;	// 49 = 0x31
    _Bool m_isHorizontal;	// 50 = 0x32
}

+ (struct CGRect)endEdge:(id)arg1;	// IMP=0x0000000000125db0
+ (struct CGRect)startEdge:(id)arg1;	// IMP=0x0000000000125af0
+ (id)selectionRect;	// IMP=0x0000000000125ad0
@property(nonatomic) _Bool isHorizontal; // @synthesize isHorizontal=m_isHorizontal;
@property(nonatomic) _Bool isInFixedPosition; // @synthesize isInFixedPosition=m_isInFixedPosition;
@property(nonatomic) _Bool containsEnd; // @synthesize containsEnd=m_containsEnd;
@property(nonatomic) _Bool containsStart; // @synthesize containsStart=m_containsStart;
@property(nonatomic) _Bool isLastOnLine; // @synthesize isLastOnLine=m_isLastOnLine;
@property(nonatomic) _Bool isFirstOnLine; // @synthesize isFirstOnLine=m_isFirstOnLine;
@property(nonatomic) _Bool isLineBreak; // @synthesize isLineBreak=m_isLineBreak;
@property(nonatomic) int writingDirection; // @synthesize writingDirection=m_writingDirection;
@property(nonatomic) struct CGRect rect; // @synthesize rect=m_rect;
- (id)description;	// IMP=0x00000000001262d0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000126160
- (id)init;	// IMP=0x0000000000126070

@end
