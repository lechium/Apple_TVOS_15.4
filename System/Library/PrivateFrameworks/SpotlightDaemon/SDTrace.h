//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SDTraceItem;

@interface SDTrace : NSObject
{
    SDTraceItem *_items[32];	// 8 = 0x8
    int _current;	// 264 = 0x108
    NSString *_title;	// 272 = 0x110
}

+ (void)initialize;	// IMP=0x000000000000c5f7
- (void).cxx_destruct;	// IMP=0x000000000000cdfa
@property(readonly, nonatomic) int current; // @synthesize current=_current;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x000000000000cbd6
- (id)items;	// IMP=0x000000000000ca47
- (long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5;	// IMP=0x000000000000c748
- (id)initWithTitle:(id)arg1;	// IMP=0x000000000000c675
- (id)init;	// IMP=0x000000000000c661

@end

