//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExtensionContext.h>

#import <ContactsUI/CNContactPickerHostProtocol-Protocol.h>
#import <ContactsUI/CNContactPickerServiceProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactPickerExtensionContext : NSExtensionContext <CNContactPickerServiceProtocol, CNContactPickerHostProtocol>
{
}

+ (id)_extensionAuxiliaryHostProtocol;	// IMP=0x0000000000066ee8
+ (id)_extensionAuxiliaryVendorProtocol;	// IMP=0x0000000000066d88
- (void)pickerDidCancel;	// IMP=0x000000000006751b
- (void)pickerDidSelectContacts:(id)arg1 properties:(id)arg2;	// IMP=0x00000000000673a5
- (void)pickerDidSelectContact:(id)arg1 property:(id)arg2;	// IMP=0x000000000006722f
- (void)invalidateSelectionAnimated:(_Bool)arg1;	// IMP=0x0000000000067173
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067058

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
