//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXStoryMenuBuilder : NSObject
{
    NSMutableArray *_menuItems;	// 8 = 0x8
}

+ (id)_menuWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000000423fc1
+ (id)menuWithDeferredConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000000423f45
+ (void)_addDurationSectionToMenuBuilder:(id)arg1 withViewModel:(id)arg2;	// IMP=0x00000000003425a1
+ (id)defaultStoryActionsMenuWithViewModel:(id)arg1;	// IMP=0x0000000000342599
- (void).cxx_destruct;	// IMP=0x0000000000423f35
@property(readonly, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
- (void)_addMenuItem:(id)arg1;	// IMP=0x0000000000423eb9
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 submenuConfiguration:(CDUnknownBlockType)arg3;	// IMP=0x0000000000423e28
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 state:(long long)arg3 options:(unsigned long long)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000423d99
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 options:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000423d71
- (void)addItemWithTitle:(id)arg1 systemImageName:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000423d59
- (void)addSectionWithConfiguration:(CDUnknownBlockType)arg1;	// IMP=0x0000000000423cdd
- (id)init;	// IMP=0x0000000000423c87

@end

