//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface VMUProgressBar : NSObject
{
    NSString *_title;	// 8 = 0x8
    unsigned long long _totalItems;	// 16 = 0x10
    NSString *_itemName;	// 24 = 0x18
    unsigned long long _itemsDone;	// 32 = 0x20
    unsigned long long _successes;	// 40 = 0x28
    unsigned long long _failures;	// 48 = 0x30
    unsigned int _color;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000008543c
- (void)_printProgressBar;	// IMP=0x0000000000085436
- (void)colorize:(unsigned int)arg1;	// IMP=0x00000000000853c4
- (void)itemCompleteWithStatus:(_Bool)arg1;	// IMP=0x00000000000853a3
- (void)updateItemName:(id)arg1;	// IMP=0x0000000000085361
- (void)setTitle:(id)arg1 withTotalItems:(unsigned long long)arg2;	// IMP=0x000000000008527b

@end
