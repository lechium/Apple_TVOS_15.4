//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, PSSpecifier, UIViewController;
@protocol PSSpecifierControllerDelegate;

@interface PSSpecifierController : NSObject
{
    UIViewController<PSSpecifierControllerDelegate> *_viewController;	// 8 = 0x8
    PSSpecifier *_specifier;	// 16 = 0x10
    NSMutableArray *_specifiers;	// 24 = 0x18
    NSMutableArray *_bundleControllers;	// 32 = 0x20
    NSMutableArray *_groups;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000928a1
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) NSMutableArray *bundleControllers; // @synthesize bundleControllers=_bundleControllers;
@property(retain, nonatomic) NSMutableArray *specifiers; // @synthesize specifiers=_specifiers;
@property(retain, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(nonatomic) __weak UIViewController<PSSpecifierControllerDelegate> *viewController; // @synthesize viewController=_viewController;
- (id)specifierForID:(id)arg1;	// IMP=0x000000000009278b
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3;	// IMP=0x000000000009269f
- (_Bool)_getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierAtIndex:(long long)arg3 groups:(id)arg4;	// IMP=0x00000000000925d2
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifier:(id)arg3;	// IMP=0x0000000000092586
- (_Bool)getGroup:(long long *)arg1 row:(long long *)arg2 ofSpecifierID:(id)arg3;	// IMP=0x000000000009251e
- (id)specifierAtIndex:(long long)arg1;	// IMP=0x000000000009243c
- (id)specifierAtIndexPath:(id)arg1;	// IMP=0x000000000009240b
- (long long)indexForIndexPath:(id)arg1;	// IMP=0x0000000000092340
- (void)createGroupIndices;	// IMP=0x00000000000922b9
- (id)_createGroupIndices:(id)arg1;	// IMP=0x000000000009219c
- (long long)indexOfGroup:(long long)arg1;	// IMP=0x0000000000091f62
- (long long)numberOfRowsInSection:(long long)arg1;	// IMP=0x0000000000091e60
- (long long)numberOfSections;	// IMP=0x0000000000091e27
- (void)reloadSpecifiers;	// IMP=0x0000000000091c9f
- (void)prepareSpecifiersMetadata;	// IMP=0x0000000000091b13
- (id)loadSpecifiers;	// IMP=0x00000000000919dd
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2 bundle:(id)arg3;	// IMP=0x0000000000091765
- (id)loadSpecifiersFromPlistName:(id)arg1 target:(id)arg2;	// IMP=0x00000000000916b5
- (id)readPreferenceValue:(id)arg1;	// IMP=0x000000000009169c
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;	// IMP=0x0000000000091683
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000009167d
- (id)init;	// IMP=0x0000000000091612

@end

