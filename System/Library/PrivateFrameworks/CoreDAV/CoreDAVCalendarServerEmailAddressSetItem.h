//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem
{
    NSMutableSet *_emailAddresses;	// 56 = 0x38
    CoreDAVItemWithNoChildren *_unauthenticated;	// 64 = 0x40
}

+ (id)copyParseRules;	// IMP=0x0000000000057a64
- (void).cxx_destruct;	// IMP=0x0000000000057dc9
@property(retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated; // @synthesize unauthenticated=_unauthenticated;
@property(retain, nonatomic) NSMutableSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
- (void)addEmailAddress:(id)arg1;	// IMP=0x0000000000057cbd
- (id)description;	// IMP=0x000000000005795a
- (id)init;	// IMP=0x0000000000057934

@end

