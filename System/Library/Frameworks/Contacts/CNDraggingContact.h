//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactStore, NSURL;

@interface CNDraggingContact : NSObject
{
    CNContact *_contact;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    NSURL *_cachedFileURLRepresentation;	// 24 = 0x18
}

+ (id)availableDataRepresentationTypes;	// IMP=0x00000000000af2d1
+ (id)os_log;	// IMP=0x00000000000af275
- (void).cxx_destruct;	// IMP=0x00000000000b0333
@property(retain, nonatomic) NSURL *cachedFileURLRepresentation; // @synthesize cachedFileURLRepresentation=_cachedFileURLRepresentation;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)dataRepresentationForType:(id)arg1;	// IMP=0x00000000000afe7e
- (void)cleanupFileURLRepresentation;	// IMP=0x00000000000afdba
- (id)fileURLRepresentation;	// IMP=0x00000000000afb6e
- (id)fileNameForContact:(id)arg1;	// IMP=0x00000000000afaa9
- (id)serializeContactToVCard:(id)arg1;	// IMP=0x00000000000af9af
- (id)fetchContactWithKeys:(id)arg1;	// IMP=0x00000000000af3e2
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;	// IMP=0x00000000000af35c

@end

