//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNPickerControllerDelegate-Protocol.h>

@class CNSocialProfile, NSString;

__attribute__((visibility("hidden")))
@interface CNPropertySocialProfileEditingCell <CNPickerControllerDelegate>
{
}

- (void)pickerDidCancel:(id)arg1;	// IMP=0x000000000009bb7a
- (void)picker:(id)arg1 didPickItem:(id)arg2;	// IMP=0x000000000009b978
- (void)labelButtonClicked:(id)arg1;	// IMP=0x000000000009b972
@property(readonly, nonatomic) CNSocialProfile *profile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

