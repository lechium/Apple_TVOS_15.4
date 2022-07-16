//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface GKEditAction : NSObject
{
    _Bool _destructive;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    SEL _selector;	// 24 = 0x18
}

+ (id)deleteActionWithName:(id)arg1;	// IMP=0x00000000000a2593
+ (id)actionWithName:(id)arg1 selector:(SEL)arg2;	// IMP=0x00000000000a2527
- (void).cxx_destruct;	// IMP=0x00000000000a2621
@property(nonatomic) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;

@end
