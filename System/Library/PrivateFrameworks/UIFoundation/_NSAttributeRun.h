//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _NSAttributeRun : NSObject <NSCopying>
{
    struct _NSRange _range;	// 8 = 0x8
    NSMutableArray *_attributesArray;	// 24 = 0x18
}

- (struct _NSRange)range;	// IMP=0x0000000000068d62
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000068d57
- (void)restoreAttributesOfTextStorage:(id)arg1;	// IMP=0x0000000000068cb4
- (void)dealloc;	// IMP=0x0000000000068c71
- (id)initWithTextStorage:(id)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000068b24

@end

