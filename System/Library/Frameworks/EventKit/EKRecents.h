//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EKRecents : NSObject
{
}

+ (_Bool)recordRecentForContactWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3;	// IMP=0x000000000001d0c9
+ (void)recordRecentWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;	// IMP=0x000000000001cf54
+ (id)recentForContactWithAddress:(id)arg1 name:(id)arg2 kind:(id)arg3;	// IMP=0x000000000001ce70
+ (id)crRecentsDomainCalendarString;	// IMP=0x000000000001ce0e
+ (id)crAddressKindPhoneNumberString;	// IMP=0x000000000001cdac
+ (id)crAddressKindEmailString;	// IMP=0x000000000001cd4a
+ (Class)crRecentContactsLibraryClass;	// IMP=0x000000000001ccfc

@end

