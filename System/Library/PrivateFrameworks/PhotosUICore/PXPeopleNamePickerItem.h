//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, NSAttributedString, PHPerson;

@interface PXPeopleNamePickerItem : NSObject
{
    PHPerson *_person;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    NSAttributedString *_title;	// 24 = 0x18
    NSAttributedString *_subtitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000007929ee
@property(readonly) NSAttributedString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) NSAttributedString *title; // @synthesize title=_title;
@property(readonly) CNContact *contact; // @synthesize contact=_contact;
@property(readonly) PHPerson *person; // @synthesize person=_person;
- (id)initWithContact:(id)arg1 searchPrefix:(id)arg2;	// IMP=0x0000000000792369
- (id)initWithPerson:(id)arg1 searchPrefix:(id)arg2;	// IMP=0x000000000079227f

@end

