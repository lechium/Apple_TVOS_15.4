//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface HBFolderNameInfo : NSObject
{
    NSArray *_folderNames;	// 8 = 0x8
    NSString *_fallbackFolderName;	// 16 = 0x10
}

+ (id)localizedDefaultFolderName;	// IMP=0x002000000003471b
+ (id)proposedFolderNameWithTargetFolderNameInfo:(id)arg1 editingFolderNameInfo:(id)arg2;	// IMP=0x00100000000344d9
- (void).cxx_destruct;	// IMP=0x002000000003474f
@property(readonly, nonatomic) NSString *fallbackFolderName; // @synthesize fallbackFolderName=_fallbackFolderName;
@property(readonly, nonatomic) NSArray *folderNames; // @synthesize folderNames=_folderNames;
- (id)description;	// IMP=0x001000000003442f
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000003430e
- (id)initWithApplication:(id)arg1;	// IMP=0x00100000000341b2

@end

