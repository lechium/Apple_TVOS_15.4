//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface WKTextSelectionRect : UITextSelectionRect
{
    struct SelectionGeometry _selectionGeometry;	// 8 = 0x8
    double _scaleFactor;	// 96 = 0x60
}

- (id).cxx_construct;	// IMP=0x0000000000369861
- (_Bool)isVertical;	// IMP=0x000000000036984c
- (_Bool)containsEnd;	// IMP=0x000000000036983b
- (_Bool)containsStart;	// IMP=0x000000000036982a
- (id)range;	// IMP=0x0000000000369822
- (long long)writingDirection;	// IMP=0x0000000000369810
- (struct CGRect)rect;	// IMP=0x00000000003697d8
- (id)_customHandleInfo;	// IMP=0x000000000036974e
- (id)_path;	// IMP=0x0000000000369611
- (id)initWithSelectionGeometry:(const void *)arg1 scaleFactor:(double)arg2;	// IMP=0x0000000000369589
- (id)initWithCGRect:(struct CGRect)arg1;	// IMP=0x000000000036950b

@end

