//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSHTTPCookie.h>

#import <AppleMediaServices/AMSHashable-Protocol.h>
#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface NSHTTPCookie (AMSSecureCoding) <NSSecureCoding, AMSHashable>
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000025770d
+ (id)classesForPropertyCoding;	// IMP=0x0000000000257502
+ (id)ams_cookieByMarkingCookieAsDeleted:(id)arg1;	// IMP=0x0000000000257715
+ (id)ams_propertiesForCookies:(id)arg1;	// IMP=0x0000000000258960
+ (id)ams_cookiesForProperties:(id)arg1;	// IMP=0x00000000002588f7
+ (id)ams_cookiesByMergingProperties:(id)arg1 intoProperties:(id)arg2;	// IMP=0x000000000025860f
+ (id)ams_dataByArchivingPropertiesOfCookies:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000258a54
+ (id)ams_cookiesByUnarchivingPropertyData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000258991
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025764a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002575c4
@property(readonly, nonatomic) NSString *hashedDescription;
- (_Bool)ams_isEquivalent:(id)arg1;	// IMP=0x00000000002582d7
- (_Bool)ams_isEqualToCookie:(id)arg1;	// IMP=0x0000000000257a06
@property(readonly, nonatomic, getter=ams_isExpired) _Bool ams_expired;
@property(readonly, nonatomic, getter=ams_isDeleted) _Bool ams_deleted;
@property(readonly, nonatomic, getter=ams_isCookieValidForBag) _Bool ams_cookieValidForBag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

