//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVxGroup : NSObject
{
    double _itemWidth;	// 8 = 0x8
    NSMutableArray *_buttonItems;	// 16 = 0x10
    double _totalWidth;	// 24 = 0x18
    double _interitemSpace;	// 32 = 0x20
    long long _alignment;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001179d7
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double interitemSpace; // @synthesize interitemSpace=_interitemSpace;
@property(nonatomic) double totalWidth; // @synthesize totalWidth=_totalWidth;
@property(retain, nonatomic) NSMutableArray *buttonItems; // @synthesize buttonItems=_buttonItems;
- (double)offsetForItem:(unsigned long long)arg1;	// IMP=0x00000000001178e8
- (void)setItemWidth:(double)arg1;	// IMP=0x0000000000117846
- (void)addItem:(id)arg1;	// IMP=0x0000000000117830
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x00000000001177bc

@end
