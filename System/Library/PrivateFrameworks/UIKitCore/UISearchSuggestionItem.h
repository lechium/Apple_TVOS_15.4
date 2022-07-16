//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISearchSuggestion-Protocol.h>

@class NSString, UIImage;

@interface UISearchSuggestionItem : NSObject <UISearchSuggestion>
{
    NSString *_localizedSuggestion;	// 8 = 0x8
    NSString *_localizedDescription;	// 16 = 0x10
    UIImage *_iconImage;	// 24 = 0x18
}

+ (id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2 iconImage:(id)arg3;	// IMP=0x0000000000119759
+ (id)suggestionWithLocalizedSuggestion:(id)arg1 descriptionString:(id)arg2;	// IMP=0x000000000011973d
+ (id)suggestionWithLocalizedSuggestion:(id)arg1;	// IMP=0x000000000011971f
- (void).cxx_destruct;	// IMP=0x00000000001199b5
@property(readonly, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(readonly, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(readonly, nonatomic) NSString *localizedSuggestion; // @synthesize localizedSuggestion=_localizedSuggestion;
@property(readonly, copy) NSString *debugDescription;
- (id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2 iconImage:(id)arg3;	// IMP=0x000000000011981a
- (id)initWithLocalizedSuggestion:(id)arg1 localizedDescription:(id)arg2;	// IMP=0x0000000000119805
- (id)initWithLocalizedSuggestion:(id)arg1;	// IMP=0x00000000001197ee

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
