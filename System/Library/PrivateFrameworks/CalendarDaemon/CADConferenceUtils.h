//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CADConferenceUtils : NSObject
{
}

+ (id)_extractURLStringsFromCalEvent:(void *)arg1;	// IMP=0x0000000000043e12
+ (id)_conferenceURLsToRenewWithDatabase:(struct CalDatabase *)arg1 URLString:(id)arg2;	// IMP=0x00000000000435cf
+ (_Bool)_performConferenceURLRenewalWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x00000000000435c7
+ (void)removeNextConferenceLinkRenewalDate;	// IMP=0x000000000004353d
+ (void)setNextConferenceLinkRenewalDate:(id)arg1;	// IMP=0x000000000004344b
+ (void)performConferenceLinkRenewalIfNeeded;	// IMP=0x0000000000042fa0

@end

