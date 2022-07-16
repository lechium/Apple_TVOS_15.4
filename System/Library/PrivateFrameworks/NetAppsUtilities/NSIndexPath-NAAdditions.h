//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (NAAdditions)
+ (id)na_indexPathForRow:(long long)arg1 inSection:(long long)arg2;	// IMP=0x000000000001be34
+ (id)na_indexPathForItem:(long long)arg1 inSection:(long long)arg2;	// IMP=0x000000000001bd3a
@property(readonly, nonatomic) long long na_item;
@property(readonly, nonatomic) long long na_row;
@property(readonly, nonatomic) long long na_section;
- (void)na_each:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bda4
- (id)na_indexPathStartingAtPosition:(unsigned long long)arg1;	// IMP=0x000000000001bc64
@end
