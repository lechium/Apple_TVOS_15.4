//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface FBSApplicationUninstallOptions : NSObject
{
    _Bool _userInitiated;	// 8 = 0x8
    _Bool _showsArchiveOption;	// 9 = 0x9
}

+ (id)userInitiated;	// IMP=0x0000000000066f20
@property(nonatomic) _Bool showsArchiveOption; // @synthesize showsArchiveOption=_showsArchiveOption;
@property(nonatomic, getter=isUserInitiated) _Bool userInitiated; // @synthesize userInitiated=_userInitiated;

@end
