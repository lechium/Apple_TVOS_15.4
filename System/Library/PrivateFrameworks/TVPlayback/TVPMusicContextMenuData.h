//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TVPMusicContextMenuData : NSObject
{
    NSString *_heading;	// 8 = 0x8
    NSArray *_menuItems;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ed223
@property(copy, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
- (id)initWithHeading:(id)arg1 menuItems:(id)arg2;	// IMP=0x00000000000ed138
- (id)initWithMenuItems:(id)arg1;	// IMP=0x00000000000ed121

@end

