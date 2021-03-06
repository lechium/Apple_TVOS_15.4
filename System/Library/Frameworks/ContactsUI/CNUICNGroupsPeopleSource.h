//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class CNContactStore, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNUICNGroupsPeopleSource : NSObject <CNUIPeopleSource>
{
    CNContactStore *_contactStore;	// 8 = 0x8
    NSArray *_groups;	// 16 = 0x10
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000004b323
+ (id)sourceKind;	// IMP=0x000000000004b316
- (void).cxx_destruct;	// IMP=0x000000000004b713
@property(retain, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000004b5bc
- (CDUnknownBlockType)groupToPeopleGroupTransform;	// IMP=0x000000000004b48c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

