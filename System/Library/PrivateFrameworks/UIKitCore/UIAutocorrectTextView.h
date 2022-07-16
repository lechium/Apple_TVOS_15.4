//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIFont;

__attribute__((visibility("hidden")))
@interface UIAutocorrectTextView
{
    NSString *m_string;	// 112 = 0x70
    int m_type;	// 120 = 0x78
    int m_edgeType;	// 124 = 0x7c
    UIFont *m_textFont;	// 128 = 0x80
    _Bool m_animating;	// 136 = 0x88
    _Bool m_isLongString;	// 137 = 0x89
}

@property(nonatomic) _Bool isLongString; // @synthesize isLongString=m_isLongString;
@property(nonatomic) _Bool animating; // @synthesize animating=m_animating;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000007d0aaf
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x00000000007d0a23
- (struct CGRect)_calculateRectForExpandedHitRegion;	// IMP=0x00000000007d0920
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000007d0266
- (void)setEdgeType:(int)arg1;	// IMP=0x00000000007d0164
- (void)dealloc;	// IMP=0x00000000007d010d
- (id)initWithFrame:(struct CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4;	// IMP=0x00000000007cfec1

@end
