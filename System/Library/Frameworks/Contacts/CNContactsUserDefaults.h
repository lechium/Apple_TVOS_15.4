//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNContactsUserDefaults : NSObject
{
}

+ (void)flushSharedInstance;	// IMP=0x000000000003a7ad
+ (id)sharedDefaults;	// IMP=0x000000000003a728
- (void)setFilteredGroupAndContainerIDs:(id)arg1;	// IMP=0x000000000003aab5
- (id)filteredGroupAndContainerIDs;	// IMP=0x000000000003aa83
@property(nonatomic) _Bool shortNameFormatPrefersNicknames;
@property(nonatomic, getter=isShortNameFormatEnabled) _Bool shortNameFormatEnabled;
@property(nonatomic) long long shortNameFormat;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) long long sortOrder;
@property(nonatomic) long long displayNameOrder;
- (long long)newContactDisplayNameOrder;	// IMP=0x000000000003a88f
- (id)changeNotificationName;	// IMP=0x000000000003a850
- (id)init;	// IMP=0x000000000003a7cf

@end
