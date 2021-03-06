//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSFormatter.h>

@interface HFValueSetFormatter : NSFormatter
{
    long long _unitStyle;	// 8 = 0x8
    CDUnknownBlockType _stringProvider;	// 16 = 0x10
}

+ (id)formatterWithStringProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b634
- (void).cxx_destruct;	// IMP=0x000000000004b959
@property(copy, nonatomic) CDUnknownBlockType stringProvider; // @synthesize stringProvider=_stringProvider;
@property(nonatomic) long long unitStyle; // @synthesize unitStyle=_unitStyle;
- (id)stringForObjectValue:(id)arg1;	// IMP=0x000000000004b856
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004b7c9
- (id)initWithStringProvider:(CDUnknownBlockType)arg1;	// IMP=0x000000000004b6ce
- (id)init;	// IMP=0x000000000004b67d

@end

