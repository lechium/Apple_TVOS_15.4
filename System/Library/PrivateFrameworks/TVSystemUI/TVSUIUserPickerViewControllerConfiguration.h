//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVSystemUI/NSCopying-Protocol.h>

@class NSString;

@interface TVSUIUserPickerViewControllerConfiguration : NSObject <NSCopying>
{
    _Bool _allowsMultipleSelection;	// 8 = 0x8
    _Bool _automaticallyDismissWhenFinished;	// 9 = 0x9
    _Bool _showAddUserAction;	// 10 = 0xa
    unsigned long long _minimumSelectionCount;	// 16 = 0x10
    double _monogramDiameter;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    NSString *_doneButtonTitle;	// 48 = 0x30
    unsigned long long _hideAddUserActionWhenUserCountIsGreaterThan;	// 56 = 0x38
    NSString *_addUserActionTitle;	// 64 = 0x40
}

+ (id)defaultConfiguration;	// IMP=0x0000000000022c2b
- (void).cxx_destruct;	// IMP=0x0000000000022e46
@property(retain, nonatomic) NSString *addUserActionTitle; // @synthesize addUserActionTitle=_addUserActionTitle;
@property(nonatomic) unsigned long long hideAddUserActionWhenUserCountIsGreaterThan; // @synthesize hideAddUserActionWhenUserCountIsGreaterThan=_hideAddUserActionWhenUserCountIsGreaterThan;
@property(nonatomic) _Bool showAddUserAction; // @synthesize showAddUserAction=_showAddUserAction;
@property(copy, nonatomic) NSString *doneButtonTitle; // @synthesize doneButtonTitle=_doneButtonTitle;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool automaticallyDismissWhenFinished; // @synthesize automaticallyDismissWhenFinished=_automaticallyDismissWhenFinished;
@property(nonatomic) double monogramDiameter; // @synthesize monogramDiameter=_monogramDiameter;
@property(nonatomic) unsigned long long minimumSelectionCount; // @synthesize minimumSelectionCount=_minimumSelectionCount;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection=_allowsMultipleSelection;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022ca1
- (id)init;	// IMP=0x0000000000022c45

@end

