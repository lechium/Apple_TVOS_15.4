//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AALocalContactInfo, NSString;

@interface AAAccountContactPromptModel : NSObject
{
    _Bool _primaryActionRequiresAuth;	// 8 = 0x8
    _Bool _destructiveActionRequiresAuth;	// 9 = 0x9
    AALocalContactInfo *_contact;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_detailsLabel;	// 32 = 0x20
    NSString *_detailsSubtitle;	// 40 = 0x28
    NSString *_primaryActionText;	// 48 = 0x30
    NSString *_secondaryActionText;	// 56 = 0x38
    NSString *_destructiveActionText;	// 64 = 0x40
    NSString *_destructiveActionSheetTitle;	// 72 = 0x48
    NSString *_destructiveActionSheetDetails;	// 80 = 0x50
    NSString *_destructiveActionSheetCancelText;	// 88 = 0x58
    NSString *_doneButtonTitle;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000065936
@property(nonatomic) _Bool destructiveActionRequiresAuth; // @synthesize destructiveActionRequiresAuth=_destructiveActionRequiresAuth;
@property(nonatomic) _Bool primaryActionRequiresAuth; // @synthesize primaryActionRequiresAuth=_primaryActionRequiresAuth;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(copy, nonatomic) NSString *destructiveActionSheetCancelText; // @synthesize destructiveActionSheetCancelText=_destructiveActionSheetCancelText;
@property(copy, nonatomic) NSString *destructiveActionSheetDetails; // @synthesize destructiveActionSheetDetails=_destructiveActionSheetDetails;
@property(copy, nonatomic) NSString *destructiveActionSheetTitle; // @synthesize destructiveActionSheetTitle=_destructiveActionSheetTitle;
@property(copy, nonatomic) NSString *destructiveActionText; // @synthesize destructiveActionText=_destructiveActionText;
@property(copy, nonatomic) NSString *secondaryActionText; // @synthesize secondaryActionText=_secondaryActionText;
@property(copy, nonatomic) NSString *primaryActionText; // @synthesize primaryActionText=_primaryActionText;
@property(copy, nonatomic) NSString *detailsSubtitle; // @synthesize detailsSubtitle=_detailsSubtitle;
@property(copy, nonatomic) NSString *detailsLabel; // @synthesize detailsLabel=_detailsLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) AALocalContactInfo *contact; // @synthesize contact=_contact;
- (id)init;	// IMP=0x000000000006579f

@end

