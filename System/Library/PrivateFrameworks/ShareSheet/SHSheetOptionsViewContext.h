//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, UIViewController;

@interface SHSheetOptionsViewContext : NSObject
{
    NSArray *_customizationGroups;	// 8 = 0x8
    UIViewController *_itemPreviewViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006b13f
@property(nonatomic) __weak UIViewController *itemPreviewViewController; // @synthesize itemPreviewViewController=_itemPreviewViewController;
@property(copy, nonatomic) NSArray *customizationGroups; // @synthesize customizationGroups=_customizationGroups;
- (id)description;	// IMP=0x000000000006b055
- (id)initWithCustomizationGroups:(id)arg1;	// IMP=0x000000000006afe2

@end

