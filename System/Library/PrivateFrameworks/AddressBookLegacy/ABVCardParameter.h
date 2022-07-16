//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface ABVCardParameter : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_grouping;	// 16 = 0x10
    id _value;	// 24 = 0x18
    NSMutableArray *_types;	// 32 = 0x20
    _Bool _primary;	// 40 = 0x28
}

- (id)description;	// IMP=0x0000000000054296
- (void)setIsPrimary:(_Bool)arg1;	// IMP=0x000000000005428d
- (_Bool)isPrimary;	// IMP=0x0000000000054284
- (id)value;	// IMP=0x000000000005427a
- (id)grouping;	// IMP=0x0000000000054270
- (void)setGrouping:(id)arg1;	// IMP=0x0000000000054253
- (id)name;	// IMP=0x0000000000054249
- (id)types;	// IMP=0x000000000005423f
- (void)addTypes:(id)arg1;	// IMP=0x0000000000054229
- (void)addType:(id)arg1;	// IMP=0x0000000000054213
- (void)setValue:(id)arg1;	// IMP=0x00000000000541f6
- (void)dealloc;	// IMP=0x000000000005419e
- (id)initWithName:(id)arg1;	// IMP=0x000000000005412b

@end
