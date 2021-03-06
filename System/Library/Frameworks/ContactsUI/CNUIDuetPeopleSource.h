//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNUIPeopleSource-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNUIDuetPeopleSource : NSObject <CNUIPeopleSource>
{
}

+ (id)sourceWithEnvironment:(id)arg1 contactStore:(id)arg2;	// IMP=0x000000000000d48f
+ (id)sourceKind;	// IMP=0x000000000000d482
- (id)peopleInGroup:(id)arg1 keysToFetch:(id)arg2;	// IMP=0x000000000000d4ae
- (id)groups;	// IMP=0x000000000000d4a1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

