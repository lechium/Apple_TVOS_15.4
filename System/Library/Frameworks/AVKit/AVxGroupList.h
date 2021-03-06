//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface AVxGroupList : NSObject
{
    NSArray *_groups;	// 8 = 0x8
}

+ (id)groupsFromBarButtonItems:(id)arg1;	// IMP=0x00000000001180bc
- (void).cxx_destruct;	// IMP=0x00000000001180ac
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
- (struct CGPoint)originForItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000117eaf
- (id)itemForIndex:(unsigned long long)arg1;	// IMP=0x0000000000117d06
- (id)groupForItemIndex:(unsigned long long)arg1;	// IMP=0x0000000000117b93
- (void)setItemWidth:(double)arg1;	// IMP=0x0000000000117a5a
- (id)initWithGroups:(id)arg1;	// IMP=0x00000000001179e7

@end

