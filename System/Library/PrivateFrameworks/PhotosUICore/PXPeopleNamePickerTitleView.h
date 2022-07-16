//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableArray, NSString, PHFace, PHPerson, UIFont, UIImageView, UITextField;

@interface PXPeopleNamePickerTitleView : UIView <PXPhotoLibraryUIChangeObserver>
{
    UITextField *_nameField;	// 8 = 0x8
    NSString *_localizedName;	// 16 = 0x10
    UIFont *_nameFont;	// 24 = 0x18
    NSString *_placeholder;	// 32 = 0x20
    UIFont *_placeholderFont;	// 40 = 0x28
    NSMutableArray *_fetchResults;	// 48 = 0x30
    UIImageView *_avatarView;	// 56 = 0x38
    PHPerson *_person;	// 64 = 0x40
    PHFace *_face;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000062a1ee
@property(readonly, nonatomic) PHFace *face; // @synthesize face=_face;
@property(readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(readonly, nonatomic) NSMutableArray *fetchResults; // @synthesize fetchResults=_fetchResults;
@property(retain, nonatomic) UIFont *placeholderFont; // @synthesize placeholderFont=_placeholderFont;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) UIFont *nameFont; // @synthesize nameFont=_nameFont;
@property(copy, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) UITextField *nameField; // @synthesize nameField=_nameField;
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x0000000000629e80
- (void)_updateFieldPlaceholder;	// IMP=0x0000000000629d35
- (void)_updateFieldText;	// IMP=0x0000000000629bea
- (void)resetImages;	// IMP=0x000000000062961c
- (void)finishEditing;	// IMP=0x00000000006295cf
- (void)dealloc;	// IMP=0x0000000000629503
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000629428
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2 face:(id)arg3;	// IMP=0x00000000006289ae
- (id)initWithFrame:(struct CGRect)arg1 face:(id)arg2;	// IMP=0x00000000006288d2
- (id)initWithFrame:(struct CGRect)arg1 person:(id)arg2;	// IMP=0x00000000006287f6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000062876f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000006286e8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
