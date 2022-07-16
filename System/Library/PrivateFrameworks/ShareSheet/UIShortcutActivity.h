//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSNumber, NSString, UIImage;

@interface UIShortcutActivity
{
    NSString *_identifier;	// 8 = 0x8
    NSNumber *_sortValue;	// 16 = 0x10
    UIImage *_iconImage;	// 24 = 0x18
    NSString *_singleUseToken;	// 32 = 0x20
    NSString *_name;	// 40 = 0x28
    NSArray *_photosAssetIdentifiers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000007a77a
@property(retain, nonatomic) NSArray *photosAssetIdentifiers; // @synthesize photosAssetIdentifiers=_photosAssetIdentifiers;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *singleUseToken; // @synthesize singleUseToken=_singleUseToken;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSNumber *sortValue; // @synthesize sortValue=_sortValue;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)prepareWithActivityExtensionItemData:(id)arg1;	// IMP=0x000000000007a4e1
- (id)activityTitle;	// IMP=0x000000000007a4cf
- (id)activityType;	// IMP=0x000000000007a411
- (id)_actionImage;	// IMP=0x000000000007a383
- (long long)_defaultSortGroup;	// IMP=0x000000000007a378
- (id)initWithApplicationExtension:(id)arg1 singleUseToken:(id)arg2 photosAssetIdentifiers:(id)arg3;	// IMP=0x000000000007a2d2
- (id)initPartialShortcutWithName:(id)arg1 identifier:(id)arg2 image:(id)arg3 sortValue:(id)arg4;	// IMP=0x000000000007a1e1
- (id)initWithPartial:(id)arg1;	// IMP=0x000000000007a0b6

@end
