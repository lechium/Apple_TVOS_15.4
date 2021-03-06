//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HeadBoardModel/BSDescriptionProviding-Protocol.h>
#import <HeadBoardModel/NSCopying-Protocol.h>
#import <HeadBoardModel/NSMutableCopying-Protocol.h>
#import <HeadBoardModel/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface HBMStoreCollection : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSDictionary *_applications;	// 8 = 0x8
    NSDictionary *_folders;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004a39
- (void).cxx_destruct;	// IMP=0x0000000000004eca
@property(readonly, nonatomic) NSDictionary *folders; // @synthesize folders=_folders;
@property(readonly, nonatomic) NSDictionary *applications; // @synthesize applications=_applications;
- (id)succinctDescriptionBuilder;	// IMP=0x0000000000004df5
- (id)succinctDescription;	// IMP=0x0000000000004da5
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000004cb7
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000004c67
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004c34
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004c29
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004bbb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004a41
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004817
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;	// IMP=0x000000000000473b
- (id)initWithApplications:(id)arg1 folders:(id)arg2;	// IMP=0x0000000000004638
- (void)enumerateFoldersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000051d6
- (void)enumerateApplicationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000051c0
- (id)folderForID:(id)arg1;	// IMP=0x00000000000051aa
- (id)applicationForID:(id)arg1;	// IMP=0x0000000000005194
- (id)combinedDictionary;	// IMP=0x0000000000005115
- (id)hbm_collectionByApplyingCollectionChangeSet:(id)arg1;	// IMP=0x0000000000005e60

// Remaining properties
@property(readonly) Class superclass;

@end

