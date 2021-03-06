//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

@interface CalDAVCalendarUserAddress : NSObject
{
    NSURL *_address;	// 8 = 0x8
    long long _preferred;	// 16 = 0x10
}

+ (_Bool)compareAddressURL:(id)arg1 localURL:(id)arg2;	// IMP=0x0000000000030855
+ (_Bool)compareAddressURL:(id)arg1 localString:(id)arg2;	// IMP=0x00000000000307c3
+ (id)_preferredAddressNoPreferred:(id)arg1;	// IMP=0x00000000000301a2
+ (id)_minPreferredAddress:(id)arg1;	// IMP=0x000000000002ff9f
+ (id)preferredAddress:(id)arg1;	// IMP=0x000000000002fde2
+ (id)unpackCalDAVUserAdress:(id)arg1;	// IMP=0x000000000002fcf1
+ (id)packCalDAVUserAdress:(id)arg1;	// IMP=0x000000000002fbb0
+ (long long)defaultPreferredAttribute;	// IMP=0x000000000002fba3
- (void).cxx_destruct;	// IMP=0x0000000000030cb6
@property long long preferred; // @synthesize preferred=_preferred;
@property(retain, nonatomic) NSURL *address; // @synthesize address=_address;
- (_Bool)isSameAsUserAddressURL:(id)arg1;	// IMP=0x000000000003074a
- (long long)compare:(id)arg1;	// IMP=0x000000000002fed0
- (id)initWithAddress:(id)arg1 preferred:(long long)arg2;	// IMP=0x000000000002fb1c

@end

