//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVHKMediaEntityGrouping : NSObject
{
    NSString *_groupingKey;	// 8 = 0x8
    NSArray *_groups;	// 16 = 0x10
    NSArray *_indexBarItems;	// 24 = 0x18
}

+ (id)new;	// IMP=0x00000000000ada3a
- (void).cxx_destruct;	// IMP=0x00000000000ae0a0
@property(copy, nonatomic) NSArray *indexBarItems; // @synthesize indexBarItems=_indexBarItems;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) NSString *groupingKey; // @synthesize groupingKey=_groupingKey;
- (id)description;	// IMP=0x00000000000adf3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000adcc3
- (unsigned long long)hash;	// IMP=0x00000000000adbbe
- (id)_initWithGroupingKey:(id)arg1 groups:(id)arg2 indexBarItems:(id)arg3;	// IMP=0x00000000000adad8
- (id)init;	// IMP=0x00000000000ada69

@end

