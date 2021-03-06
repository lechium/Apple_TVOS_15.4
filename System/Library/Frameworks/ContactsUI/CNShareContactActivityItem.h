//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/UIActivityItemSource-Protocol.h>
#import <ContactsUI/UIActivityItemSourceAttachment-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNShareContactActivityItem : NSObject <UIActivityItemSource, UIActivityItemSourceAttachment>
{
    CNContact *_contact;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a4176
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)activityViewController:(id)arg1 attachmentNameForActivityType:(id)arg2;	// IMP=0x00000000000a4072
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;	// IMP=0x00000000000a4067
- (id)activityViewController:(id)arg1 thumbnailImageForActivityType:(id)arg2 suggestedSize:(struct CGSize)arg3;	// IMP=0x00000000000a3f52
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;	// IMP=0x00000000000a3eed
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;	// IMP=0x00000000000a3e9d
- (id)activityViewControllerPlaceholderItem:(id)arg1;	// IMP=0x00000000000a3e84
- (id)initWithContact:(id)arg1;	// IMP=0x00000000000a3e19

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

